/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 21:23:11 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t147;
  double t158;
  double t38;
  double t416;
  double t437;
  double t748;
  double t451;
  double t712;
  double t788;
  double t991;
  double t1100;
  double t1189;
  double t1211;
  double t1709;
  double t1753;
  double t1315;
  double t226;
  double t2246;
  double t2248;
  double t2293;
  double t2331;
  double t1999;
  double t2020;
  double t1509;
  double t2637;
  double t2645;
  double t2659;
  double t2665;
  double t2616;
  double t2671;
  double t2679;
  double t2709;
  double t2775;
  double t2787;
  double t2841;
  double t2847;
  double t2848;
  double t3051;
  double t3061;
  double t3072;
  double t3045;
  double t3073;
  double t3074;
  double t3086;
  double t3091;
  double t3092;
  double t3171;
  double t2944;
  double t3245;
  double t3247;
  double t3251;
  double t3244;
  double t3273;
  double t3280;
  double t3282;
  double t3288;
  double t3291;
  double t2340;
  double t2341;
  double t2350;
  double t2404;
  double t2417;
  double t2435;
  double t2450;
  double t2454;
  double t2543;
  double t2548;
  double t2549;
  double t2552;
  double t2557;
  double t2560;
  double t2563;
  double t3394;
  double t3406;
  double t3413;
  double t3520;
  double t3547;
  double t3549;
  double t3550;
  double t3555;
  double t3556;
  double t3680;
  double t3682;
  double t3683;
  double t3780;
  double t3782;
  double t3783;
  double t3818;
  double t3822;
  double t3823;
  double t339;
  double t421;
  double t1070;
  double t1305;
  double t1625;
  double t1773;
  double t1795;
  double t1877;
  double t1929;
  double t2044;
  double t2051;
  double t2114;
  double t2117;
  double t3428;
  double t3431;
  double t3432;
  double t3434;
  double t3435;
  double t3451;
  double t3458;
  double t3459;
  double t3460;
  double t3461;
  double t3497;
  double t3498;
  double t3880;
  double t3885;
  double t3886;
  double t3895;
  double t3902;
  double t3905;
  double t3910;
  double t3913;
  double t3928;
  double t3937;
  double t3938;
  double t3939;
  double t3965;
  double t3966;
  double t3967;
  double t3971;
  double t3972;
  double t3973;
  double t4027;
  double t4028;
  double t4029;
  double t4073;
  double t4077;
  double t4078;
  double t4086;
  double t4087;
  double t4088;
  double t4092;
  double t4093;
  double t4095;
  double t4097;
  double t4098;
  double t4099;
  double t2708;
  double t2790;
  double t2794;
  double t2796;
  double t2799;
  double t2800;
  double t2802;
  double t2806;
  double t2807;
  double t2820;
  double t2821;
  double t3737;
  double t3744;
  double t3752;
  double t3754;
  double t3756;
  double t3759;
  double t3760;
  double t3761;
  double t3762;
  double t3763;
  double t3770;
  double t3970;
  double t3979;
  double t3981;
  double t3997;
  double t4009;
  double t4010;
  double t4014;
  double t4016;
  double t4019;
  double t4020;
  double t4024;
  double t4142;
  double t4147;
  double t4149;
  double t4150;
  double t4146;
  double t4152;
  double t4153;
  double t4156;
  double t4160;
  double t4171;
  double t4208;
  double t4209;
  double t4210;
  double t4261;
  double t4262;
  double t4265;
  double t4260;
  double t4266;
  double t4269;
  double t4279;
  double t4280;
  double t4284;
  double t3182;
  double t3183;
  double t3213;
  double t3223;
  double t3237;
  double t3240;
  double t3281;
  double t3297;
  double t3299;
  double t3304;
  double t3305;
  double t3311;
  double t3315;
  double t3329;
  double t3330;
  double t3336;
  double t3339;
  double t3777;
  double t3786;
  double t3787;
  double t3799;
  double t3828;
  double t3829;
  double t3832;
  double t3833;
  double t3837;
  double t3839;
  double t3840;
  double t3842;
  double t3848;
  double t3857;
  double t3858;
  double t4085;
  double t4089;
  double t4096;
  double t4102;
  double t4103;
  double t4104;
  double t4107;
  double t4110;
  double t4112;
  double t4115;
  double t4116;
  double t4120;
  double t4123;
  double t2939;
  double t3908;
  double t3002;
  double t4332;
  double t4333;
  double t4334;
  double t4335;
  double t4354;
  double t4355;
  double t4278;
  double t4289;
  double t4290;
  double t4293;
  double t4294;
  double t4296;
  double t4297;
  double t4298;
  double t4310;
  double t4311;
  double t4312;
  double t4392;
  double t4393;
  double t4394;
  double t2861;
  double t2872;
  double t2873;
  double t2874;
  double t2882;
  double t2910;
  double t2913;
  double t2919;
  double t2922;
  double t3686;
  double t3695;
  double t3696;
  double t3703;
  double t3707;
  double t3708;
  double t3711;
  double t3714;
  double t3725;
  double t4030;
  double t4033;
  double t4034;
  double t4037;
  double t4038;
  double t4039;
  double t4041;
  double t4043;
  double t4046;
  double t4154;
  double t4176;
  double t4188;
  double t4195;
  double t4197;
  double t4199;
  double t4203;
  double t4204;
  double t4205;
  double t4426;
  double t4428;
  double t4429;
  double t4431;
  double t4395;
  double t4396;
  double t4397;
  double t4398;
  double t4401;
  double t4402;
  double t4404;
  double t4405;
  double t4406;
  double t4469;
  double t4470;
  double t4471;
  double t4474;
  double t4475;
  double t4477;
  double t4515;
  double t4516;
  double t4522;
  double t4588;
  double t4591;
  double t4592;
  double t4599;
  double t4604;
  double t4605;
  double t4636;
  double t4637;
  double t4640;
  double t4657;
  double t4661;
  double t4664;
  double t4665;
  double t4711;
  double t4712;
  double t4713;
  double t4523;
  double t4526;
  double t4527;
  double t4528;
  double t4530;
  double t4534;
  double t4537;
  double t4538;
  double t4540;
  double t4543;
  double t4545;
  double t4558;
  double t4782;
  double t4783;
  double t4784;
  double t4828;
  double t4830;
  double t4831;
  double t4465;
  double t4468;
  double t4473;
  double t4479;
  double t4480;
  double t4487;
  double t4488;
  double t4489;
  double t4490;
  double t4496;
  double t4501;
  double t4506;
  double t4507;
  double t4714;
  double t4715;
  double t4721;
  double t4725;
  double t4726;
  double t4733;
  double t4734;
  double t4738;
  double t4749;
  double t4750;
  double t4752;
  double t4754;
  double t4755;
  double t4756;
  double t4961;
  double t4962;
  double t4963;
  double t4964;
  double t4965;
  double t4967;
  double t4968;
  double t4974;
  double t4986;
  double t4989;
  double t4990;
  double t5023;
  double t5024;
  double t5022;
  double t5025;
  double t5026;
  double t5036;
  double t5037;
  double t5041;
  double t4928;
  double t4929;
  double t4932;
  double t4933;
  double t4934;
  double t4936;
  double t4937;
  double t4940;
  double t4944;
  double t4946;
  double t4947;
  double t4948;
  double t4949;
  double t4950;
  double t4953;
  double t4760;
  double t4761;
  double t4762;
  double t4763;
  double t4765;
  double t4766;
  double t4767;
  double t4768;
  double t4769;
  double t4775;
  double t4776;
  double t4562;
  double t4563;
  double t4564;
  double t4567;
  double t4568;
  double t4569;
  double t4570;
  double t4571;
  double t4572;
  double t4579;
  double t4584;
  double t4586;
  double t5069;
  double t5067;
  double t5070;
  double t5071;
  double t5074;
  double t5075;
  double t5077;
  double t5104;
  double t5105;
  double t5107;
  double t5008;
  double t4655;
  double t5013;
  double t4991;
  double t4994;
  double t4996;
  double t4997;
  double t4999;
  double t5001;
  double t5002;
  double t5005;
  double t5006;
  double t4635;
  double t4641;
  double t4642;
  double t4643;
  double t4644;
  double t4645;
  double t4646;
  double t4648;
  double t4650;
  double t4840;
  double t4841;
  double t4842;
  double t4844;
  double t4845;
  double t4846;
  double t4847;
  double t4865;
  double t4869;
  double t5109;
  double t5110;
  double t5114;
  double t5115;
  double t5116;
  double t5118;
  double t5119;
  double t5120;
  double t5121;
  double t5156;
  double t5159;
  double t5160;
  double t5162;
  double t5158;
  double t5163;
  double t5169;
  double t5171;
  double t5173;
  double t5177;
  double t5203;
  double t5204;
  double t5206;
  double t5209;
  double t4966;
  double t4975;
  double t4976;
  double t4977;
  double t4978;
  double t4979;
  double t4980;
  double t4981;
  double t4982;
  double t4983;
  double t4984;
  double t4598;
  double t4613;
  double t4617;
  double t4618;
  double t4619;
  double t4621;
  double t4622;
  double t4623;
  double t4624;
  double t4626;
  double t4630;
  double t4875;
  double t4880;
  double t4882;
  double t4883;
  double t4884;
  double t4885;
  double t4886;
  double t4905;
  double t4906;
  double t4909;
  double t4913;
  double t5072;
  double t5078;
  double t5079;
  double t5083;
  double t5086;
  double t5087;
  double t5089;
  double t5090;
  double t5091;
  double t5092;
  double t5094;
  double t5170;
  double t5182;
  double t5186;
  double t5187;
  double t5188;
  double t5191;
  double t5192;
  double t5193;
  double t5194;
  double t5266;
  double t5267;
  double t5268;
  double t5326;
  double t5327;
  double t5329;
  double t5379;
  double t5380;
  double t5381;
  double t5419;
  double t5420;
  double t5422;
  double t5306;
  double t5307;
  double t5309;
  double t5311;
  double t5314;
  double t5316;
  double t5317;
  double t5318;
  double t5321;
  double t5322;
  double t5323;
  double t5324;
  double t5449;
  double t5450;
  double t5451;
  double t5453;
  double t5454;
  double t5455;
  double t5471;
  double t5474;
  double t5475;
  double t5492;
  double t5495;
  double t5496;
  double t5503;
  double t5504;
  double t5508;
  double t5525;
  double t5526;
  double t5527;
  double t5529;
  double t5530;
  double t5531;
  double t5470;
  double t5476;
  double t5477;
  double t5478;
  double t5480;
  double t5481;
  double t5482;
  double t5483;
  double t5484;
  double t5485;
  double t5486;
  double t5343;
  double t5345;
  double t5346;
  double t5347;
  double t5348;
  double t5350;
  double t5355;
  double t5357;
  double t5366;
  double t5367;
  double t5368;
  double t5566;
  double t5567;
  double t5569;
  double t5570;
  double t5571;
  double t5568;
  double t5572;
  double t5573;
  double t5575;
  double t5576;
  double t5577;
  double t5600;
  double t5602;
  double t5603;
  double t5617;
  double t5618;
  double t5620;
  double t5616;
  double t5621;
  double t5622;
  double t5624;
  double t5625;
  double t5626;
  double t5409;
  double t5410;
  double t5413;
  double t5414;
  double t5423;
  double t5428;
  double t5432;
  double t5434;
  double t5436;
  double t5437;
  double t5438;
  double t5439;
  double t5440;
  double t5442;
  double t5443;
  double t5523;
  double t5524;
  double t5528;
  double t5536;
  double t5537;
  double t5541;
  double t5543;
  double t5544;
  double t5549;
  double t5553;
  double t5554;
  double t5555;
  double t5557;
  double t5490;
  double t5372;
  double t5650;
  double t5651;
  double t5652;
  double t5653;
  double t5657;
  double t5658;
  double t5623;
  double t5627;
  double t5628;
  double t5629;
  double t5630;
  double t5631;
  double t5632;
  double t5633;
  double t5634;
  double t5637;
  double t5638;
  double t5671;
  double t5674;
  double t5675;
  double t5452;
  double t5458;
  double t5459;
  double t5461;
  double t5462;
  double t5463;
  double t5464;
  double t5465;
  double t5466;
  double t5330;
  double t5332;
  double t5333;
  double t5334;
  double t5336;
  double t5337;
  double t5338;
  double t5339;
  double t5340;
  double t5574;
  double t5583;
  double t5588;
  double t5589;
  double t5590;
  double t5593;
  double t5594;
  double t5595;
  double t5596;
  double t5692;
  double t5693;
  double t5695;
  double t5698;
  double t5676;
  double t5678;
  double t5679;
  double t5680;
  double t5681;
  double t5682;
  double t5683;
  double t5684;
  double t5685;
  t147 = Cos(var1[4]);
  t158 = Cos(var1[5]);
  t38 = Cos(var1[3]);
  t416 = Sin(var1[3]);
  t437 = Cos(var1[12]);
  t748 = Cos(var1[13]);
  t451 = Sin(var1[13]);
  t712 = -1.*t437*t38*t147*t158*t451;
  t788 = -1.*t748*t147*t158*t416;
  t991 = t712 + t788;
  t1100 = t437*t748*t38*t147*t158;
  t1189 = -1.*t147*t158*t451*t416;
  t1211 = t1100 + t1189;
  t1709 = Cos(var1[14]);
  t1753 = 0. + t1709;
  t1315 = Sin(var1[14]);
  t226 = Sin(var1[12]);
  t2246 = -1.*t147*t158*t226*t416;
  t2248 = Sin(var1[4]);
  t2293 = -1.*t437*t158*t2248;
  t2331 = t2246 + t2293;
  t1999 = -1.*t1315;
  t2020 = 0. + t1999;
  t1509 = 0. + t1315;
  t2637 = t437*t147*t158*t416;
  t2645 = 0. + t226;
  t2659 = -1.*t158*t2645*t2248;
  t2665 = t2637 + t2659;
  t2616 = -1.*t38*t147*t158*t451;
  t2671 = -1.*t748*t2665;
  t2679 = t2616 + t2671;
  t2709 = t748*t38*t147*t158;
  t2775 = -1.*t451*t2665;
  t2787 = t2709 + t2775;
  t2841 = t38*t147*t158*t451;
  t2847 = t748*t2665;
  t2848 = t2841 + t2847;
  t3051 = -1.*t147*t158*t2645;
  t3061 = -1.*t437*t158*t416*t2248;
  t3072 = t3051 + t3061;
  t3045 = -1.*t38*t158*t451*t2248;
  t3073 = t748*t3072;
  t3074 = t3045 + t3073;
  t3086 = -1.*t748*t38*t158*t2248;
  t3091 = -1.*t451*t3072;
  t3092 = t3086 + t3091;
  t3171 = Sin(var1[5]);
  t2944 = 0. + t437;
  t3245 = -1.*t437*t147*t416*t3171;
  t3247 = t2645*t2248*t3171;
  t3251 = t3245 + t3247;
  t3244 = -1.*t38*t147*t451*t3171;
  t3273 = t748*t3251;
  t3280 = t3244 + t3273;
  t3282 = -1.*t748*t38*t147*t3171;
  t3288 = -1.*t451*t3251;
  t3291 = t3282 + t3288;
  t2340 = -0.2083*t748*t2331;
  t2341 = 0.1422*t451*t2331;
  t2350 = -1.*t437*t147*t158*t416;
  t2404 = t158*t226*t2248;
  t2417 = t2350 + t2404;
  t2435 = -0.0329*t2417;
  t2450 = -1.*t1753*t451*t2331;
  t2454 = t748*t2020*t2331;
  t2543 = t2450 + t2454;
  t2548 = -0.02*t2543;
  t2549 = t748*t1753*t2331;
  t2552 = -1.*t451*t1509*t2331;
  t2557 = t2549 + t2552;
  t2560 = -0.16*t2557;
  t2563 = t2340 + t2341 + t2435 + t2548 + t2560;
  t3394 = t38*t158*t2248;
  t3406 = t416*t3171;
  t3413 = t3394 + t3406;
  t3520 = -1.*t147*t158*t226;
  t3547 = t158*t416*t2248;
  t3549 = -1.*t38*t3171;
  t3550 = t3547 + t3549;
  t3555 = -1.*t437*t3550;
  t3556 = t3520 + t3555;
  t3680 = t437*t147*t158;
  t3682 = -1.*t226*t3550;
  t3683 = t3680 + t3682;
  t3780 = -1.*t38*t158;
  t3782 = -1.*t416*t2248*t3171;
  t3783 = t3780 + t3782;
  t3818 = -1.*t437*t147*t3171;
  t3822 = -1.*t226*t3783;
  t3823 = t3818 + t3822;
  t339 = 0.0329*t38*t147*t158*t226;
  t421 = 0.1944*t147*t158*t416;
  t1070 = -0.1422*t991;
  t1305 = -0.2083*t1211;
  t1625 = t1509*t991;
  t1773 = t1753*t1211;
  t1795 = t1625 + t1773;
  t1877 = -0.16*t1795;
  t1929 = t1753*t991;
  t2044 = t2020*t1211;
  t2051 = t1929 + t2044;
  t2114 = -0.02*t2051;
  t2117 = t339 + t421 + t1070 + t1305 + t1877 + t2114;
  t3428 = 0.0329*t437*t3413;
  t3431 = 0.2083*t748*t226*t3413;
  t3432 = -0.1422*t226*t451*t3413;
  t3434 = t1753*t226*t451*t3413;
  t3435 = -1.*t748*t226*t2020*t3413;
  t3451 = t3434 + t3435;
  t3458 = -0.02*t3451;
  t3459 = -1.*t748*t1753*t226*t3413;
  t3460 = t226*t451*t1509*t3413;
  t3461 = t3459 + t3460;
  t3497 = -0.16*t3461;
  t3498 = t3428 + t3431 + t3432 + t3458 + t3497;
  t3880 = -1.*t158*t416*t2248;
  t3885 = t38*t3171;
  t3886 = t3880 + t3885;
  t3895 = -1.*t38*t158*t2248;
  t3902 = -1.*t416*t3171;
  t3905 = t3895 + t3902;
  t3910 = -1.*t437*t451*t3886;
  t3913 = t748*t3905;
  t3928 = t3910 + t3913;
  t3937 = t437*t748*t3886;
  t3938 = t451*t3905;
  t3939 = t3937 + t3938;
  t3965 = -1.*t451*t3886;
  t3966 = -1.*t437*t748*t3413;
  t3967 = t3965 + t3966;
  t3971 = t748*t3886;
  t3972 = -1.*t437*t451*t3413;
  t3973 = t3971 + t3972;
  t4027 = t451*t3886;
  t4028 = t437*t748*t3413;
  t4029 = t4027 + t4028;
  t4073 = t158*t416;
  t4077 = -1.*t38*t2248*t3171;
  t4078 = t4073 + t4077;
  t4086 = t38*t158;
  t4087 = t416*t2248*t3171;
  t4088 = t4086 + t4087;
  t4092 = -1.*t437*t451*t4078;
  t4093 = t748*t4088;
  t4095 = t4092 + t4093;
  t4097 = t437*t748*t4078;
  t4098 = t451*t4088;
  t4099 = t4097 + t4098;
  t2708 = -0.1422*t2679;
  t2790 = -0.2083*t2787;
  t2794 = t1509*t2679;
  t2796 = t1753*t2787;
  t2799 = t2794 + t2796;
  t2800 = -0.16*t2799;
  t2802 = t1753*t2679;
  t2806 = t2020*t2787;
  t2807 = t2802 + t2806;
  t2820 = -0.02*t2807;
  t2821 = t2708 + t2790 + t2800 + t2820;
  t3737 = 0.1422*t748*t3683;
  t3744 = 0.2083*t451*t3683;
  t3752 = -1.*t748*t1753*t3683;
  t3754 = -1.*t451*t2020*t3683;
  t3756 = t3752 + t3754;
  t3759 = -0.02*t3756;
  t3760 = -1.*t1753*t451*t3683;
  t3761 = -1.*t748*t1509*t3683;
  t3762 = t3760 + t3761;
  t3763 = -0.16*t3762;
  t3770 = t3737 + t3744 + t3759 + t3763;
  t3970 = -0.1422*t3967;
  t3979 = -0.2083*t3973;
  t3981 = t1509*t3967;
  t3997 = t1753*t3973;
  t4009 = t3981 + t3997;
  t4010 = -0.16*t4009;
  t4014 = t1753*t3967;
  t4016 = t2020*t3973;
  t4019 = t4014 + t4016;
  t4020 = -0.02*t4019;
  t4024 = t3970 + t3979 + t4010 + t4020;
  t4142 = 0. + t3394 + t3406;
  t4147 = t147*t158*t2645;
  t4149 = t437*t3550;
  t4150 = 0. + t4147 + t4149;
  t4146 = -1.*t451*t4142;
  t4152 = -1.*t748*t4150;
  t4153 = t4146 + t4152;
  t4156 = t748*t4142;
  t4160 = -1.*t451*t4150;
  t4171 = t4156 + t4160;
  t4208 = -1.*t748*t4142;
  t4209 = t451*t4150;
  t4210 = t4208 + t4209;
  t4261 = -1.*t147*t2645*t3171;
  t4262 = t437*t3783;
  t4265 = t4261 + t4262;
  t4260 = -1.*t451*t4078;
  t4266 = -1.*t748*t4265;
  t4269 = t4260 + t4266;
  t4279 = t748*t4078;
  t4280 = -1.*t451*t4265;
  t4284 = t4279 + t4280;
  t3182 = 0.1944*t38*t147*t3171;
  t3183 = -0.0817*t2248*t3171;
  t3213 = t147*t226*t416*t3171;
  t3223 = t2944*t2248*t3171;
  t3237 = t3213 + t3223;
  t3240 = -0.0329*t3237;
  t3281 = -0.2083*t3280;
  t3297 = -0.1422*t3291;
  t3299 = t2020*t3280;
  t3304 = t1753*t3291;
  t3305 = t3299 + t3304;
  t3311 = -0.02*t3305;
  t3315 = t1753*t3280;
  t3329 = t1509*t3291;
  t3330 = t3315 + t3329;
  t3336 = -0.16*t3330;
  t3339 = t3182 + t3183 + t3240 + t3281 + t3297 + t3311 + t3336;
  t3777 = t147*t226*t3171;
  t3786 = -1.*t437*t3783;
  t3787 = t3777 + t3786;
  t3799 = -0.0329*t3787;
  t3828 = -0.2083*t748*t3823;
  t3829 = 0.1422*t451*t3823;
  t3832 = -1.*t1753*t451*t3823;
  t3833 = t748*t2020*t3823;
  t3837 = t3832 + t3833;
  t3839 = -0.02*t3837;
  t3840 = t748*t1753*t3823;
  t3842 = -1.*t451*t1509*t3823;
  t3848 = t3840 + t3842;
  t3857 = -0.16*t3848;
  t3858 = t3799 + t3828 + t3829 + t3839 + t3857;
  t4085 = 0.0329*t226*t4078;
  t4089 = -0.1944*t4088;
  t4096 = -0.1422*t4095;
  t4102 = -0.2083*t4099;
  t4103 = t1509*t4095;
  t4104 = t1753*t4099;
  t4107 = t4103 + t4104;
  t4110 = -0.16*t4107;
  t4112 = t1753*t4095;
  t4115 = t2020*t4099;
  t4116 = t4112 + t4115;
  t4120 = -0.02*t4116;
  t4123 = t4085 + t4089 + t4096 + t4102 + t4110 + t4120;
  t2939 = 0.0817*t147*t158;
  t3908 = -0.1944*t3905;
  t3002 = -1.*t2944*t147*t158;
  t4332 = t437*t3886;
  t4333 = t3051 + t4332;
  t4334 = t748*t4333;
  t4335 = t3938 + t4334;
  t4354 = -1.*t451*t4333;
  t4355 = t3913 + t4354;
  t4278 = -0.1422*t4269;
  t4289 = -0.2083*t4284;
  t4290 = t1509*t4269;
  t4293 = t1753*t4284;
  t4294 = t4290 + t4293;
  t4296 = -0.16*t4294;
  t4297 = t1753*t4269;
  t4298 = t2020*t4284;
  t4310 = t4297 + t4298;
  t4311 = -0.02*t4310;
  t4312 = t4278 + t4289 + t4296 + t4311;
  t4392 = t451*t4078;
  t4393 = t748*t4265;
  t4394 = t4392 + t4393;
  t2861 = -1.*t1315*t2848;
  t2872 = t1709*t2787;
  t2873 = t2861 + t2872;
  t2874 = -0.16*t2873;
  t2882 = -1.*t1709*t2848;
  t2910 = -1.*t1315*t2787;
  t2913 = t2882 + t2910;
  t2919 = -0.02*t2913;
  t2922 = t2874 + t2919;
  t3686 = -1.*t1709*t451*t3683;
  t3695 = -1.*t748*t1315*t3683;
  t3696 = t3686 + t3695;
  t3703 = -0.16*t3696;
  t3707 = -1.*t748*t1709*t3683;
  t3708 = t451*t1315*t3683;
  t3711 = t3707 + t3708;
  t3714 = -0.02*t3711;
  t3725 = t3703 + t3714;
  t4030 = -1.*t1315*t4029;
  t4033 = t1709*t3973;
  t4034 = t4030 + t4033;
  t4037 = -0.16*t4034;
  t4038 = -1.*t1709*t4029;
  t4039 = -1.*t1315*t3973;
  t4041 = t4038 + t4039;
  t4043 = -0.02*t4041;
  t4046 = t4037 + t4043;
  t4154 = -1.*t1315*t4153;
  t4176 = -1.*t1709*t4171;
  t4188 = t4154 + t4176;
  t4195 = -0.02*t4188;
  t4197 = t1709*t4153;
  t4199 = -1.*t1315*t4171;
  t4203 = t4197 + t4199;
  t4204 = -0.16*t4203;
  t4205 = t4195 + t4204;
  t4426 = t451*t4142;
  t4428 = t748*t4150;
  t4429 = 0. + t4426 + t4428;
  t4431 = 0. + t4156 + t4160;
  t4395 = -1.*t1315*t4394;
  t4396 = t1709*t4284;
  t4397 = t4395 + t4396;
  t4398 = -0.16*t4397;
  t4401 = -1.*t1709*t4394;
  t4402 = -1.*t1315*t4284;
  t4404 = t4401 + t4402;
  t4405 = -0.02*t4404;
  t4406 = t4398 + t4405;
  t4469 = -1.*t437*t38*t147*t451*t3171;
  t4470 = -1.*t748*t147*t416*t3171;
  t4471 = t4469 + t4470;
  t4474 = t437*t748*t38*t147*t3171;
  t4475 = -1.*t147*t451*t416*t3171;
  t4477 = t4474 + t4475;
  t4515 = -1.*t158*t416;
  t4516 = t38*t2248*t3171;
  t4522 = t4515 + t4516;
  t4588 = -1.*t437*t451*t4522;
  t4591 = t748*t3783;
  t4592 = t4588 + t4591;
  t4599 = -1.*t437*t748*t4522;
  t4604 = -1.*t451*t3783;
  t4605 = t4599 + t4604;
  t4636 = t437*t748*t4522;
  t4637 = t451*t3783;
  t4640 = t4636 + t4637;
  t4657 = t437*t748*t3783;
  t4661 = t4392 + t4657;
  t4664 = -1.*t437*t451*t3783;
  t4665 = t4279 + t4664;
  t4711 = -1.*t147*t226*t416*t3171;
  t4712 = -1.*t437*t2248*t3171;
  t4713 = t4711 + t4712;
  t4523 = 0.0329*t437*t4522;
  t4526 = 0.2083*t748*t226*t4522;
  t4527 = -0.1422*t226*t451*t4522;
  t4528 = t1753*t226*t451*t4522;
  t4530 = -1.*t748*t226*t2020*t4522;
  t4534 = t4528 + t4530;
  t4537 = -0.02*t4534;
  t4538 = -1.*t748*t1753*t226*t4522;
  t4540 = t226*t451*t1509*t4522;
  t4543 = t4538 + t4540;
  t4545 = -0.16*t4543;
  t4558 = t4523 + t4526 + t4527 + t4537 + t4545;
  t4782 = -1.*t147*t226*t3171;
  t4783 = -1.*t437*t4088;
  t4784 = t4782 + t4783;
  t4828 = t437*t147*t3171;
  t4830 = -1.*t226*t4088;
  t4831 = t4828 + t4830;
  t4465 = 0.0329*t38*t147*t226*t3171;
  t4468 = 0.1944*t147*t416*t3171;
  t4473 = -0.1422*t4471;
  t4479 = -0.2083*t4477;
  t4480 = t1509*t4471;
  t4487 = t1753*t4477;
  t4488 = t4480 + t4487;
  t4489 = -0.16*t4488;
  t4490 = t1753*t4471;
  t4496 = t2020*t4477;
  t4501 = t4490 + t4496;
  t4506 = -0.02*t4501;
  t4507 = t4465 + t4468 + t4473 + t4479 + t4489 + t4506;
  t4714 = -0.2083*t748*t4713;
  t4715 = 0.1422*t451*t4713;
  t4721 = t226*t2248*t3171;
  t4725 = t3245 + t4721;
  t4726 = -0.0329*t4725;
  t4733 = -1.*t1753*t451*t4713;
  t4734 = t748*t2020*t4713;
  t4738 = t4733 + t4734;
  t4749 = -0.02*t4738;
  t4750 = t748*t1753*t4713;
  t4752 = -1.*t451*t1509*t4713;
  t4754 = t4750 + t4752;
  t4755 = -0.16*t4754;
  t4756 = t4714 + t4715 + t4726 + t4749 + t4755;
  t4961 = t437*t147*t416*t3171;
  t4962 = -1.*t2645*t2248*t3171;
  t4963 = t4961 + t4962;
  t4964 = -1.*t748*t4963;
  t4965 = t3244 + t4964;
  t4967 = t748*t38*t147*t3171;
  t4968 = -1.*t451*t4963;
  t4974 = t4967 + t4968;
  t4986 = t38*t147*t451*t3171;
  t4989 = t748*t4963;
  t4990 = t4986 + t4989;
  t5023 = -1.*t437*t416*t2248*t3171;
  t5024 = t4261 + t5023;
  t5022 = -1.*t38*t451*t2248*t3171;
  t5025 = t748*t5024;
  t5026 = t5022 + t5025;
  t5036 = -1.*t748*t38*t2248*t3171;
  t5037 = -1.*t451*t5024;
  t5041 = t5036 + t5037;
  t4928 = -0.1944*t38*t147*t158;
  t4929 = 0.0817*t158*t2248;
  t4932 = -1.*t2944*t158*t2248;
  t4933 = t2246 + t4932;
  t4934 = -0.0329*t4933;
  t4936 = -0.2083*t2848;
  t4937 = -0.1422*t2787;
  t4940 = t2020*t2848;
  t4944 = t4940 + t2796;
  t4946 = -0.02*t4944;
  t4947 = t1753*t2848;
  t4948 = t1509*t2787;
  t4949 = t4947 + t4948;
  t4950 = -0.16*t4949;
  t4953 = t4928 + t4929 + t4934 + t4936 + t4937 + t4946 + t4950;
  t4760 = -0.0329*t3556;
  t4761 = -0.2083*t748*t3683;
  t4762 = 0.1422*t451*t3683;
  t4763 = t748*t2020*t3683;
  t4765 = t3760 + t4763;
  t4766 = -0.02*t4765;
  t4767 = t748*t1753*t3683;
  t4768 = -1.*t451*t1509*t3683;
  t4769 = t4767 + t4768;
  t4775 = -0.16*t4769;
  t4776 = t4760 + t4761 + t4762 + t4766 + t4775;
  t4562 = -0.1944*t3886;
  t4563 = 0.0329*t226*t3413;
  t4564 = -0.2083*t4029;
  t4567 = -0.1422*t3973;
  t4568 = t2020*t4029;
  t4569 = t4568 + t3997;
  t4570 = -0.02*t4569;
  t4571 = t1753*t4029;
  t4572 = t1509*t3973;
  t4579 = t4571 + t4572;
  t4584 = -0.16*t4579;
  t4586 = t4562 + t4563 + t4564 + t4567 + t4570 + t4584;
  t5069 = t4147 + t4149;
  t5067 = -1.*t451*t3413;
  t5070 = -1.*t748*t5069;
  t5071 = t5067 + t5070;
  t5074 = t748*t3413;
  t5075 = -1.*t451*t5069;
  t5077 = t5074 + t5075;
  t5104 = t451*t3413;
  t5105 = t748*t5069;
  t5107 = t5104 + t5105;
  t5008 = 0.0817*t147*t3171;
  t4655 = -0.1944*t4078;
  t5013 = -1.*t2944*t147*t3171;
  t4991 = -1.*t1315*t4990;
  t4994 = t1709*t4974;
  t4996 = t4991 + t4994;
  t4997 = -0.16*t4996;
  t4999 = -1.*t1709*t4990;
  t5001 = -1.*t1315*t4974;
  t5002 = t4999 + t5001;
  t5005 = -0.02*t5002;
  t5006 = t4997 + t5005;
  t4635 = -1.*t1315*t4592;
  t4641 = -1.*t1709*t4640;
  t4642 = t4635 + t4641;
  t4643 = -0.02*t4642;
  t4644 = t1709*t4592;
  t4645 = -1.*t1315*t4640;
  t4646 = t4644 + t4645;
  t4648 = -0.16*t4646;
  t4650 = t4643 + t4648;
  t4840 = -1.*t1709*t451*t4831;
  t4841 = -1.*t748*t1315*t4831;
  t4842 = t4840 + t4841;
  t4844 = -0.16*t4842;
  t4845 = -1.*t748*t1709*t4831;
  t4846 = t451*t1315*t4831;
  t4847 = t4845 + t4846;
  t4865 = -0.02*t4847;
  t4869 = t4844 + t4865;
  t5109 = -1.*t1315*t5107;
  t5110 = t1709*t5077;
  t5114 = t5109 + t5110;
  t5115 = -0.16*t5114;
  t5116 = -1.*t1709*t5107;
  t5118 = -1.*t1315*t5077;
  t5119 = t5116 + t5118;
  t5120 = -0.02*t5119;
  t5121 = t5115 + t5120;
  t5156 = 0. + t4515 + t4516;
  t5159 = t147*t2645*t3171;
  t5160 = t437*t4088;
  t5162 = 0. + t5159 + t5160;
  t5158 = -1.*t451*t5156;
  t5163 = -1.*t748*t5162;
  t5169 = t5158 + t5163;
  t5171 = t748*t5156;
  t5173 = -1.*t451*t5162;
  t5177 = t5171 + t5173;
  t5203 = t451*t5156;
  t5204 = t748*t5162;
  t5206 = 0. + t5203 + t5204;
  t5209 = 0. + t5171 + t5173;
  t4966 = -0.1422*t4965;
  t4975 = -0.2083*t4974;
  t4976 = t1509*t4965;
  t4977 = t1753*t4974;
  t4978 = t4976 + t4977;
  t4979 = -0.16*t4978;
  t4980 = t1753*t4965;
  t4981 = t2020*t4974;
  t4982 = t4980 + t4981;
  t4983 = -0.02*t4982;
  t4984 = t4966 + t4975 + t4979 + t4983;
  t4598 = -0.2083*t4592;
  t4613 = -0.1422*t4605;
  t4617 = t2020*t4592;
  t4618 = t1753*t4605;
  t4619 = t4617 + t4618;
  t4621 = -0.02*t4619;
  t4622 = t1753*t4592;
  t4623 = t1509*t4605;
  t4624 = t4622 + t4623;
  t4626 = -0.16*t4624;
  t4630 = t4598 + t4613 + t4621 + t4626;
  t4875 = 0.1422*t748*t4831;
  t4880 = 0.2083*t451*t4831;
  t4882 = -1.*t748*t1753*t4831;
  t4883 = -1.*t451*t2020*t4831;
  t4884 = t4882 + t4883;
  t4885 = -0.02*t4884;
  t4886 = -1.*t1753*t451*t4831;
  t4905 = -1.*t748*t1509*t4831;
  t4906 = t4886 + t4905;
  t4909 = -0.16*t4906;
  t4913 = t4875 + t4880 + t4885 + t4909;
  t5072 = -0.1422*t5071;
  t5078 = -0.2083*t5077;
  t5079 = t1509*t5071;
  t5083 = t1753*t5077;
  t5086 = t5079 + t5083;
  t5087 = -0.16*t5086;
  t5089 = t1753*t5071;
  t5090 = t2020*t5077;
  t5091 = t5089 + t5090;
  t5092 = -0.02*t5091;
  t5094 = t5072 + t5078 + t5087 + t5092;
  t5170 = -1.*t1315*t5169;
  t5182 = -1.*t1709*t5177;
  t5186 = t5170 + t5182;
  t5187 = -0.02*t5186;
  t5188 = t1709*t5169;
  t5191 = -1.*t1315*t5177;
  t5192 = t5188 + t5191;
  t5193 = -0.16*t5192;
  t5194 = t5187 + t5193;
  t5266 = -1.*t748*t5156;
  t5267 = t451*t5162;
  t5268 = t5266 + t5267;
  t5326 = -1.*t147*t226*t416;
  t5327 = -1.*t437*t2248;
  t5329 = t5326 + t5327;
  t5379 = -1.*t437*t147*t416;
  t5380 = t226*t2248;
  t5381 = t5379 + t5380;
  t5419 = -1.*t437*t147;
  t5420 = t226*t416*t2248;
  t5422 = t5419 + t5420;
  t5306 = 0.0329*t437*t38*t147;
  t5307 = 0.2083*t748*t38*t147*t226;
  t5309 = -0.1422*t38*t147*t226*t451;
  t5311 = t1753*t38*t147*t226*t451;
  t5314 = -1.*t748*t38*t147*t226*t2020;
  t5316 = t5311 + t5314;
  t5317 = -0.02*t5316;
  t5318 = -1.*t748*t1753*t38*t147*t226;
  t5321 = t38*t147*t226*t451*t1509;
  t5322 = t5318 + t5321;
  t5323 = -0.16*t5322;
  t5324 = t5306 + t5307 + t5309 + t5317 + t5323;
  t5449 = -1.*t437*t38*t147*t451;
  t5450 = -1.*t748*t147*t416;
  t5451 = t5449 + t5450;
  t5453 = t437*t748*t38*t147;
  t5454 = -1.*t147*t451*t416;
  t5455 = t5453 + t5454;
  t5471 = -1.*t437*t748*t38*t147;
  t5474 = t147*t451*t416;
  t5475 = t5471 + t5474;
  t5492 = -1.*t38*t147*t451;
  t5495 = -1.*t437*t748*t147*t416;
  t5496 = t5492 + t5495;
  t5503 = -1.*t748*t38*t147;
  t5504 = t437*t147*t451*t416;
  t5508 = t5503 + t5504;
  t5525 = t437*t38*t451*t2248;
  t5526 = t748*t416*t2248;
  t5527 = t5525 + t5526;
  t5529 = -1.*t437*t748*t38*t2248;
  t5530 = t451*t416*t2248;
  t5531 = t5529 + t5530;
  t5470 = -0.2083*t5451;
  t5476 = -0.1422*t5475;
  t5477 = t2020*t5451;
  t5478 = t1753*t5475;
  t5480 = t5477 + t5478;
  t5481 = -0.02*t5480;
  t5482 = t1753*t5451;
  t5483 = t1509*t5475;
  t5484 = t5482 + t5483;
  t5485 = -0.16*t5484;
  t5486 = t5470 + t5476 + t5481 + t5485;
  t5343 = 0.1422*t748*t5329;
  t5345 = 0.2083*t451*t5329;
  t5346 = -1.*t748*t1753*t5329;
  t5347 = -1.*t451*t2020*t5329;
  t5348 = t5346 + t5347;
  t5350 = -0.02*t5348;
  t5355 = -1.*t1753*t451*t5329;
  t5357 = -1.*t748*t1509*t5329;
  t5366 = t5355 + t5357;
  t5367 = -0.16*t5366;
  t5368 = t5343 + t5345 + t5350 + t5367;
  t5566 = t38*t147;
  t5567 = 0. + t5566;
  t5569 = t437*t147*t416;
  t5570 = -1.*t2645*t2248;
  t5571 = 0. + t5569 + t5570;
  t5568 = -1.*t5567*t451;
  t5572 = -1.*t748*t5571;
  t5573 = t5568 + t5572;
  t5575 = t748*t5567;
  t5576 = -1.*t451*t5571;
  t5577 = t5575 + t5576;
  t5600 = -1.*t748*t5567;
  t5602 = t451*t5571;
  t5603 = t5600 + t5602;
  t5617 = -1.*t147*t2645;
  t5618 = -1.*t437*t416*t2248;
  t5620 = t5617 + t5618;
  t5616 = t38*t451*t2248;
  t5621 = -1.*t748*t5620;
  t5622 = t5616 + t5621;
  t5624 = -1.*t748*t38*t2248;
  t5625 = -1.*t451*t5620;
  t5626 = t5624 + t5625;
  t5409 = t147*t226;
  t5410 = t437*t416*t2248;
  t5413 = t5409 + t5410;
  t5414 = -0.0329*t5413;
  t5423 = -0.2083*t748*t5422;
  t5428 = 0.1422*t451*t5422;
  t5432 = -1.*t1753*t451*t5422;
  t5434 = t748*t2020*t5422;
  t5436 = t5432 + t5434;
  t5437 = -0.02*t5436;
  t5438 = t748*t1753*t5422;
  t5439 = -1.*t451*t1509*t5422;
  t5440 = t5438 + t5439;
  t5442 = -0.16*t5440;
  t5443 = t5414 + t5423 + t5428 + t5437 + t5442;
  t5523 = -0.0329*t38*t226*t2248;
  t5524 = -0.1944*t416*t2248;
  t5528 = -0.1422*t5527;
  t5536 = -0.2083*t5531;
  t5537 = t1509*t5527;
  t5541 = t1753*t5531;
  t5543 = t5537 + t5541;
  t5544 = -0.16*t5543;
  t5549 = t1753*t5527;
  t5553 = t2020*t5531;
  t5554 = t5549 + t5553;
  t5555 = -0.02*t5554;
  t5557 = t5523 + t5524 + t5528 + t5536 + t5544 + t5555;
  t5490 = 0.1944*t38*t147;
  t5372 = t147*t226*t416;
  t5650 = t2645*t2248;
  t5651 = t5379 + t5650;
  t5652 = t748*t5651;
  t5653 = t5492 + t5652;
  t5657 = -1.*t451*t5651;
  t5658 = t5503 + t5657;
  t5623 = -0.1422*t5622;
  t5627 = -0.2083*t5626;
  t5628 = t1509*t5622;
  t5629 = t1753*t5626;
  t5630 = t5628 + t5629;
  t5631 = -0.16*t5630;
  t5632 = t1753*t5622;
  t5633 = t2020*t5626;
  t5634 = t5632 + t5633;
  t5637 = -0.02*t5634;
  t5638 = t5623 + t5627 + t5631 + t5637;
  t5671 = -1.*t38*t451*t2248;
  t5674 = t748*t5620;
  t5675 = t5671 + t5674;
  t5452 = -1.*t1315*t5451;
  t5458 = -1.*t1709*t5455;
  t5459 = t5452 + t5458;
  t5461 = -0.02*t5459;
  t5462 = t1709*t5451;
  t5463 = -1.*t1315*t5455;
  t5464 = t5462 + t5463;
  t5465 = -0.16*t5464;
  t5466 = t5461 + t5465;
  t5330 = -1.*t1709*t451*t5329;
  t5332 = -1.*t748*t1315*t5329;
  t5333 = t5330 + t5332;
  t5334 = -0.16*t5333;
  t5336 = -1.*t748*t1709*t5329;
  t5337 = t451*t1315*t5329;
  t5338 = t5336 + t5337;
  t5339 = -0.02*t5338;
  t5340 = t5334 + t5339;
  t5574 = -1.*t1315*t5573;
  t5583 = -1.*t1709*t5577;
  t5588 = t5574 + t5583;
  t5589 = -0.02*t5588;
  t5590 = t1709*t5573;
  t5593 = -1.*t1315*t5577;
  t5594 = t5590 + t5593;
  t5595 = -0.16*t5594;
  t5596 = t5589 + t5595;
  t5692 = t5567*t451;
  t5693 = t748*t5571;
  t5695 = 0. + t5692 + t5693;
  t5698 = 0. + t5575 + t5576;
  t5676 = -1.*t1315*t5675;
  t5678 = t1709*t5626;
  t5679 = t5676 + t5678;
  t5680 = -0.16*t5679;
  t5681 = -1.*t1709*t5675;
  t5682 = -1.*t1315*t5626;
  t5683 = t5681 + t5682;
  t5684 = -0.02*t5683;
  t5685 = t5680 + t5684;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=var2[4]*(t2117*var2[3] + (t2939 - 0.2083*t3074 - 0.1422*t3092 - 0.16*(t1753*t3074 + t1509*t3092) - 0.02*(t2020*t3074 + t1753*t3092) + 0.1944*t158*t2248*t38 - 0.0329*(t3002 + t158*t2248*t226*t416))*var2[4] + t3339*var2[5] + t2563*var2[12] + t2821*var2[13] + t2922*var2[14]) + var2[12]*(t3498*var2[3] + t2563*var2[4] + t3858*var2[5] + (-0.0329*(t226*t3550 - 1.*t147*t158*t437) + 0.1422*t3556*t451 - 0.2083*t3556*t748 - 0.16*(-1.*t1509*t3556*t451 + t1753*t3556*t748) - 0.02*(-1.*t1753*t3556*t451 + t2020*t3556*t748))*var2[12] + t3770*var2[13] + t3725*var2[14]) + var2[3]*((0.0329*t226*t3886 + t3908 - 0.1422*t3928 - 0.2083*t3939 - 0.16*(t1509*t3928 + t1753*t3939) - 0.02*(t1753*t3928 + t2020*t3939))*var2[3] + t2117*var2[4] + t4123*var2[5] + t3498*var2[12] + t4024*var2[13] + t4046*var2[14]) + var2[13]*(t4024*var2[3] + t2821*var2[4] + t4312*var2[5] + t3770*var2[12] + (-0.2083*t4153 - 0.1422*t4210 - 0.16*(t1753*t4153 + t1509*t4210) - 0.02*(t2020*t4153 + t1753*t4210))*var2[13] + t4205*var2[14]) + var2[5]*(t4123*var2[3] + t3339*var2[4] + (t2939 - 0.0329*(t3002 - 1.*t226*t3886) + t3908 - 0.2083*t4335 - 0.1422*t4355 - 0.16*(t1753*t4335 + t1509*t4355) - 0.02*(t2020*t4335 + t1753*t4355))*var2[5] + t3858*var2[12] + t4312*var2[13] + t4406*var2[14]) + var2[14]*(t4046*var2[3] + t2922*var2[4] + t4406*var2[5] + t3725*var2[12] + t4205*var2[13] + (-0.16*(-1.*t1709*t4429 - 1.*t1315*t4431) - 0.02*(t1315*t4429 - 1.*t1709*t4431))*var2[14]);
  p_output1[7]=var2[3]*((0.0329*t226*t3783 + t4655 - 0.2083*t4661 - 0.1422*t4665 - 0.16*(t1753*t4661 + t1509*t4665) - 0.02*(t2020*t4661 + t1753*t4665))*var2[3] + t4507*var2[4] + t4586*var2[5] + t4558*var2[12] + t4630*var2[13] + t4650*var2[14]) + var2[12]*(t4558*var2[3] + t4756*var2[4] + t4776*var2[5] + (-0.0329*(t3818 + t226*t4088) + 0.1422*t451*t4784 - 0.2083*t4784*t748 - 0.16*(-1.*t1509*t451*t4784 + t1753*t4784*t748) - 0.02*(-1.*t1753*t451*t4784 + t2020*t4784*t748))*var2[12] + t4913*var2[13] + t4869*var2[14]) + var2[4]*(t4507*var2[3] + (0.1944*t2248*t3171*t38 + t5008 - 0.0329*(t2248*t226*t3171*t416 + t5013) - 0.2083*t5026 - 0.1422*t5041 - 0.16*(t1753*t5026 + t1509*t5041) - 0.02*(t2020*t5026 + t1753*t5041))*var2[4] + t4953*var2[5] + t4756*var2[12] + t4984*var2[13] + t5006*var2[14]) + var2[5]*(t4586*var2[3] + t4953*var2[4] + (-0.1422*t4284 - 0.2083*t4394 - 0.16*(t1509*t4284 + t1753*t4394) - 0.02*(t4293 + t2020*t4394) + t4655 + t5008 - 0.0329*(t3822 + t5013))*var2[5] + t4776*var2[12] + t5094*var2[13] + t5121*var2[14]) + var2[13]*(t4630*var2[3] + t4984*var2[4] + t5094*var2[5] + t4913*var2[12] + (-0.2083*t5169 - 0.1422*t5268 - 0.16*(t1753*t5169 + t1509*t5268) - 0.02*(t2020*t5169 + t1753*t5268))*var2[13] + t5194*var2[14]) + var2[14]*(t4650*var2[3] + t5006*var2[4] + t5121*var2[5] + t4869*var2[12] + t5194*var2[13] + (-0.16*(-1.*t1709*t5206 - 1.*t1315*t5209) - 0.02*(t1315*t5206 - 1.*t1709*t5209))*var2[14]);
  p_output1[8]=var2[12]*(t5324*var2[3] + t5443*var2[4] + (-0.0329*(t2248*t437 + t5372) + 0.1422*t451*t5381 - 0.2083*t5381*t748 - 0.16*(-1.*t1509*t451*t5381 + t1753*t5381*t748) - 0.02*(-1.*t1753*t451*t5381 + t2020*t5381*t748))*var2[12] + t5368*var2[13] + t5340*var2[14]) + var2[3]*((-0.0329*t147*t226*t416 + t5490 - 0.2083*t5496 - 0.1422*t5508 - 0.16*(t1753*t5496 + t1509*t5508) - 0.02*(t2020*t5496 + t1753*t5508))*var2[3] + t5557*var2[4] + t5324*var2[12] + t5486*var2[13] + t5466*var2[14]) + var2[13]*(t5486*var2[3] + t5638*var2[4] + t5368*var2[12] + (-0.2083*t5573 - 0.1422*t5603 - 0.16*(t1753*t5573 + t1509*t5603) - 0.02*(t2020*t5573 + t1753*t5603))*var2[13] + t5596*var2[14]) + var2[4]*(t5557*var2[3] + (-0.0817*t2248 - 0.0329*(t2248*t2944 + t5372) + t5490 - 0.2083*t5653 - 0.1422*t5658 - 0.16*(t1753*t5653 + t1509*t5658) - 0.02*(t2020*t5653 + t1753*t5658))*var2[4] + t5443*var2[12] + t5638*var2[13] + t5685*var2[14]) + var2[14]*(t5466*var2[3] + t5685*var2[4] + t5340*var2[12] + t5596*var2[13] + (-0.16*(-1.*t1709*t5695 - 1.*t1315*t5698) - 0.02*(t1315*t5695 - 1.*t1709*t5698))*var2[14]);
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "jj_hc_2_func.hh"

namespace SymFunction
{

void jj_hc_2_func_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE