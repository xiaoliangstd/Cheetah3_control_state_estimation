/*
 * Automatically Generated from Mathematica.
 * Fri 21 Dec 2018 15:12:07 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
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


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t370;
  double t196;
  double t558;
  double t680;
  double t458;
  double t687;
  double t661;
  double t767;
  double t958;
  double t1131;
  double t1186;
  double t1231;
  double t1249;
  double t1280;
  double t1638;
  double t1717;
  double t1634;
  double t1909;
  double t2010;
  double t1160;
  double t1168;
  double t1272;
  double t1335;
  double t1353;
  double t1362;
  double t1378;
  double t2311;
  double t2281;
  double t2324;
  double t2346;
  double t2348;
  double t1681;
  double t1712;
  double t1713;
  double t1739;
  double t1740;
  double t1749;
  double t1794;
  double t3073;
  double t2842;
  double t3084;
  double t3150;
  double t3173;
  double t1974;
  double t1981;
  double t2006;
  double t2015;
  double t2017;
  double t2018;
  double t2187;
  double t3953;
  double t3640;
  double t4262;
  double t4275;
  double t4286;
  double t2285;
  double t2295;
  double t2300;
  double t2353;
  double t4914;
  double t4968;
  double t5197;
  double t5350;
  double t2735;
  double t2761;
  double t2766;
  double t5517;
  double t5518;
  double t5524;
  double t2858;
  double t2864;
  double t2972;
  double t3178;
  double t5751;
  double t5772;
  double t5794;
  double t5825;
  double t3214;
  double t3236;
  double t3269;
  double t5843;
  double t5896;
  double t5897;
  double t3724;
  double t3741;
  double t3930;
  double t4306;
  double t6225;
  double t6228;
  double t6230;
  double t6245;
  double t4496;
  double t4515;
  double t4659;
  double t6249;
  double t6251;
  double t6272;
  double t1130;
  double t6759;
  double t6907;
  double t6816;
  double t6822;
  double t6824;
  double t6924;
  double t6933;
  double t6961;
  double t7020;
  double t7155;
  double t7580;
  double t7614;
  double t7631;
  double t7634;
  double t7209;
  double t7237;
  double t7281;
  double t7640;
  double t7738;
  double t7742;
  double t7789;
  double t7921;
  double t7928;
  double t7942;
  double t7956;
  double t7863;
  double t7864;
  double t7918;
  double t8911;
  double t8769;
  double t8841;
  double t8854;
  double t8859;
  double t8863;
  double t9099;
  double t9138;
  double t9149;
  double t8900;
  double t8918;
  double t8921;
  double t8926;
  double t8946;
  double t9319;
  double t9324;
  double t9429;
  double t8988;
  double t9015;
  double t9022;
  double t9023;
  double t9037;
  double t9721;
  double t9728;
  double t9782;
  double t9083;
  double t9174;
  double t5271;
  double t5435;
  double t5464;
  double t5533;
  double t5536;
  double t5546;
  double t9287;
  double t9297;
  double t9301;
  double t10216;
  double t10220;
  double t10236;
  double t9317;
  double t9447;
  double t5819;
  double t5832;
  double t5835;
  double t5906;
  double t5917;
  double t5921;
  double t9529;
  double t9535;
  double t9567;
  double t10435;
  double t10452;
  double t10479;
  double t9718;
  double t9800;
  double t6234;
  double t6246;
  double t6248;
  double t6323;
  double t6329;
  double t6330;
  double t9981;
  double t10003;
  double t10007;
  double t10813;
  double t10814;
  double t10866;
  double t8834;
  double t11092;
  double t11102;
  double t11117;
  double t11140;
  double t11144;
  double t11169;
  double t11171;
  double t11175;
  double t11159;
  double t11182;
  double t7952;
  double t7958;
  double t7979;
  double t11215;
  double t11218;
  double t11219;
  double t8012;
  double t8034;
  double t8046;
  double t11243;
  double t11249;
  double t11255;
  double t11325;
  double t11326;
  double t11327;
  double t11362;
  double t11367;
  double t11370;
  double t11357;
  double t11371;
  double t11402;
  double t11411;
  double t11418;
  double t11608;
  double t11636;
  double t11647;
  double t11463;
  double t11480;
  double t11484;
  double t11486;
  double t11488;
  double t11781;
  double t11796;
  double t11818;
  double t11543;
  double t11550;
  double t11554;
  double t11556;
  double t11559;
  double t11932;
  double t11967;
  double t11973;
  double t12490;
  double t12501;
  double t12503;
  double t12506;
  double t12517;
  double t12625;
  double t12628;
  double t12639;
  double t12837;
  double t12839;
  double t12900;
  double t12827;
  double t12924;
  double t12925;
  double t12926;
  double t12939;
  double t12974;
  double t12983;
  double t12984;
  double t13109;
  double t13110;
  double t13128;
  double t13137;
  double t13141;
  double t13144;
  double t13154;
  double t13218;
  double t13222;
  double t13234;
  double t13250;
  double t13355;
  double t13357;
  double t13359;
  double t13287;
  double t13448;
  double t13453;
  double t13454;
  double t13464;
  double t13480;
  double t13481;
  double t13643;
  double t13645;
  double t13648;
  double t13652;
  double t13666;
  double t13728;
  double t13729;
  double t13730;
  double t13797;
  double t13799;
  double t13806;
  double t13743;
  double t13755;
  double t13844;
  double t13847;
  double t13850;
  double t13854;
  double t13858;
  double t13871;
  double t13873;
  double t13893;
  double t13999;
  double t14004;
  double t13996;
  double t14010;
  double t14020;
  double t14022;
  double t14024;
  double t14065;
  double t14066;
  double t14068;
  double t14118;
  double t14127;
  double t14128;
  double t14078;
  double t14085;
  double t14184;
  double t14191;
  double t14195;
  double t14197;
  double t14216;
  double t14218;
  double t14279;
  double t14280;
  double t14281;
  double t14284;
  double t14287;
  double t14304;
  double t14305;
  double t14307;
  double t14338;
  double t14339;
  double t14340;
  double t14311;
  double t14323;
  t370 = Sin(var1[3]);
  t196 = Cos(var1[4]);
  t558 = Cos(var1[5]);
  t680 = Sin(var1[4]);
  t458 = Cos(var1[3]);
  t687 = Sin(var1[5]);
  t661 = t458*t558;
  t767 = -1.*t370*t680*t687;
  t958 = t661 + t767;
  t1131 = Cos(var1[9]);
  t1186 = t558*t370*t680;
  t1231 = t458*t687;
  t1249 = t1186 + t1231;
  t1280 = Sin(var1[9]);
  t1638 = Cos(var1[12]);
  t1717 = Sin(var1[12]);
  t1634 = 0.194401*t196*t370;
  t1909 = Cos(var1[15]);
  t2010 = Sin(var1[15]);
  t1160 = -1.*t1131;
  t1168 = 1. + t1160;
  t1272 = 0.081715*t1168*t1249;
  t1335 = -0.081715*t1280*t958;
  t1353 = t1131*t1249;
  t1362 = t1280*t958;
  t1378 = t1353 + t1362;
  t2311 = Sin(var1[10]);
  t2281 = Cos(var1[10]);
  t2324 = -1.*t1280*t1249;
  t2346 = t1131*t958;
  t2348 = t2324 + t2346;
  t1681 = -1.*t1638;
  t1712 = 1. + t1681;
  t1713 = -0.081715*t1712*t1249;
  t1739 = -0.081715*t1717*t958;
  t1740 = t1638*t1249;
  t1749 = -1.*t1717*t958;
  t1794 = t1740 + t1749;
  t3073 = Sin(var1[13]);
  t2842 = Cos(var1[13]);
  t3084 = t1717*t1249;
  t3150 = t1638*t958;
  t3173 = t3084 + t3150;
  t1974 = -1.*t1909;
  t1981 = 1. + t1974;
  t2006 = 0.081715*t1981*t1249;
  t2015 = -0.081715*t2010*t958;
  t2017 = t1909*t1249;
  t2018 = t2010*t958;
  t2187 = t2017 + t2018;
  t3953 = Sin(var1[16]);
  t3640 = Cos(var1[16]);
  t4262 = -1.*t2010*t1249;
  t4275 = t1909*t958;
  t4286 = t4262 + t4275;
  t2285 = -1.*t2281;
  t2295 = 1. + t2285;
  t2300 = -0.242889*t2295*t196*t370;
  t2353 = 0.242889*t2311*t2348;
  t4914 = Cos(var1[11]);
  t4968 = -1.*t4914;
  t5197 = 1. + t4968;
  t5350 = Sin(var1[11]);
  t2735 = -1.*t2281*t196*t370;
  t2761 = -1.*t2311*t2348;
  t2766 = t2735 + t2761;
  t5517 = -1.*t196*t2311*t370;
  t5518 = t2281*t2348;
  t5524 = t5517 + t5518;
  t2858 = -1.*t2842;
  t2864 = 1. + t2858;
  t2972 = 0.194401*t2864*t196*t370;
  t3178 = -0.194401*t3073*t3173;
  t5751 = Cos(var1[14]);
  t5772 = -1.*t5751;
  t5794 = 1. + t5772;
  t5825 = Sin(var1[14]);
  t3214 = -1.*t2842*t196*t370;
  t3236 = -1.*t3073*t3173;
  t3269 = t3214 + t3236;
  t5843 = -1.*t196*t3073*t370;
  t5896 = t2842*t3173;
  t5897 = t5843 + t5896;
  t3724 = -1.*t3640;
  t3741 = 1. + t3724;
  t3930 = 0.194401*t3741*t196*t370;
  t4306 = -0.194401*t3953*t4286;
  t6225 = Cos(var1[17]);
  t6228 = -1.*t6225;
  t6230 = 1. + t6228;
  t6245 = Sin(var1[17]);
  t4496 = -1.*t3640*t196*t370;
  t4515 = -1.*t3953*t4286;
  t4659 = t4496 + t4515;
  t6249 = -1.*t196*t3953*t370;
  t6251 = t3640*t4286;
  t6272 = t6249 + t6251;
  t1130 = -0.242889*t196*t370;
  t6759 = Cos(var1[6]);
  t6907 = Sin(var1[6]);
  t6816 = -1.*t6759;
  t6822 = 1. + t6816;
  t6824 = -0.081715*t6822*t1249;
  t6924 = -0.081715*t958*t6907;
  t6933 = t6759*t1249;
  t6961 = -1.*t958*t6907;
  t7020 = t6933 + t6961;
  t7155 = Cos(var1[7]);
  t7580 = t6759*t958;
  t7614 = t1249*t6907;
  t7631 = t7580 + t7614;
  t7634 = Sin(var1[7]);
  t7209 = -1.*t7155;
  t7237 = 1. + t7209;
  t7281 = -0.242889*t196*t7237*t370;
  t7640 = 0.242889*t7631*t7634;
  t7738 = -1.*t196*t7155*t370;
  t7742 = -1.*t7631*t7634;
  t7789 = t7738 + t7742;
  t7921 = Cos(var1[8]);
  t7928 = -1.*t7921;
  t7942 = 1. + t7928;
  t7956 = Sin(var1[8]);
  t7863 = t7155*t7631;
  t7864 = -1.*t196*t370*t7634;
  t7918 = t7863 + t7864;
  t8911 = 0.194401*t458*t680;
  t8769 = -0.081715*t1168*t458*t196*t558;
  t8841 = -0.081715*t458*t196*t1280*t687;
  t8854 = -1.*t1131*t458*t196*t558;
  t8859 = t458*t196*t1280*t687;
  t8863 = t8854 + t8859;
  t9099 = t458*t196*t558*t1280;
  t9138 = t1131*t458*t196*t687;
  t9149 = t9099 + t9138;
  t8900 = 0.081715*t1712*t458*t196*t558;
  t8918 = -0.081715*t458*t196*t1717*t687;
  t8921 = -1.*t1638*t458*t196*t558;
  t8926 = -1.*t458*t196*t1717*t687;
  t8946 = t8921 + t8926;
  t9319 = -1.*t458*t196*t558*t1717;
  t9324 = t1638*t458*t196*t687;
  t9429 = t9319 + t9324;
  t8988 = -0.081715*t1981*t458*t196*t558;
  t9015 = -0.081715*t458*t196*t2010*t687;
  t9022 = -1.*t1909*t458*t196*t558;
  t9023 = t458*t196*t2010*t687;
  t9037 = t9022 + t9023;
  t9721 = t458*t196*t558*t2010;
  t9728 = t1909*t458*t196*t687;
  t9782 = t9721 + t9728;
  t9083 = -0.242889*t2295*t458*t680;
  t9174 = 0.242889*t2311*t9149;
  t5271 = -0.20833*t5197;
  t5435 = 0.100689*t5350;
  t5464 = t5271 + t5435;
  t5533 = 0.100689*t5197;
  t5536 = 0.20833*t5350;
  t5546 = t5533 + t5536;
  t9287 = -1.*t2281*t458*t680;
  t9297 = -1.*t2311*t9149;
  t9301 = t9287 + t9297;
  t10216 = -1.*t458*t2311*t680;
  t10220 = t2281*t9149;
  t10236 = t10216 + t10220;
  t9317 = 0.194401*t2864*t458*t680;
  t9447 = -0.194401*t3073*t9429;
  t5819 = -0.20833*t5794;
  t5832 = -0.336601*t5825;
  t5835 = 0. + t5819 + t5832;
  t5906 = -0.336601*t5794;
  t5917 = 0.20833*t5825;
  t5921 = 0. + t5906 + t5917;
  t9529 = -1.*t2842*t458*t680;
  t9535 = -1.*t3073*t9429;
  t9567 = t9529 + t9535;
  t10435 = -1.*t458*t3073*t680;
  t10452 = t2842*t9429;
  t10479 = t10435 + t10452;
  t9718 = 0.194401*t3741*t458*t680;
  t9800 = -0.194401*t3953*t9782;
  t6234 = -0.20833*t6230;
  t6246 = -0.336601*t6245;
  t6248 = 0. + t6234 + t6246;
  t6323 = -0.336601*t6230;
  t6329 = 0.20833*t6245;
  t6330 = 0. + t6323 + t6329;
  t9981 = -1.*t3640*t458*t680;
  t10003 = -1.*t3953*t9782;
  t10007 = t9981 + t10003;
  t10813 = -1.*t458*t3953*t680;
  t10814 = t3640*t9782;
  t10866 = t10813 + t10814;
  t8834 = -0.242889*t458*t680;
  t11092 = 0.081715*t458*t196*t558*t6822;
  t11102 = -0.081715*t458*t196*t687*t6907;
  t11117 = -1.*t458*t196*t558*t6759;
  t11140 = -1.*t458*t196*t687*t6907;
  t11144 = t11117 + t11140;
  t11169 = t458*t196*t6759*t687;
  t11171 = -1.*t458*t196*t558*t6907;
  t11175 = t11169 + t11171;
  t11159 = -0.242889*t458*t7237*t680;
  t11182 = 0.242889*t11175*t7634;
  t7952 = -0.20833*t7942;
  t7958 = 0.100689*t7956;
  t7979 = t7952 + t7958;
  t11215 = -1.*t458*t7155*t680;
  t11218 = -1.*t11175*t7634;
  t11219 = t11215 + t11218;
  t8012 = 0.100689*t7942;
  t8034 = 0.20833*t7956;
  t8046 = t8012 + t8034;
  t11243 = t7155*t11175;
  t11249 = -1.*t458*t680*t7634;
  t11255 = t11243 + t11249;
  t11325 = t458*t558*t680;
  t11326 = -1.*t370*t687;
  t11327 = t11325 + t11326;
  t11362 = t558*t370;
  t11367 = t458*t680*t687;
  t11370 = t11362 + t11367;
  t11357 = -0.081715*t1280*t11327;
  t11371 = 0.081715*t1168*t11370;
  t11402 = t1280*t11327;
  t11411 = t1131*t11370;
  t11418 = t11402 + t11411;
  t11608 = t1131*t11327;
  t11636 = -1.*t1280*t11370;
  t11647 = t11608 + t11636;
  t11463 = -0.081715*t1717*t11327;
  t11480 = -0.081715*t1712*t11370;
  t11484 = -1.*t1717*t11327;
  t11486 = t1638*t11370;
  t11488 = t11484 + t11486;
  t11781 = t1638*t11327;
  t11796 = t1717*t11370;
  t11818 = t11781 + t11796;
  t11543 = -0.081715*t2010*t11327;
  t11550 = 0.081715*t1981*t11370;
  t11554 = t2010*t11327;
  t11556 = t1909*t11370;
  t11559 = t11554 + t11556;
  t11932 = t1909*t11327;
  t11967 = -1.*t2010*t11370;
  t11973 = t11932 + t11967;
  t12490 = -0.081715*t6822*t11370;
  t12501 = -0.081715*t11327*t6907;
  t12503 = t6759*t11370;
  t12506 = -1.*t11327*t6907;
  t12517 = t12503 + t12506;
  t12625 = t6759*t11327;
  t12628 = t11370*t6907;
  t12639 = t12625 + t12628;
  t12837 = -1.*t458*t558*t680;
  t12839 = t370*t687;
  t12900 = t12837 + t12839;
  t12827 = -0.081715*t6759*t11370;
  t12924 = -0.081715*t12900*t6907;
  t12925 = -1.*t6759*t11370;
  t12926 = -1.*t12900*t6907;
  t12939 = t12925 + t12926;
  t12974 = t6759*t12900;
  t12983 = -1.*t11370*t6907;
  t12984 = t12974 + t12983;
  t13109 = t12900*t6907;
  t13110 = t12503 + t13109;
  t13128 = 0.242889*t7155*t13110;
  t13137 = 0.242889*t458*t196*t7634;
  t13141 = -1.*t7155*t13110;
  t13144 = -1.*t458*t196*t7634;
  t13154 = t13141 + t13144;
  t13218 = t458*t196*t7155;
  t13222 = -1.*t13110*t7634;
  t13234 = t13218 + t13222;
  t13250 = t7921*t13234;
  t13355 = t7155*t13110;
  t13357 = t458*t196*t7634;
  t13359 = t13355 + t13357;
  t13287 = -1.*t13234*t7956;
  t13448 = 0.081715*t1280*t12900;
  t13453 = -0.081715*t1131*t11370;
  t13454 = -1.*t1280*t12900;
  t13464 = t13454 + t11411;
  t13480 = -1.*t1131*t12900;
  t13481 = t13480 + t11636;
  t13643 = 0.242889*t458*t196*t2311;
  t13645 = 0.242889*t2281*t13464;
  t13648 = -1.*t458*t196*t2311;
  t13652 = -1.*t2281*t13464;
  t13666 = t13648 + t13652;
  t13728 = t2281*t458*t196;
  t13729 = -1.*t2311*t13464;
  t13730 = t13728 + t13729;
  t13797 = t458*t196*t2311;
  t13799 = t2281*t13464;
  t13806 = t13797 + t13799;
  t13743 = t4914*t13730;
  t13755 = -1.*t5350*t13730;
  t13844 = -0.081715*t1717*t12900;
  t13847 = -0.081715*t1638*t11370;
  t13850 = -1.*t1717*t12900;
  t13854 = -1.*t1638*t11370;
  t13858 = t13850 + t13854;
  t13871 = t1638*t12900;
  t13873 = -1.*t1717*t11370;
  t13893 = t13871 + t13873;
  t13999 = t1717*t12900;
  t14004 = t13999 + t11486;
  t13996 = -0.194401*t458*t196*t3073;
  t14010 = -0.194401*t2842*t14004;
  t14020 = -1.*t458*t196*t3073;
  t14022 = -1.*t2842*t14004;
  t14024 = t14020 + t14022;
  t14065 = t2842*t458*t196;
  t14066 = -1.*t3073*t14004;
  t14068 = t14065 + t14066;
  t14118 = t458*t196*t3073;
  t14127 = t2842*t14004;
  t14128 = t14118 + t14127;
  t14078 = t5751*t14068;
  t14085 = -1.*t5825*t14068;
  t14184 = 0.081715*t2010*t12900;
  t14191 = -0.081715*t1909*t11370;
  t14195 = -1.*t2010*t12900;
  t14197 = t14195 + t11556;
  t14216 = -1.*t1909*t12900;
  t14218 = t14216 + t11967;
  t14279 = -0.194401*t458*t196*t3953;
  t14280 = -0.194401*t3640*t14197;
  t14281 = -1.*t458*t196*t3953;
  t14284 = -1.*t3640*t14197;
  t14287 = t14281 + t14284;
  t14304 = t3640*t458*t196;
  t14305 = -1.*t3953*t14197;
  t14307 = t14304 + t14305;
  t14338 = t458*t196*t3953;
  t14339 = t3640*t14197;
  t14340 = t14338 + t14339;
  t14311 = t6225*t14307;
  t14323 = -1.*t6245*t14307;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=-230.13279;
  p_output1[3]=-10.741950000000001*(t1130 + t1272 + t1335 + 0.061715*t1378) - 2.36421*(t1634 + t1713 + t1739 - 0.061715*t1794) - 10.741950000000001*(t1634 + t2006 + t2015 + 0.061715*t2187) - 14.97987*(t1272 + t1335 + 0.13757*t1378 + t2300 + t2353 + 0.202889*t2766 + 0.04*(-1.*t2281*t2348 + t196*t2311*t370)) - 14.97987*(t1713 + t1739 - 0.13528*t1794 + t2972 + t3178 - 0.234401*t3269 + 0.04*(-1.*t2842*t3173 + t196*t3073*t370)) - 14.97987*(t2006 + t2015 + 0.13757*t2187 + t3930 + 0.04*(t196*t370*t3953 - 1.*t3640*t4286) + t4306 - 0.234401*t4659) - 2.36421*(t1272 + t1335 + 0.11688*t1378 + t2300 + t2353 + t5464*t5524 - 0.36833*(t2766*t5350 + t4914*t5524) + 0.080689*(t2766*t4914 - 1.*t5350*t5524) + t2766*t5546) - 2.36421*(t1713 + t1739 - 0.11459*t1794 + t2972 + t3178 + t5835*t5897 - 0.36833*(t3269*t5825 + t5751*t5897) - 0.356601*(t3269*t5751 - 1.*t5825*t5897) + t3269*t5921) - 2.36421*(t2006 + t2015 + 0.11688*t2187 + t3930 + t4306 + t6248*t6272 - 0.36833*(t4659*t6245 + t6225*t6272) - 0.356601*(t4659*t6225 - 1.*t6245*t6272) + t4659*t6330) - 2.36421*(t1130 + t6824 + t6924 - 0.061715*t7020) - 14.97987*(t6824 + t6924 - 0.13528*t7020 + t7281 + 0.04*(-1.*t7155*t7631 + t196*t370*t7634) + t7640 + 0.202889*t7789) - 2.36421*(t6824 + t6924 - 0.11459*t7020 + t7281 + t7640 - 0.36833*(t7918*t7921 + t7789*t7956) + 0.080689*(t7789*t7921 - 1.*t7918*t7956) + t7918*t7979 + t7789*t8046) - 134.54415*(-0.043794*t196*t370 + 0.03*t958);
  p_output1[4]=-134.54415*(-0.043794*t458*t680 + 0.03*t196*t458*t687) - 14.97987*(t11092 + t11102 - 0.13528*t11144 + t11159 + t11182 + 0.202889*t11219 + 0.04*(-1.*t11175*t7155 + t458*t680*t7634)) - 2.36421*(t11092 + t11102 - 0.11459*t11144 + t11159 + t11182 - 0.36833*(t11255*t7921 + t11219*t7956) + 0.080689*(t11219*t7921 - 1.*t11255*t7956) + t11255*t7979 + t11219*t8046) - 2.36421*(t11092 + t11102 - 0.061715*t11144 + t8834) - 10.741950000000001*(t8769 + t8834 + t8841 + 0.061715*t8863) - 2.36421*(t8900 + t8911 + t8918 - 0.061715*t8946) - 10.741950000000001*(t8911 + t8988 + t9015 + 0.061715*t9037) - 14.97987*(t8769 + t8841 + 0.13757*t8863 + t9083 + 0.04*(t2311*t458*t680 - 1.*t2281*t9149) + t9174 + 0.202889*t9301) - 2.36421*(t10236*t5464 + t8769 + t8841 + 0.11688*t8863 + t9083 + t9174 + t5546*t9301 + 0.080689*(-1.*t10236*t5350 + t4914*t9301) - 0.36833*(t10236*t4914 + t5350*t9301)) - 14.97987*(t8900 + t8918 - 0.13528*t8946 + t9317 + 0.04*(t3073*t458*t680 - 1.*t2842*t9429) + t9447 - 0.234401*t9567) - 2.36421*(t10479*t5835 + t8900 + t8918 - 0.11459*t8946 + t9317 + t9447 + t5921*t9567 - 0.356601*(-1.*t10479*t5825 + t5751*t9567) - 0.36833*(t10479*t5751 + t5825*t9567)) - 2.36421*(-0.36833*(t10866*t6225 + t10007*t6245) - 0.356601*(t10007*t6225 - 1.*t10866*t6245) + t10866*t6248 + t10007*t6330 + t8988 + t9015 + 0.11688*t9037 + t9718 + t9800) - 14.97987*(-0.234401*t10007 + t8988 + t9015 + 0.13757*t9037 + t9718 + 0.04*(t3953*t458*t680 - 1.*t3640*t9782) + t9800);
  p_output1[5]=-4.0363245*t11327 - 10.741950000000001*(t11357 + t11371 + 0.061715*t11418) - 2.36421*(t11463 + t11480 - 0.061715*t11488) - 10.741950000000001*(t11543 + t11550 + 0.061715*t11559) - 2.36421*(t12490 + t12501 - 0.061715*t12517) - 14.97987*(t11357 + t11371 + 0.13757*t11418 - 0.04*t11647*t2281 + 0.04*t11647*t2311) - 14.97987*(t11463 + t11480 - 0.13528*t11488 - 0.04*t11818*t2842 + 0.04*t11818*t3073) - 14.97987*(t11543 + t11550 + 0.13757*t11559 - 0.04*t11973*t3640 + 0.04*t11973*t3953) - 2.36421*(t11357 + t11371 + 0.11688*t11418 + 0.242889*t11647*t2311 + 0.080689*(-1.*t11647*t2311*t4914 - 1.*t11647*t2281*t5350) - 0.36833*(t11647*t2281*t4914 - 1.*t11647*t2311*t5350) + t11647*t2281*t5464 - 1.*t11647*t2311*t5546) - 2.36421*(t11463 + t11480 - 0.11459*t11488 - 0.194401*t11818*t3073 - 0.356601*(-1.*t11818*t3073*t5751 - 1.*t11818*t2842*t5825) - 0.36833*(t11818*t2842*t5751 - 1.*t11818*t3073*t5825) + t11818*t2842*t5835 - 1.*t11818*t3073*t5921) - 2.36421*(t11543 + t11550 + 0.11688*t11559 - 0.194401*t11973*t3953 - 0.356601*(-1.*t11973*t3953*t6225 - 1.*t11973*t3640*t6245) - 0.36833*(t11973*t3640*t6225 - 1.*t11973*t3953*t6245) + t11973*t3640*t6248 - 1.*t11973*t3953*t6330) - 14.97987*(t12490 + t12501 - 0.13528*t12517 - 0.04*t12639*t7155 + 0.04*t12639*t7634) - 2.36421*(t12490 + t12501 - 0.11459*t12517 + 0.242889*t12639*t7634 + 0.080689*(-1.*t12639*t7634*t7921 - 1.*t12639*t7155*t7956) - 0.36833*(t12639*t7155*t7921 - 1.*t12639*t7634*t7956) + t12639*t7155*t7979 - 1.*t12639*t7634*t8046);
  p_output1[6]=-2.36421*(t12827 + t12924 - 0.061715*t12939) - 14.97987*(t12827 + t12924 - 0.13528*t12939 - 0.04*t12984*t7155 + 0.04*t12984*t7634) - 2.36421*(t12827 + t12924 - 0.11459*t12939 + 0.242889*t12984*t7634 + 0.080689*(-1.*t12984*t7634*t7921 - 1.*t12984*t7155*t7956) - 0.36833*(t12984*t7155*t7921 - 1.*t12984*t7634*t7956) + t12984*t7155*t7979 - 1.*t12984*t7634*t8046);
  p_output1[7]=-14.97987*(t13128 + t13137 + 0.202889*t13154 + 0.04*(-1.*t196*t458*t7155 + t13110*t7634)) - 2.36421*(t13128 + t13137 + 0.080689*(t13287 + t13154*t7921) - 0.36833*(t13250 + t13154*t7956) + t13234*t7979 + t13154*t8046);
  p_output1[8]=-2.36421*(0.080689*(t13287 - 1.*t13359*t7921) + t13359*(0.100689*t7921 - 0.20833*t7956) - 0.36833*(t13250 - 1.*t13359*t7956) + t13234*(0.20833*t7921 + t7958));
  p_output1[9]=-10.741950000000001*(t13448 + t13453 + 0.061715*t13464) - 14.97987*(t13448 + t13453 + 0.13757*t13464 - 0.04*t13481*t2281 + 0.04*t13481*t2311) - 2.36421*(t13448 + t13453 + 0.11688*t13464 + 0.242889*t13481*t2311 + 0.080689*(-1.*t13481*t2311*t4914 - 1.*t13481*t2281*t5350) - 0.36833*(t13481*t2281*t4914 - 1.*t13481*t2311*t5350) + t13481*t2281*t5464 - 1.*t13481*t2311*t5546);
  p_output1[10]=-14.97987*(t13643 + t13645 + 0.202889*t13666 + 0.04*(t13464*t2311 - 1.*t196*t2281*t458)) - 2.36421*(t13643 + t13645 + 0.080689*(t13755 + t13666*t4914) - 0.36833*(t13743 + t13666*t5350) + t13730*t5464 + t13666*t5546);
  p_output1[11]=-2.36421*(0.080689*(t13755 - 1.*t13806*t4914) + t13806*(0.100689*t4914 - 0.20833*t5350) - 0.36833*(t13743 - 1.*t13806*t5350) + t13730*(0.20833*t4914 + t5435));
  p_output1[12]=-2.36421*(t13844 + t13847 - 0.061715*t13858) - 14.97987*(t13844 + t13847 - 0.13528*t13858 - 0.04*t13893*t2842 + 0.04*t13893*t3073) - 2.36421*(t13844 + t13847 - 0.11459*t13858 - 0.194401*t13893*t3073 - 0.356601*(-1.*t13893*t3073*t5751 - 1.*t13893*t2842*t5825) - 0.36833*(t13893*t2842*t5751 - 1.*t13893*t3073*t5825) + t13893*t2842*t5835 - 1.*t13893*t3073*t5921);
  p_output1[13]=-14.97987*(t13996 + t14010 - 0.234401*t14024 + 0.04*(t14004*t3073 - 1.*t196*t2842*t458)) - 2.36421*(t13996 + t14010 - 0.356601*(t14085 + t14024*t5751) - 0.36833*(t14078 + t14024*t5825) + t14068*t5835 + t14024*t5921);
  p_output1[14]=-2.36421*(-0.356601*(t14085 - 1.*t14128*t5751) + t14128*(-0.336601*t5751 - 0.20833*t5825) - 0.36833*(t14078 - 1.*t14128*t5825) + t14068*(0.20833*t5751 + t5832));
  p_output1[15]=-10.741950000000001*(t14184 + t14191 + 0.061715*t14197) - 14.97987*(t14184 + t14191 + 0.13757*t14197 - 0.04*t14218*t3640 + 0.04*t14218*t3953) - 2.36421*(t14184 + t14191 + 0.11688*t14197 - 0.194401*t14218*t3953 - 0.356601*(-1.*t14218*t3953*t6225 - 1.*t14218*t3640*t6245) - 0.36833*(t14218*t3640*t6225 - 1.*t14218*t3953*t6245) + t14218*t3640*t6248 - 1.*t14218*t3953*t6330);
  p_output1[16]=-14.97987*(t14279 + t14280 - 0.234401*t14287 + 0.04*(t14197*t3953 - 1.*t196*t3640*t458)) - 2.36421*(t14279 + t14280 - 0.356601*(t14323 + t14287*t6225) - 0.36833*(t14311 + t14287*t6245) + t14307*t6248 + t14287*t6330);
  p_output1[17]=-2.36421*(-0.356601*(t14323 - 1.*t14340*t6225) + t14340*(-0.336601*t6225 - 0.20833*t6245) - 0.36833*(t14311 - 1.*t14340*t6245) + t14307*(0.20833*t6225 + t6246));
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

#include "Ge_vec_plane.hh"

namespace SymFunction
{

void Ge_vec_plane_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE