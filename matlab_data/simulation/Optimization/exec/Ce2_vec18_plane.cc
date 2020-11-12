/*
 * Automatically Generated from Mathematica.
 * Sun 28 Jul 2019 02:53:13 GMT-04:00
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
  double t62;
  double t85;
  double t30;
  double t108;
  double t377;
  double t387;
  double t404;
  double t197;
  double t354;
  double t369;
  double t370;
  double t475;
  double t580;
  double t603;
  double t607;
  double t482;
  double t705;
  double t720;
  double t730;
  double t749;
  double t773;
  double t780;
  double t806;
  double t854;
  double t855;
  double t866;
  double t80;
  double t128;
  double t184;
  double t915;
  double t916;
  double t918;
  double t933;
  double t671;
  double t680;
  double t693;
  double t790;
  double t868;
  double t875;
  double t934;
  double t876;
  double t877;
  double t888;
  double t973;
  double t980;
  double t995;
  double t996;
  double t997;
  double t1110;
  double t1113;
  double t1120;
  double t950;
  double t993;
  double t1021;
  double t1030;
  double t210;
  double t410;
  double t514;
  double t532;
  double t552;
  double t559;
  double t577;
  double t616;
  double t631;
  double t633;
  double t636;
  double t638;
  double t1522;
  double t1528;
  double t1531;
  double t1536;
  double t1544;
  double t1556;
  double t1568;
  double t1571;
  double t1581;
  double t1610;
  double t1832;
  double t1835;
  double t1842;
  double t1643;
  double t1677;
  double t1689;
  double t1705;
  double t1714;
  double t1715;
  double t1720;
  double t1721;
  double t1741;
  double t1747;
  double t955;
  double t1190;
  double t1195;
  double t2015;
  double t2021;
  double t2023;
  double t2043;
  double t2082;
  double t2101;
  double t2106;
  double t2112;
  double t2130;
  double t895;
  double t1084;
  double t1091;
  double t1251;
  double t1272;
  double t1275;
  double t1277;
  double t1282;
  double t1286;
  double t1290;
  double t2436;
  double t2440;
  double t2448;
  double t2361;
  double t2392;
  double t2407;
  double t2675;
  double t2739;
  double t2685;
  double t2693;
  double t2733;
  double t2752;
  double t2764;
  double t2771;
  double t2811;
  double t2812;
  double t2815;
  double t2820;
  double t2822;
  double t2832;
  double t2845;
  double t2852;
  double t2858;
  double t2867;
  double t2871;
  double t2874;
  double t2928;
  double t2937;
  double t2942;
  double t2944;
  double t2949;
  double t2955;
  double t3138;
  double t3140;
  double t3141;
  double t3123;
  double t3127;
  double t3134;
  double t3146;
  double t3154;
  double t3165;
  double t3135;
  double t3171;
  double t3172;
  double t3257;
  double t3261;
  double t3277;
  double t3280;
  double t3283;
  double t3288;
  double t3481;
  double t3484;
  double t3490;
  double t3206;
  double t4046;
  double t4082;
  double t4083;
  double t4122;
  double t4171;
  double t4231;
  double t4093;
  double t4095;
  double t4114;
  double t4255;
  double t4263;
  double t3333;
  double t3449;
  double t3458;
  double t4435;
  double t4438;
  double t4473;
  double t4510;
  double t4518;
  double t4520;
  double t3538;
  double t3621;
  double t3667;
  double t3677;
  double t3725;
  double t3778;
  double t3799;
  double t4687;
  double t4706;
  double t4765;
  double t3886;
  double t3972;
  double t3995;
  double t2972;
  double t2985;
  double t2996;
  double t3006;
  double t3012;
  double t3019;
  double t937;
  double t946;
  double t949;
  double t953;
  double t959;
  double t964;
  double t970;
  double t1131;
  double t1176;
  double t1180;
  double t1193;
  double t1201;
  double t1211;
  double t1223;
  double t1224;
  double t1310;
  double t1357;
  double t1378;
  double t1405;
  double t1424;
  double t1429;
  double t1448;
  double t1478;
  double t3039;
  double t3074;
  double t3083;
  double t3086;
  double t3090;
  double t3097;
  double t1804;
  double t1805;
  double t1811;
  double t1823;
  double t1845;
  double t1850;
  double t1851;
  double t1854;
  double t1859;
  double t1869;
  double t1872;
  double t1915;
  double t1949;
  double t1960;
  double t2027;
  double t2135;
  double t2144;
  double t2156;
  double t2167;
  double t2192;
  double t2194;
  double t2200;
  double t2215;
  double t2222;
  double t2226;
  double t2227;
  double t2242;
  double t2244;
  double t2248;
  double t2265;
  double t2272;
  double t2281;
  double t2292;
  double t2309;
  double t2316;
  double t5420;
  double t5426;
  double t5429;
  double t2418;
  double t2426;
  double t2449;
  double t2460;
  double t2475;
  double t2491;
  double t2500;
  double t2501;
  double t2502;
  double t2506;
  double t2536;
  double t2539;
  double t2540;
  double t2566;
  double t2571;
  double t2584;
  double t3002;
  double t3028;
  double t3084;
  double t3103;
  double t3107;
  double t2866;
  double t2897;
  double t2903;
  double t2818;
  double t2837;
  double t2838;
  double t2943;
  double t2956;
  double t2960;
  double t2738;
  double t2773;
  double t2786;
  double t3196;
  double t3197;
  double t3205;
  double t3208;
  double t3215;
  double t3218;
  double t3252;
  double t3278;
  double t3336;
  double t3342;
  double t3424;
  double t3444;
  double t3445;
  double t3452;
  double t3468;
  double t3471;
  double t3472;
  double t3512;
  double t3516;
  double t3520;
  double t3568;
  double t3585;
  double t3591;
  double t3611;
  double t3645;
  double t3650;
  double t3661;
  double t3670;
  double t3685;
  double t3694;
  double t3720;
  double t3734;
  double t3741;
  double t3759;
  double t3793;
  double t3801;
  double t3816;
  double t3833;
  double t3863;
  double t3871;
  double t3910;
  double t3913;
  double t3918;
  double t3941;
  double t3971;
  double t3982;
  double t4006;
  double t4020;
  double t4022;
  double t4270;
  double t4326;
  double t4363;
  double t4364;
  double t4387;
  double t4401;
  double t4413;
  double t4496;
  double t4546;
  double t4552;
  double t4559;
  double t4561;
  double t4586;
  double t4627;
  double t4631;
  double t4632;
  double t4637;
  double t4654;
  double t4802;
  double t4836;
  double t4848;
  double t4903;
  double t4916;
  double t4972;
  double t4985;
  double t5017;
  double t5021;
  double t5056;
  double t5063;
  double t5073;
  double t5100;
  double t5104;
  double t5121;
  double t5126;
  double t5154;
  double t5164;
  double t5169;
  double t5170;
  double t5173;
  double t5208;
  double t5235;
  double t5242;
  double t5259;
  double t5261;
  double t5293;
  double t5300;
  double t5308;
  double t5317;
  double t5328;
  double t5336;
  double t5337;
  double t5349;
  double t5350;
  double t5367;
  double t5368;
  double t5369;
  double t5370;
  double t5829;
  double t5844;
  double t5845;
  double t2807;
  double t2841;
  double t2924;
  double t2963;
  double t2964;
  double t5570;
  double t5581;
  double t5585;
  double t5589;
  double t5590;
  double t6044;
  double t6048;
  double t6050;
  double t4412;
  double t4655;
  double t4979;
  double t5294;
  double t5371;
  double t5375;
  double t5965;
  double t5967;
  double t5968;
  double t5970;
  double t5975;
  double t5983;
  double t5750;
  double t5752;
  double t5754;
  double t5755;
  double t5757;
  double t5765;
  double t6099;
  double t6101;
  double t6103;
  double t6053;
  double t6054;
  double t6055;
  double t6076;
  double t6077;
  double t6079;
  double t3250;
  double t3476;
  double t3596;
  double t3841;
  double t4034;
  double t4037;
  double t5925;
  double t5928;
  double t5940;
  double t5943;
  double t5949;
  double t5960;
  double t5673;
  double t5684;
  double t5689;
  double t5700;
  double t5723;
  double t5731;
  double t6094;
  double t6095;
  double t6097;
  double t6098;
  double t6104;
  double t6106;
  double t6107;
  double t6184;
  double t6185;
  double t6189;
  double t6190;
  double t6212;
  double t6214;
  double t2341;
  double t2515;
  double t2597;
  double t5888;
  double t5898;
  double t5899;
  double t5521;
  double t5551;
  double t5554;
  double t6148;
  double t6150;
  double t6152;
  double t6064;
  double t6072;
  double t6075;
  double t6326;
  double t6327;
  double t6332;
  double t6334;
  double t6359;
  double t6360;
  double t1309;
  double t1625;
  double t1754;
  double t5848;
  double t5855;
  double t5862;
  double t5434;
  double t5458;
  double t5472;
  double t6132;
  double t6137;
  double t6141;
  double t6038;
  double t6051;
  double t6052;
  double t6521;
  double t6525;
  double t6531;
  double t6532;
  double t1879;
  double t1976;
  double t5874;
  double t5875;
  double t5504;
  double t5506;
  double t6122;
  double t6124;
  double t6021;
  double t6030;
  double t6486;
  double t6491;
  double t6507;
  double t6174;
  double t6177;
  double t6179;
  double t6317;
  double t6318;
  double t6319;
  double t563;
  double t642;
  double t646;
  double t5793;
  double t5794;
  double t5795;
  double t5408;
  double t5416;
  double t5417;
  double t6117;
  double t6118;
  double t6120;
  double t6001;
  double t6005;
  double t6009;
  t62 = Cos(var1[17]);
  t85 = Sin(var1[16]);
  t30 = Cos(var1[16]);
  t108 = Sin(var1[17]);
  t377 = -1.*t62*t85;
  t387 = -1.*t30*t108;
  t404 = t377 + t387;
  t197 = Sin(var1[4]);
  t354 = Cos(var1[4]);
  t369 = Cos(var1[5]);
  t370 = Sin(var1[15]);
  t475 = Cos(var1[15]);
  t580 = -1.*t30*t62;
  t603 = t85*t108;
  t607 = t580 + t603;
  t482 = Sin(var1[5]);
  t705 = -1.*t62;
  t720 = 1. + t705;
  t730 = -0.336601*t720;
  t749 = -0.356601*t62;
  t773 = -0.16*t108;
  t780 = 0. + t730 + t749 + t773;
  t806 = -0.20833*t720;
  t854 = -0.36833*t62;
  t855 = 0.020000000000000018*t108;
  t866 = 0. + t806 + t854 + t855;
  t80 = t30*t62;
  t128 = -1.*t85*t108;
  t184 = t80 + t128;
  t915 = -0.194401*t85;
  t916 = -1.*t85*t780;
  t918 = t30*t866;
  t933 = 0. + t915 + t916 + t918;
  t671 = -1.*t30;
  t680 = 1. + t671;
  t693 = -0.194401*t680;
  t790 = t30*t780;
  t868 = t85*t866;
  t875 = 0. + t693 + t790 + t868;
  t934 = 0. + t80 + t128;
  t876 = t62*t85;
  t877 = t30*t108;
  t888 = 0. + t876 + t877;
  t973 = -0.16*t62;
  t980 = t973 + t855;
  t995 = 0.020000000000000018*t62;
  t996 = 0.16*t108;
  t997 = t995 + t996;
  t1110 = -1.*t85*t980;
  t1113 = t30*t997;
  t1120 = t1110 + t1113;
  t950 = 0. + t377 + t387;
  t993 = t30*t980;
  t1021 = t85*t997;
  t1030 = t993 + t1021;
  t210 = t184*t197;
  t410 = -1.*t369*t370*t404;
  t514 = -1.*t475*t404*t482;
  t532 = t410 + t514;
  t552 = t354*t532;
  t559 = t210 + t552;
  t577 = t404*t197;
  t616 = -1.*t369*t370*t607;
  t631 = -1.*t475*t607*t482;
  t633 = t616 + t631;
  t636 = t354*t633;
  t638 = t577 + t636;
  t1522 = t934*t197;
  t1528 = -1.*t370*t950;
  t1531 = 0. + t1528;
  t1536 = t369*t1531;
  t1544 = t475*t950;
  t1556 = 0. + t1544;
  t1568 = -1.*t1556*t482;
  t1571 = 0. + t1536 + t1568;
  t1581 = t354*t1571;
  t1610 = 0. + t1522 + t1581;
  t1832 = t62*t866;
  t1835 = 0.194401*t108;
  t1842 = t780*t108;
  t1643 = t888*t197;
  t1677 = -1.*t370*t934;
  t1689 = 0. + t1677;
  t1705 = t369*t1689;
  t1714 = t475*t934;
  t1715 = 0. + t1714;
  t1720 = -1.*t1715*t482;
  t1721 = 0. + t1705 + t1720;
  t1741 = t354*t1721;
  t1747 = 0. + t1643 + t1741;
  t955 = t875*t934;
  t1190 = t875*t404;
  t1195 = t1030*t934;
  t2015 = 0.035165*t370;
  t2021 = t475*t933;
  t2023 = t2015 + t2021;
  t2043 = -1.*t475;
  t2082 = 1. + t2043;
  t2101 = 0.081715*t2082;
  t2106 = 0.11688*t475;
  t2112 = -1.*t370*t933;
  t2130 = t2101 + t2106 + t2112;
  t895 = -1.*t875*t888;
  t1084 = -1.*t1030*t888;
  t1091 = -1.*t875*t184;
  t1251 = 0. + t475;
  t1272 = t1251*t369;
  t1275 = 0. + t370;
  t1277 = -1.*t1275*t482;
  t1282 = 0. + t1272 + t1277;
  t1286 = t354*t1282;
  t1290 = 0. + t1286;
  t2436 = -1.*t1275*t2023;
  t2440 = -1.*t1251*t2130;
  t2448 = 0. + t2436 + t2440;
  t2361 = t1275*t2023;
  t2392 = t1251*t2130;
  t2407 = 0. + t2361 + t2392;
  t2675 = Sin(var1[3]);
  t2739 = Cos(var1[3]);
  t2685 = t475*t369*t404;
  t2693 = -1.*t370*t404*t482;
  t2733 = t2685 + t2693;
  t2752 = t354*t184;
  t2764 = -1.*t197*t532;
  t2771 = t2752 + t2764;
  t2811 = t475*t369*t607;
  t2812 = -1.*t370*t607*t482;
  t2815 = t2811 + t2812;
  t2820 = t354*t404;
  t2822 = -1.*t197*t633;
  t2832 = t2820 + t2822;
  t2845 = t369*t1556;
  t2852 = t1531*t482;
  t2858 = 0. + t2845 + t2852;
  t2867 = t354*t934;
  t2871 = -1.*t197*t1571;
  t2874 = 0. + t2867 + t2871;
  t2928 = t369*t1715;
  t2937 = t1689*t482;
  t2942 = 0. + t2928 + t2937;
  t2944 = t354*t888;
  t2949 = -1.*t197*t1721;
  t2955 = 0. + t2944 + t2949;
  t3138 = t369*t1275;
  t3140 = t1251*t482;
  t3141 = 0. + t3138 + t3140;
  t3123 = t369*t2130;
  t3127 = -1.*t2023*t482;
  t3134 = 0. + t3123 + t3127;
  t3146 = t369*t2023;
  t3154 = t2130*t482;
  t3165 = 0. + t3146 + t3154;
  t3135 = t1282*t3134;
  t3171 = t3141*t3165;
  t3172 = 0. + t3135 + t3171;
  t3257 = -1.*t369*t370*t1120;
  t3261 = -1.*t475*t1120*t482;
  t3277 = t3257 + t3261;
  t3280 = t475*t369*t1120;
  t3283 = -1.*t370*t1120*t482;
  t3288 = t3280 + t3283;
  t3481 = -1.*t1282*t3134;
  t3484 = -1.*t3141*t3165;
  t3490 = 0. + t3481 + t3484;
  t3206 = -1.*t3165*t2858;
  t4046 = t875*t197;
  t4082 = t354*t3134;
  t4083 = 0. + t4046 + t4082;
  t4122 = t354*t875;
  t4171 = -1.*t197*t3134;
  t4231 = 0. + t4122 + t4171;
  t4093 = t1290*t4083;
  t4095 = -1.*t197*t1282;
  t4114 = 0. + t4095;
  t4255 = t4114*t4231;
  t4263 = t3171 + t4093 + t4255;
  t3333 = t3141*t3288;
  t3449 = -1.*t3165*t2815;
  t3458 = -1.*t3288*t2858;
  t4435 = t1030*t197;
  t4438 = t354*t3277;
  t4473 = t4435 + t4438;
  t4510 = t354*t1030;
  t4518 = -1.*t197*t3277;
  t4520 = t4510 + t4518;
  t3538 = t3165*t2942;
  t3621 = t3165*t2858;
  t3667 = t3165*t2815;
  t3677 = t3288*t2858;
  t3725 = -1.*t3165*t2942;
  t3778 = -1.*t3165*t2733;
  t3799 = -1.*t3288*t2942;
  t4687 = -1.*t1290*t4083;
  t4706 = -1.*t4114*t4231;
  t4765 = t3484 + t4687 + t4706;
  t3886 = -1.*t3141*t3288;
  t3972 = t3165*t2733;
  t3995 = t3288*t2942;
  t2972 = t2739*t2733;
  t2985 = -1.*t2675*t2771;
  t2996 = t2972 + t2985;
  t3006 = t2739*t2815;
  t3012 = -1.*t2675*t2832;
  t3019 = t3006 + t3012;
  t937 = -1.*t933*t934;
  t946 = 0. + t895 + t937;
  t949 = t404*t946;
  t953 = t933*t950;
  t959 = 0. + t953 + t955;
  t964 = t184*t959;
  t970 = -1.*t933*t404;
  t1131 = -1.*t1120*t934;
  t1176 = t970 + t1084 + t1091 + t1131;
  t1180 = t934*t1176;
  t1193 = t1120*t950;
  t1201 = t933*t607;
  t1211 = t1190 + t1193 + t1195 + t1201;
  t1223 = t888*t1211;
  t1224 = t949 + t964 + t1180 + t1223;
  t1310 = 0.035165*t934;
  t1357 = 0. + t1310;
  t1378 = -0.081715*t950;
  t1405 = -0.11688*t888;
  t1424 = 0. + t1378 + t1405;
  t1429 = -0.11688*t184;
  t1448 = -0.081715*t607;
  t1478 = t1429 + t1448;
  t3039 = t2739*t2858;
  t3074 = -1.*t2675*t2874;
  t3083 = 0. + t3039 + t3074;
  t3086 = t2739*t2942;
  t3090 = -1.*t2675*t2955;
  t3097 = 0. + t3086 + t3090;
  t1804 = -0.194401*t62;
  t1805 = -1.*t62*t780;
  t1811 = t866*t108;
  t1823 = 0. + t1804 + t1805 + t1811;
  t1845 = 0. + t1832 + t1835 + t1842;
  t1850 = 0.194401*t62;
  t1851 = t62*t780;
  t1854 = t62*t997;
  t1859 = -1.*t866*t108;
  t1869 = t980*t108;
  t1872 = t1850 + t1851 + t1854 + t1859 + t1869;
  t1915 = -1.*t62*t980;
  t1949 = t997*t108;
  t1960 = t1832 + t1915 + t1835 + t1842 + t1949;
  t2027 = t2023*t1556;
  t2135 = t2130*t1531;
  t2144 = t955 + t2027 + t2135;
  t2156 = t184*t2144;
  t2167 = t475*t2023*t607;
  t2192 = -1.*t370*t2130*t607;
  t2194 = t475*t1120*t1556;
  t2200 = -1.*t370*t1120*t1531;
  t2215 = t1190 + t1195 + t2167 + t2192 + t2194 + t2200;
  t2222 = t888*t2215;
  t2226 = -1.*t2023*t1715;
  t2227 = -1.*t2130*t1689;
  t2242 = t895 + t2226 + t2227;
  t2244 = t404*t2242;
  t2248 = -1.*t475*t2023*t404;
  t2265 = t370*t2130*t404;
  t2272 = -1.*t475*t1120*t1715;
  t2281 = t370*t1120*t1689;
  t2292 = t2248 + t2265 + t1084 + t1091 + t2272 + t2281;
  t2309 = t934*t2292;
  t2316 = t2156 + t2222 + t2244 + t2309;
  t5420 = t2739*t3141;
  t5426 = -1.*t2675*t4114;
  t5429 = 0. + t5420 + t5426;
  t2418 = t2407*t934;
  t2426 = 0. + t2418;
  t2449 = t2448*t888;
  t2460 = 0. + t2449;
  t2475 = t1251*t370*t1120;
  t2491 = -1.*t475*t1275*t1120;
  t2500 = t2475 + t2491;
  t2501 = t2500*t888;
  t2502 = t2448*t184;
  t2506 = t2501 + t2502;
  t2536 = t2407*t404;
  t2539 = -1.*t1251*t370*t1120;
  t2540 = t475*t1275*t1120;
  t2566 = t2539 + t2540;
  t2571 = t2566*t934;
  t2584 = t2536 + t2571;
  t3002 = 0.241*t1747*t2996;
  t3028 = 0.241*t1610*t3019;
  t3084 = 0.241*t638*t3083;
  t3103 = 0.241*t559*t3097;
  t3107 = t3002 + t3028 + t3084 + t3103;
  t2866 = t2675*t2858;
  t2897 = t2739*t2874;
  t2903 = 0. + t2866 + t2897;
  t2818 = t2675*t2815;
  t2837 = t2739*t2832;
  t2838 = t2818 + t2837;
  t2943 = t2675*t2942;
  t2956 = t2739*t2955;
  t2960 = 0. + t2943 + t2956;
  t2738 = t2675*t2733;
  t2773 = t2739*t2771;
  t2786 = t2738 + t2773;
  t3196 = t2858*t3172;
  t3197 = -1.*t875*t934;
  t3205 = -1.*t3134*t1571;
  t3208 = t3197 + t3205 + t3206;
  t3215 = t3141*t3208;
  t3218 = t3196 + t3215;
  t3252 = t2815*t3172;
  t3278 = t1282*t3277;
  t3336 = t3278 + t3333;
  t3342 = t2858*t3336;
  t3424 = -1.*t875*t404;
  t3444 = -1.*t1030*t934;
  t3445 = -1.*t3134*t633;
  t3452 = -1.*t3277*t1571;
  t3468 = t3424 + t3444 + t3445 + t3449 + t3452 + t3458;
  t3471 = t3141*t3468;
  t3472 = t3252 + t3342 + t3471;
  t3512 = t2942*t3490;
  t3516 = t875*t888;
  t3520 = t3134*t1721;
  t3568 = t3516 + t3520 + t3538;
  t3585 = t3141*t3568;
  t3591 = t3512 + t3585;
  t3611 = t3134*t1571;
  t3645 = t955 + t3611 + t3621;
  t3650 = t2733*t3645;
  t3661 = t3134*t633;
  t3670 = t3277*t1571;
  t3685 = t1190 + t1195 + t3661 + t3667 + t3670 + t3677;
  t3694 = t2942*t3685;
  t3720 = -1.*t3134*t1721;
  t3734 = t895 + t3720 + t3725;
  t3741 = t2815*t3734;
  t3759 = -1.*t3134*t532;
  t3793 = -1.*t3277*t1721;
  t3801 = t1084 + t1091 + t3759 + t3778 + t3793 + t3799;
  t3816 = t2858*t3801;
  t3833 = t3650 + t3694 + t3741 + t3816;
  t3863 = t2733*t3490;
  t3871 = -1.*t1282*t3277;
  t3910 = t3871 + t3886;
  t3913 = t2942*t3910;
  t3918 = t1030*t888;
  t3941 = t875*t184;
  t3971 = t3134*t532;
  t3982 = t3277*t1721;
  t4006 = t3918 + t3941 + t3971 + t3972 + t3982 + t3995;
  t4020 = t3141*t4006;
  t4022 = t3863 + t3913 + t4020;
  t4270 = t1610*t4263;
  t4326 = -1.*t4083*t1610;
  t4363 = -1.*t4231*t2874;
  t4364 = t3206 + t4326 + t4363;
  t4387 = t1290*t4364;
  t4401 = t4270 + t4387;
  t4413 = t638*t4263;
  t4496 = t1290*t4473;
  t4546 = t4114*t4520;
  t4552 = t3333 + t4496 + t4546;
  t4559 = t1610*t4552;
  t4561 = -1.*t4083*t638;
  t4586 = -1.*t4231*t2832;
  t4627 = -1.*t4473*t1610;
  t4631 = -1.*t4520*t2874;
  t4632 = t3449 + t3458 + t4561 + t4586 + t4627 + t4631;
  t4637 = t1290*t4632;
  t4654 = t4413 + t4559 + t4637;
  t4802 = t1747*t4765;
  t4836 = t4083*t1747;
  t4848 = t4231*t2955;
  t4903 = t3538 + t4836 + t4848;
  t4916 = t1290*t4903;
  t4972 = t4802 + t4916;
  t4985 = t4083*t1610;
  t5017 = t4231*t2874;
  t5021 = t3621 + t4985 + t5017;
  t5056 = t559*t5021;
  t5063 = t4083*t638;
  t5073 = t4231*t2832;
  t5100 = t4473*t1610;
  t5104 = t4520*t2874;
  t5121 = t3667 + t3677 + t5063 + t5073 + t5100 + t5104;
  t5126 = t1747*t5121;
  t5154 = -1.*t4083*t1747;
  t5164 = -1.*t4231*t2955;
  t5169 = t3725 + t5154 + t5164;
  t5170 = t638*t5169;
  t5173 = -1.*t4083*t559;
  t5208 = -1.*t4231*t2771;
  t5235 = -1.*t4473*t1747;
  t5242 = -1.*t4520*t2955;
  t5259 = t3778 + t3799 + t5173 + t5208 + t5235 + t5242;
  t5261 = t1610*t5259;
  t5293 = t5056 + t5126 + t5170 + t5261;
  t5300 = t559*t4765;
  t5308 = -1.*t1290*t4473;
  t5317 = -1.*t4114*t4520;
  t5328 = t3886 + t5308 + t5317;
  t5336 = t1747*t5328;
  t5337 = t4083*t559;
  t5349 = t4231*t2771;
  t5350 = t4473*t1747;
  t5367 = t4520*t2955;
  t5368 = t3972 + t3995 + t5337 + t5349 + t5350 + t5367;
  t5369 = t1290*t5368;
  t5370 = t5300 + t5336 + t5369;
  t5829 = t2675*t3141;
  t5844 = t2739*t4114;
  t5845 = 0. + t5829 + t5844;
  t2807 = 0.241*t1747*t2786;
  t2841 = 0.241*t1610*t2838;
  t2924 = 0.241*t638*t2903;
  t2963 = 0.241*t559*t2960;
  t2964 = t2807 + t2841 + t2924 + t2963;
  t5570 = 0.241*t3019*t2903;
  t5581 = 0.241*t2838*t3083;
  t5585 = 0.241*t2996*t2960;
  t5589 = 0.241*t2786*t3097;
  t5590 = t5570 + t5581 + t5585 + t5589;
  t6044 = t1747*t5021;
  t6048 = t1610*t5169;
  t6050 = t6044 + t6048;
  t4412 = 0.241*t559*t4401;
  t4655 = 0.241*t1747*t4654;
  t4979 = 0.241*t638*t4972;
  t5294 = 0.241*t1290*t5293;
  t5371 = 0.241*t1610*t5370;
  t5375 = t4412 + t4655 + t4979 + t5294 + t5371;
  t5965 = 0.241*t2786*t4401;
  t5967 = 0.241*t2960*t4654;
  t5968 = 0.241*t2838*t4972;
  t5970 = 0.241*t5845*t5293;
  t5975 = 0.241*t2903*t5370;
  t5983 = t5965 + t5967 + t5968 + t5970 + t5975;
  t5750 = 0.241*t2996*t4401;
  t5752 = 0.241*t3097*t4654;
  t5754 = 0.241*t3019*t4972;
  t5755 = 0.241*t5429*t5293;
  t5757 = 0.241*t3083*t5370;
  t5765 = t5750 + t5752 + t5754 + t5755 + t5757;
  t6099 = t2942*t3645;
  t6101 = t2858*t3734;
  t6103 = 0. + t6099 + t6101;
  t6053 = t934*t946;
  t6054 = t888*t959;
  t6055 = 0. + t6053 + t6054;
  t6076 = t888*t2144;
  t6077 = t934*t2242;
  t6079 = 0. + t6076 + t6077;
  t3250 = 0.241*t559*t3218;
  t3476 = 0.241*t1747*t3472;
  t3596 = 0.241*t638*t3591;
  t3841 = 0.241*t1290*t3833;
  t4034 = 0.241*t1610*t4022;
  t4037 = t3250 + t3476 + t3596 + t3841 + t4034;
  t5925 = 0.241*t2786*t3218;
  t5928 = 0.241*t3472*t2960;
  t5940 = 0.241*t2838*t3591;
  t5943 = 0.241*t5845*t3833;
  t5949 = 0.241*t2903*t4022;
  t5960 = t5925 + t5928 + t5940 + t5943 + t5949;
  t5673 = 0.241*t2996*t3218;
  t5684 = 0.241*t3472*t3097;
  t5689 = 0.241*t3019*t3591;
  t5700 = 0.241*t5429*t3833;
  t5723 = 0.241*t3083*t4022;
  t5731 = t5673 + t5684 + t5689 + t5700 + t5723;
  t6094 = 0.241*t3472*t4401;
  t6095 = 0.241*t3218*t4654;
  t6097 = 0.241*t3833*t6050;
  t6098 = 0.241*t4022*t4972;
  t6104 = 0.241*t6103*t5293;
  t6106 = 0.241*t3591*t5370;
  t6107 = t6094 + t6095 + t6097 + t6098 + t6104 + t6106;
  t6184 = 0.241*t2460;
  t6185 = 0. + t6184;
  t6189 = 0.241*t2426;
  t6190 = 0. + t6189;
  t6212 = 0.241*t6079;
  t6214 = 0. + t6212;
  t2341 = 0.241*t2316*t1290;
  t2515 = 0.241*t2506*t1610;
  t2597 = 0.241*t2584*t1747;
  t5888 = 0.241*t2316*t5845;
  t5898 = 0.241*t2506*t2903;
  t5899 = 0.241*t2584*t2960;
  t5521 = 0.241*t2316*t5429;
  t5551 = 0.241*t2506*t3083;
  t5554 = 0.241*t2584*t3097;
  t6148 = 0.241*t2584*t3218;
  t6150 = 0.241*t2316*t6103;
  t6152 = 0.241*t2506*t3591;
  t6064 = 0.241*t2584*t4401;
  t6072 = 0.241*t2316*t6050;
  t6075 = 0.241*t2506*t4972;
  t6326 = 0.241*t1424;
  t6327 = 0. + t6326;
  t6332 = 0.241*t1357;
  t6334 = 0. + t6332;
  t6359 = 0.241*t6055;
  t6360 = 0. + t6359;
  t1309 = 0.241*t1224*t1290;
  t1625 = 0.241*t1478*t1610;
  t1754 = 0.008474765*t404*t1747;
  t5848 = 0.241*t1224*t5845;
  t5855 = 0.241*t1478*t2903;
  t5862 = 0.008474765*t404*t2960;
  t5434 = 0.241*t1224*t5429;
  t5458 = 0.241*t1478*t3083;
  t5472 = 0.008474765*t404*t3097;
  t6132 = 0.008474765*t404*t3218;
  t6137 = 0.241*t1224*t6103;
  t6141 = 0.241*t1478*t3591;
  t6038 = 0.008474765*t404*t4401;
  t6051 = 0.241*t1224*t6050;
  t6052 = 0.241*t1478*t4972;
  t6521 = 0.241*t1845;
  t6525 = 0. + t6521;
  t6531 = 0.241*t1823;
  t6532 = 0. + t6531;
  t1879 = 0.241*t1872*t1610;
  t1976 = 0.241*t1960*t1747;
  t5874 = 0.241*t1872*t2903;
  t5875 = 0.241*t1960*t2960;
  t5504 = 0.241*t1872*t3083;
  t5506 = 0.241*t1960*t3097;
  t6122 = 0.241*t1960*t3218;
  t6124 = 0.241*t1872*t3591;
  t6021 = 0.241*t1960*t4401;
  t6030 = 0.241*t1872*t4972;
  t6486 = -0.03856*t1872;
  t6491 = 0.004820000000000004*t1960;
  t6507 = t6486 + t6491;
  t6174 = -0.03856*t2506;
  t6177 = 0.004820000000000004*t2584;
  t6179 = t6174 + t6177;
  t6317 = 0.00016949530000000016*t404;
  t6318 = -0.03856*t1478;
  t6319 = t6317 + t6318;
  t563 = 0.004820000000000004*t559;
  t642 = -0.03856*t638;
  t646 = t563 + t642;
  t5793 = 0.004820000000000004*t2786;
  t5794 = -0.03856*t2838;
  t5795 = t5793 + t5794;
  t5408 = 0.004820000000000004*t2996;
  t5416 = -0.03856*t3019;
  t5417 = t5408 + t5416;
  t6117 = 0.004820000000000004*t3472;
  t6118 = -0.03856*t4022;
  t6120 = t6117 + t6118;
  t6001 = 0.004820000000000004*t4654;
  t6005 = -0.03856*t5370;
  t6009 = t6001 + t6005;
  p_output1[0]=var2[17]*(-0.5*(0.482*t1747*t559 + 0.482*t1610*t638)*var2[0] - 0.5*t3107*var2[1] - 0.5*t2964*var2[2] - 0.5*t5375*var2[3] - 0.5*t4037*var2[4] - 0.5*(t2341 + t2515 + t2597 + 0.241*t2426*t559 + 0.241*t2460*t638)*var2[5] - 0.5*(t1309 + t1625 + t1754 + 0.241*t1357*t559 + 0.241*t1424*t638)*var2[15] - 0.5*(t1879 + t1976 + 0.241*t1823*t559 + 0.241*t1845*t638)*var2[16] - 0.5*t646*var2[17]);
  p_output1[1]=var2[17]*(-0.5*t3107*var2[0] - 0.5*(0.482*t3019*t3083 + 0.482*t2996*t3097)*var2[1] - 0.5*t5590*var2[2] - 0.5*t5765*var2[3] - 0.5*t5731*var2[4] - 0.5*(0.241*t2426*t2996 + 0.241*t2460*t3019 + t5521 + t5551 + t5554)*var2[5] - 0.5*(0.241*t1357*t2996 + 0.241*t1424*t3019 + t5434 + t5458 + t5472)*var2[15] - 0.5*(0.241*t1823*t2996 + 0.241*t1845*t3019 + t5504 + t5506)*var2[16] - 0.5*t5417*var2[17]);
  p_output1[2]=var2[17]*(-0.5*t2964*var2[0] - 0.5*t5590*var2[1] - 0.5*(0.482*t2838*t2903 + 0.482*t2786*t2960)*var2[2] - 0.5*t5983*var2[3] - 0.5*t5960*var2[4] - 0.5*(0.241*t2426*t2786 + 0.241*t2460*t2838 + t5888 + t5898 + t5899)*var2[5] - 0.5*(0.241*t1357*t2786 + 0.241*t1424*t2838 + t5848 + t5855 + t5862)*var2[15] - 0.5*(0.241*t1823*t2786 + 0.241*t1845*t2838 + t5874 + t5875)*var2[16] - 0.5*t5795*var2[17]);
  p_output1[3]=var2[17]*(-0.5*t5375*var2[0] - 0.5*t5765*var2[1] - 0.5*t5983*var2[2] - 0.5*(0.482*t4401*t4654 + 0.482*t4972*t5370 + 0.482*t5293*t6050)*var2[3] - 0.5*t6107*var2[4] - 0.5*(0.241*t2426*t4654 + 0.241*t2460*t5370 + t6064 + t6072 + t6075 + 0.241*t5293*t6079)*var2[5] - 0.5*(0.241*t1357*t4654 + 0.241*t1424*t5370 + t6038 + t6051 + t6052 + 0.241*t5293*t6055)*var2[15] - 0.5*(0.241*t1823*t4654 + 0.241*t1845*t5370 + t6021 + t6030)*var2[16] - 0.5*t6009*var2[17]);
  p_output1[4]=var2[17]*(-0.5*t4037*var2[0] - 0.5*t5731*var2[1] - 0.5*t5960*var2[2] - 0.5*t6107*var2[3] - 0.5*(0.482*t3218*t3472 + 0.482*t3591*t4022 + 0.482*t3833*t6103)*var2[4] - 0.5*(0.241*t2426*t3472 + 0.241*t2460*t4022 + 0.241*t3833*t6079 + t6148 + t6150 + t6152)*var2[5] - 0.5*(0.241*t1357*t3472 + 0.241*t1424*t4022 + 0.241*t3833*t6055 + t6132 + t6137 + t6141)*var2[15] - 0.5*(0.241*t1823*t3472 + 0.241*t1845*t4022 + t6122 + t6124)*var2[16] - 0.5*t6120*var2[17]);
  p_output1[5]=var2[17]*(-0.5*(t2341 + t2515 + t2597 + t559*t6190 + t6185*t638)*var2[0] - 0.5*(t5521 + t5551 + t5554 + t3019*t6185 + t2996*t6190)*var2[1] - 0.5*(t5888 + t5898 + t5899 + t2838*t6185 + t2786*t6190)*var2[2] - 0.5*(t6064 + t6072 + t6075 + t5370*t6185 + t4654*t6190 + t5293*t6214)*var2[3] - 0.5*(t6148 + t6150 + t6152 + t4022*t6185 + t3472*t6190 + t3833*t6214)*var2[4] - 0.5*(0.241*t2460*t2506 + 0.241*t2426*t2584 + 0.241*t2316*t6079 + t2506*t6185 + t2584*t6190 + t2316*t6214)*var2[5] - 0.5*(0.241*t1424*t2506 + 0.241*t1357*t2584 + 0.241*t2316*t6055 + t1478*t6185 + 0.035165*t404*t6190 + t1224*t6214)*var2[15] - 0.5*(0.241*t1845*t2506 + 0.241*t1823*t2584 + t1872*t6185 + t1960*t6190)*var2[16] - 0.5*t6179*var2[17]);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=var2[17]*(-0.5*(t1309 + t1625 + t1754 + t559*t6334 + t6327*t638)*var2[0] - 0.5*(t5434 + t5458 + t5472 + t3019*t6327 + t2996*t6334)*var2[1] - 0.5*(t5848 + t5855 + t5862 + t2838*t6327 + t2786*t6334)*var2[2] - 0.5*(t6038 + t6051 + t6052 + t5370*t6327 + t4654*t6334 + t5293*t6360)*var2[3] - 0.5*(t6132 + t6137 + t6141 + t4022*t6327 + t3472*t6334 + t3833*t6360)*var2[4] - 0.5*(0.241*t1478*t2460 + 0.008474765*t2426*t404 + 0.241*t1224*t6079 + t2506*t6327 + t2584*t6334 + t2316*t6360)*var2[5] - 0.5*(0.241*t1424*t1478 + 0.008474765*t1357*t404 + 0.241*t1224*t6055 + t1478*t6327 + 0.035165*t404*t6334 + t1224*t6360)*var2[15] - 0.5*(0.241*t1478*t1845 + 0.008474765*t1823*t404 + t1872*t6327 + t1960*t6334)*var2[16] - 0.5*t6319*var2[17]);
  p_output1[16]=var2[17]*(-0.5*(t1879 + t1976 + t638*t6525 + t559*t6532)*var2[0] - 0.5*(t5504 + t5506 + t3019*t6525 + t2996*t6532)*var2[1] - 0.5*(t5874 + t5875 + t2838*t6525 + t2786*t6532)*var2[2] - 0.5*(t6021 + t6030 + t5370*t6525 + t4654*t6532)*var2[3] - 0.5*(t6122 + t6124 + t4022*t6525 + t3472*t6532)*var2[4] - 0.5*(0.241*t1960*t2426 + 0.241*t1872*t2460 + t2506*t6525 + t2584*t6532)*var2[5] - 0.5*(0.241*t1424*t1872 + 0.241*t1357*t1960 + t1478*t6525 + 0.035165*t404*t6532)*var2[15] - 0.5*(0.241*t1845*t1872 + 0.241*t1823*t1960 + t1872*t6525 + t1960*t6532)*var2[16] - 0.5*t6507*var2[17]);
  p_output1[17]=(-0.5*t646*var2[0] - 0.5*t5417*var2[1] - 0.5*t5795*var2[2] - 0.5*t6009*var2[3] - 0.5*t6120*var2[4] - 0.5*t6179*var2[5] - 0.5*t6319*var2[15] - 0.5*t6507*var2[16])*var2[17];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce2_vec18_plane.hh"

namespace SymFunction
{

void Ce2_vec18_plane_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE