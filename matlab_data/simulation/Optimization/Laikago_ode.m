% q(7) FR_hip_motor_2_chassis_joint
% q(8) FR_upper_leg_2_hip_motor_joint
% q(9) FR_lower_leg_2_upper_leg_joint
% q(10) FL_hip_motor_2_chassis_joint
% q(11) FL_upper_leg_2_hip_motor_joint
% q(12) FL_lower_leg_2_upper_leg_joint
% q(13) RR_hip_motor_2_chassis_joint
% q(14) RR_upper_leg_2_hip_motor_joint
% q(15) RR_lower_leg_2_upper_leg_joint
% q(16) RL_hip_motor_2_chassis_joint
% q(17) RL_upper_leg_2_hip_motor_joint
% q(18) RL_lower_leg_2_upper_leg_joint


clc
clear all
tic
global s_overall y_global dy_global t_global global_position_reference Fr COP s_global dphi_global phi_global hc_global
tspan=[0 1];
x0=zeros(1,36);
q0=[0, 0, 0.229, 1.5708, 0, 1.5708, 0.0332,0.6623, -1.2581, -0.0307, 0.6241, -1.2379, 0.0415,0.6784, -1.2613, -0.0512, 0.6456, -1.2469];

x0(1:18)=q0;

% x0(4)=pi/2;
% %x0(5)=pi/2;
% x0(6)=pi/2;
% x0(8)=-0.7;
% x0(9)=0.7;
% x0(11)=-0.7;
% x0(12)=0.7;
% x0(14)=-0.7;
% x0(15)=0.7;
% x0(17)=-0.7;
% x0(18)=0.7;
%x0=zeros(1,36);
%x0(15)= 0.2;
%x0(1:18)=rand(18,1);
%x0=[x0;x0];
%laikago_animation(0,x0,0)
%x0=rand(1,36);

y_global=[];

dy_global=[];
phi_global=[];

load alpha_op0.mat;
alpha=alph_op;

Alpha1=alpha;

Alpha2=alpha;
Alpha2(36:42)=alpha(36:42)-0.44*ones(1,7);
Alpha2(43:49)=-alpha(43:49);

Alpha3=alpha;
Alpha3(43:49)=-alpha(43:49);

Alpha4=alpha;
Alpha4(36:42)=alpha(36:42)-0.44*ones(1,7);

Alpha=[Alpha1;Alpha2;Alpha3;Alpha4];

%{
alpha = [0.3683, 0.3683, 0.3683, 0.3683, 0.3683, 0.3683, 0.3683,...  %base config
         pi/2  , pi/2  , pi/2  , pi/2  , pi/2  , pi/2  , pi/2,...    %base config
         0     , 0     , 0     , 0     , 0     , 0     , 0,...       %base config
         pi/2  , pi/2  , pi/2  , pi/2  , pi/2  , pi/2  , pi/2,...    %base config
         0.1838, 0.1938, 0.2038, 0.2438, 0.2538, 0.2738, 0.3038,...
         -0.1146, -0.1146, -0.1146, -0.1146, -0.1146, -0.1146, -0.1146,...
         0     , 0.03  , 0.07  , 0.1   , 0.07  , 0.03  , 0,...   
         -0.2490,-0.2390,-0.2290,-0.1890,-0.1790,-0.1590,-0.1290,...
         0.1146,0.1146,0.1146,0.1146,0.1146,0.1146,0.1146,...
         0     , 0.03  , 0.07  , 0.1   , 0.07  , 0.03  , 0];
alpha_L = alpha;
alpha_L(42:48) = -alpha_L(42:48);
alpha_L(63:69) = -alpha_L(63:69);
Alpha=[alpha;
       alpha_L];
%}
% alpha = [0.4109, 0.3683, 0.3683, 0.3683, 0.3683, 0.3683, 0.4109,...  %base config
%          pi/2  , pi/2  , pi/2  , pi/2  , pi/2  , pi/2  , pi/2,...    %base config
%          0     , 0     , 0     , 0     , 0     , 0     , 0,...       %base config
%          -0.03 , -0.02 , -0.01 , 0     , 0.01  , 0.02  , 0.03,...
%          -0.1146, -0.1146, -0.1146, -0.1146, -0.1146, -0.1146, -0.1146,...
%          0     , 0.03  , 0.07  , 0.1   , 0.07  , 0.03  , 0,...   
%          -0.03 , -0.02 , -0.01 , 0     , 0.01  , 0.02  , 0.03,...
%          0.1146,0.1146,0.1146,0.1146,0.1146,0.1146,0.1146,...
%          0     , 0.03  , 0.07  , 0.1   , 0.07  , 0.03  , 0];
% alpha_L = alpha;
% alpha_L(29:35) = -alpha_L(29:35);
% alpha_L(50:56) = -alpha_L(50:56);
% Alpha=[alpha;
%        alpha_L];   
   
   
   
t=[];
x_sol=[];
s_global=[0];
dphi_global = zeros(1,85);
t_global=[0];
s_overall=[0];
global_position_reference=[0 0];

%load x0.mat
%load x0_to_torso.mat
%load x0_to_torso1.mat
%x0(1)=0;



step=1;
t_end_of_previous_step=0;

t_interrupt=[];
foot_index = 1;


if foot_index == 1
    current_stance_foot_position=F_1_func(x0(1:18));  %FL is swing foot
elseif foot_index == 2
    current_stance_foot_position=F_2_func(x0(1:18));  %RR is swing foot
elseif foot_index == 3
    current_stance_foot_position=F_3_func(x0(1:18));  %FR is swing foot
elseif foot_index == 4
    current_stance_foot_position=F_4_func(x0(1:18));  %RL is swing foot
end
%current_stance_foot_position(1)=0.0376;
for i=1:step*4
    options=odeset('Events',@(t,x) switch_events(t,x,foot_index),'RelTol',1e-6,'AbsTol',1e-6);
    %options=odeset('Events',@(t,x) switch_events(t,x,foot_index));
    [t_each_step,x_each_step,te,xe,ie]=ode45(@(t,x) dynamics(t,x,...
        t_end_of_previous_step,foot_index,Alpha,current_stance_foot_position),tspan,x0,options);
 
    if isempty(t)
        
        t=t_each_step;
        x_sol=x_each_step;
        t_interrupt=te;
        t_end_of_previous_step=t_each_step(end) ;
        stance_foot_position_overall_mat=current_stance_foot_position';
    else
        t_so_far=t_each_step+t(end);
        t_interrupt_each_step=te+t(end);
        t=[t;t_so_far];
        x_sol=[x_sol;x_each_step];
        t_end_of_previous_step=t(end);
        
        t_interrupt=[t_interrupt;t_interrupt_each_step];
    end
    

    dq_plus=resetmap(x_each_step(end,:),foot_index);
    %x0=[x_each_step(end,1:18)';dq_plus];

    
    
    if foot_index == 1
        current_stance_foot_position=F_1_func(x0(1:18));  %FL is swing foot
        fprintf('FL')
    elseif foot_index == 2
        current_stance_foot_position=F_2_func(x0(1:18));  %RR is swing foot
        fprintf('RR')
    elseif foot_index == 3
        current_stance_foot_position=F_3_func(x0(1:18));  %FR is swing foot
        fprintf('FR')
    elseif foot_index == 4
        current_stance_foot_position=F_4_func(x0(1:18));  %RL is swing foot
        fprintf('RL')
    end
    
    fprintf('hey,Ive finished %d step\n',i)
    
    %stance_foot_position_overall_mat=[stance_foot_position_overall_mat;current_stance_foot_position'];
   
    foot_index=mod(i,4)+1;
 %   current_position=[current_position;current_stance_foot_position+r*sin(x_each_step(:,1))];
 %   current_stance_foot_position=current_stance_foot_position+current_step_length;
end


toc
laikago_animation(t,x_sol,0)