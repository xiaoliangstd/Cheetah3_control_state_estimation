function [q_error,COP_,q_sol_whole_step,Fr,dq_sol_whole_step,phi_overall,time]...
    =opt_inv_solve_floating_base_eq(options,Alpha,foot_index,q0,StanceFeet,t_ref)
    
   %q0=[0, 0, 0.27, 1.5708, 0, 1.5708, 0.04, 0.2, -1.26, -0.04, 0.2, -1.26, 0.04,0.2, -1.26, -0.04, 0.2, -1.26];
    %q0=[0, 0, 0.36, 1.5708, 0, 1.5708, 0.04, -0.125, -0.6, -0.04, -0.125, -0.6, 0.04,-0.125, -0.6, -0.04, -0.125,-0.6]; %0.0143
    %q0=[0, 0, 0.36, 1.5708, 0, 1.5708, 0.04, -0.16, -0.6, -0.04, -0.16, -0.6, 0.04,-0.125, -0.6, -0.04, -0.125,-0.6];
    %q0=[0, 0, 0.36, 1.5708, 0, 1.5708, 0.04, -0.125, -0.6, 0.0416, -0.125, -0.6, 0.04,-0.125, -0.6, 0.04, -0.125,-0.6];
    %q0=[0, 0, 0.356, 1.5708, 0, 1.5708, 0.04, -0.25, -0.6, 0.0416, -0.25, -0.6, 0.04,-0.25, -0.6, 0.04, -0.25,-0.6];
    % below line decide how many points in each step
    num_points = length(linspace(0,1,50));
    COP_=0;
   % q_fval_overall=zeros(num_of_point,38);
    q_error = zeros(num_points,1);
    phi_overall=zeros(num_points,18);
    Fr = zeros(num_points,9);
    q_sol_whole_step = zeros(num_points,18);
    dq_sol_whole_step = zeros(num_points,18);
    
    time = zeros(num_points,1);  % take time as output from this function
    t_start = t_ref; % give starting point of previous step as ref time.
    t_inst =t_start;
%% Platform motion
zp=0.1; w=6.2519; % zpsinwt
    
    i=1;
    
    %COP_ = zeros(num_points,3);
    
            
        if foot_index==1
            
            theta_plus = (Alpha(36)-StanceFeet(1))/4;
            theta_minus = (Alpha(42)-StanceFeet(1))/4;
        
        elseif foot_index==2
            
            theta_plus = (Alpha(36)-StanceFeet(7))/4;
            theta_minus = (Alpha(42)-StanceFeet(7))/4;
        
        elseif foot_index==3
            
            theta_plus = (Alpha(36)-StanceFeet(1))/4;
            theta_minus = (Alpha(42)-StanceFeet(1))/4;
        
        elseif foot_index==4
            
            theta_plus = (Alpha(36)-StanceFeet(7))/4;
            theta_minus = (Alpha(42)-StanceFeet(7))/4;  
        
        end
    q0_ref=q0;
    base_offset=q0_ref(1);
% % %     theta_plus = 0+(foot_index-1)*(Alpha1(42)-Alpha1(36))/4;
% % %     theta_minus = (Alpha1(42)-Alpha1(36))/4 +(foot_index-1)*(Alpha1(42)-Alpha1(36))/4;%0.025;%base motion after each leg movement
% % %     
    %StanceFeet=F_1_func(q0); %change it
    for s=linspace(0,1,num_points)

        theta = s*(theta_minus-theta_plus)+theta_plus;
        q1 = theta-theta_plus;
        
        %[~,StanceFeet]= opt_floating_base_hc(q0,q0, foot_index);

        [ph,dph,~]=laikago_new_Bezier_6th(Alpha,s);
        
        SF_p = zeros(9,1);
        SF_p(3)=-zp*sin(w*t_inst); SF_p(6)=-zp*sin(w*t_inst); SF_p(9)=-zp*sin(w*t_inst);
        
        StanceFeet(3:3:9)=0;
        phi = [q1;ph;StanceFeet]-[-base_offset; 0; 0; -pi/2; 0; -pi/2; 0;0;0 ; SF_p]; %Desired value
        phi_overall(i,:) = phi';

        
        tic
        [q_sol,q_fval]=fsolve(@(q) opt_floating_base_hc(q,phi,foot_index),q0,options);
        %[~,StanceFeet]= opt_floating_base_hc(q_sol,phi, foot_index); %check
        toc
        q_fval_overall(i,:)=q_fval';
        q_fval = norm(q_fval);
        q_error(i)=q_fval;
        q0=q_sol;
       
        %% below is used to calculate the velocity of the robot in joint space
        
        dtheta = 0.1;
        
        ds_dtheta=(theta_minus-theta_plus);% ds_dtheta=1/(theta_minus-theta_plus) (This part is taken care while using ds_theta;
        stance_foot_velocity = zeros(9,1);
        stance_foot_velocity(3)=zp*w*sin(w*t_inst); stance_foot_velocity(6)=zp*w*sin(w*t_inst); stance_foot_velocity(9)=zp*w*sin(w*t_inst);

        %dphi = [1/ds_dtheta*dph(1)*dtheta;dtheta;1/ds_dtheta*dph(2)*dtheta;stance_foot_velocity;stance_foot_velocity];
        dphi = [dtheta;(1/ds_dtheta)*dph*dtheta; stance_foot_velocity];% hd_dot
        %[dq_sol,dq_fval]=lsqnonlin(@(dq) opt_floating_base_dhc(dq,q_sol,dphi),dq0,dq_lb,dq_ub,options);
        
        if foot_index==1
            hc_j = j_hc_opt1_func(q_sol); % Jacobian calculated from symbolic computation using frost
        
        elseif foot_index==2
            hc_j = j_hc_opt2_func(q_sol);
        
        elseif foot_index==3
            hc_j = j_hc_opt3_func(q_sol);  
        
        elseif foot_index==4
            hc_j = j_hc_opt4_func(q_sol);   
        
        end
        
        dq_sol=hc_j\dphi; %dphi=hd_dot
        t_step = q1/dtheta;
        q_sol_whole_step(i,:)=q_sol;
        dq_sol_whole_step(i,:)=dq_sol;
        t_inst = t_start + t_step;
        time(i,:)= t_inst;
        
       % [~, dev]= opt_floating_base_hc(q_sol,0);
        %dq0 = dq_sol;
       % deviation(i,1) =dev;
        
        StanceFeet(3:3:9)= zp*sin(w*t_inst);
        StanceFeet;
        %% calculate COP

        [COP1,Fr1] = opt_dynamics(s,q_sol,dq_sol,Alpha,foot_index,StanceFeet,t_inst);
        
        Fr(i,:)= Fr1';
        
        %COP_(i,:) = [COP1,0];

        %% update the loop
        i=i+1;
%         if i==35
%             pause(10)
%         end
        
    end
    %error = norm(q_error)+norm(dq_error);
     
end















