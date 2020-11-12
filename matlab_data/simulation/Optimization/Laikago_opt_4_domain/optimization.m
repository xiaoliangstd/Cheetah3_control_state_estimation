tic;
%clear all
global step_no
A= [];
b= [];
Aeq = [];
beq = [];
lb = -2*ones(1,224);
ub = 2*ones(1,224);
% lb(1:7) = -0.1;
% ub(1:7) = 0.1;
% lb(8:14) = 0.2;
% ub(8:14) = 0.5;
% lb(15:21) = -0.3;
% ub(15:21) = 0.3;
% lb(22:28) = -0.3;
% ub(22:28) = 0.3;
% lb(29:35) = -0.3;
% ub(29:35) = 0.3;
% lb(36:42) = -0.5;
% ub(36:42) = 0.5;
% lb(43:49) = -0.2;
% ub(43:49) = 0.2;
% lb(50:56) = -0.2;
% ub(50:56) = 0.2;

%%
foot_index=1;
step_no =0;

%%
%  alpha1 = -0*[0, 0.005, 0.01, 0.015, 0.01, 0.005, 0];%+0.0143;  %y base
% % %alpha2 = [0.27, 0.272, 0.274, 0.275, 0.274, 0.272, 0.27];    %z base
%  alpha2 = [0.3292, 0.33, 0.331, 0.3315, 0.331, 0.33, 0.3292];
% % alpha2 = [0.36, 0.362, 0.358, 0.356, 0.355, 0.358, 0.36]-0.0040;
%  alpha3 = 0*[0, 0.02, 0.04, 0.05, 0.04, 0.02, 0];  % base roll
%  alpha4 = 0*[0, 0.02, 0.03, 0.04, 0.03, 0.02, 0];  % base pitch
%  alpha5 =  0*[0,0,0,0,0,0,0]; % base yaw
% % %alpha6 =  [0.192,0.2,0.22,0.25,0.27, 0.284, 0.292]; % x swing foot %move by 0.1m
% % %alpha6 =  [0.174,0.184,0.20,0.22,0.25, 0.264, 0.274];
%  alpha6 =  [0.2189,0.23,0.25,0.27,0.29, 0.305, 0.3189]-0.0656;
%  alpha7 =  [0.1489,0.15,0.15,0.15,0.15,0.15,0.1489]; % y swing foot
%  alpha8 =  0.78*[0, 0.005, 0.02, 0.05, 0.03, 0.005,0]; % z swing foot
% % % alpha9 =  [0,0,0,0,0,0,0]; % roll swing foot
% % % alpha10 =  6*[0, -0.02, -0.03, -0.04, -0.03, -0.02, 0]; % pitch swing foot
% % % alpha11 =  [0,0,0,0,0,0,0]; % yaw swing foot
%  alpha = [alpha1, alpha2, alpha3, alpha4, alpha5, alpha6, alpha7, alpha8];
% % 
%  Alpha1=alpha;
%  Alpha1(1:7)= -1.2*[0.006, 0.008, 0.0126, 0.016, 0.013, 0.016, 0.008];
% % 
%  Alpha2=alpha;
%  Alpha2(1:7)= [-0.0096, -0.007, -0.005, -0.005, -0.003, -0.004, 0]; %-alpha(1:7); Alpha2(1)=-0.0096; %Alpha2(7)=-0.005;
%  Alpha2(36:42)=alpha(36:42)-0.3891*ones(1,7);
% % %Alpha2(43:49)=-(0.124/0.11)*alpha(43:49);
%  Alpha2(43:49)=-alpha(43:49);
% % %alpha2(50:56)=[0, 0.02,0.04,0.05,0.04,0.015,0];
% % 
%  Alpha3=alpha;
%  Alpha3(1:7)= [0, 0.002, 0.0065, 0.007, 0.004, 0.007, -0.005]; %-alpha(1:7); Alpha3(7)=-0.005; %1*[0.005, 0.008, 0.01, 0.011, 0.011, 0.008, 0];%-alpha(1:7);
%  Alpha3(36:42)=alpha(36:42)+0.0482*ones(1,7);
% % %Alpha3(43:49)=-(0.124/0.11)*alpha(43:49);
%  Alpha3(43:49)=-alpha(43:49);
%  Alpha4=alpha;
% % Alpha4(1:7)=-0.7*[0.0263, 0.025, 0.02, 0.015, 0.01, 0.005, 0];%+0.0143;%[0, 0.005, 0.01, 0.015, 0.02, 0.025, 0.0263];
% % 
%  Alpha4(1:7)= -1*[0.005, 0.009, 0.0126, 0.016, 0.013, 0.016, 0.0072]; %-alpha(1:7); Alpha4(1)=-0.005;
%  Alpha4(7)=-0.0065;
%  Alpha4(36:42)=alpha(36:42)-0.3396*ones(1,7);
% 
% 
% %load opt_var.mat


%%
% alpha1 = -4*[0, 0.02, 0.02, 0.03, 0.03, 0.02, 0.01];  %y base
% alpha2 = [0.27, 0.272, 0.274, 0.275, 0.274, 0.272, 0.27];    %z base
% alpha3 = 0*[0, 0.02, 0.04, 0.05, 0.04, 0.02, 0];  % base roll
% alpha4 = 0*[0, 0.02, 0.03, 0.04, 0.03, 0.02, 0];  % base pitch
% alpha5 =  0*[0,0,0,0,0,0,0]; % base yaw
% alpha6 =  [0.192,0.2,0.22,0.25,0.27, 0.284, 0.292]; % x swing foot %move by 0.1m
% alpha7 =  [0.11,0.11,0.11,0.11,0.11,0.11,0.11]; % y swing foot
% alpha8 =  1*[0, 0.02, 0.04, 0.05, 0.03, 0.01,0]; % z swing foot
% % alpha9 =  [0,0,0,0,0,0,0]; % roll swing foot
% % alpha10 =  6*[0, -0.02, -0.03, -0.04, -0.03, -0.02, 0]; % pitch swing foot
% % alpha11 =  [0,0,0,0,0,0,0]; % yaw swing foot
% alpha = [alpha1, alpha2, alpha3, alpha4, alpha5, alpha6, alpha7, alpha8];
% %alpha = [alpha1, alpha2, alpha6, alpha7, alpha8, alpha9, alpha10, alpha11];
% 
% Alpha1=alpha;
% 
% Alpha2=alpha;
% Alpha2(36:42)=alpha(36:42)-0.437*ones(1,7);
% Alpha2(43:49)=-(0.124/0.11)*alpha(43:49);
% %alpha2(50:56)=[0, 0.02,0.04,0.05,0.04,0.015,0];
% 
% Alpha3=alpha;
% Alpha3(43:49)=-(0.124/0.11)*alpha(43:49);
% 
% Alpha4=alpha;
% Alpha4(36:42)=alpha(36:42)-0.437*ones(1,7);


%%
%Alpha=[Alpha1,Alpha2,Alpha3,Alpha4];
load Alpha_initial_5.mat
% Alpha(5)=Alpha(5)-0.025; %%used with opt_var3
% Alpha(6)=Alpha(6)-0.038; %%used with opt_var3
% Alpha(7)=Alpha(7)+0.002; %%used with opt_var3


Alpha = initial_guess; %Alpha;
% Alpha(50:56)=[0, 0.05,0.10,0.045,0.03,0.009,0];%=-0.025;Alpha(5)=-0.02;Alpha(6)=-0.010;
% Alpha(106:112)=[0, 0.02,0.06,0.120,0.04,0.009,0];
% Alpha(162:168)=[0, 0.05,0.10,0.045,0.03,0.009,0];
% Alpha(218:224)=[0, 0.05,0.10,0.045,0.03,0.009,0];

%%

options = optimoptions('fmincon',...
    'MaxFunEvals',250000,...
    'MaxIter',250000,'ConstraintTolerance', 1e-6);

[Cost,Cnst] = Laikago_Obj_Cnst_impact;% initial_optimization_variable

[optimized_variable,fval,exitflag,output] = fmincon(Cost,Alpha,A,b,Aeq,beq,...
    lb,ub,Cnst,options);

toc

