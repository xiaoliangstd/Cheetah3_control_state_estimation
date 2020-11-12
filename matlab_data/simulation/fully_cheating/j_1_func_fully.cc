/*
 * Automatically Generated from Mathematica.
 * Fri 10 May 2019 20:22:35 GMT-04:00
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
static void output1(double *p_output1,const double *var1)
{
  double t218;
  double t144;
  double t202;
  double t168;
  double t241;
  double t214;
  double t253;
  double t286;
  double t327;
  double t377;
  double t408;
  double t454;
  double t453;
  double t443;
  double t452;
  double t464;
  double t472;
  double t481;
  double t488;
  double t497;
  double t551;
  double t552;
  double t511;
  double t325;
  double t645;
  double t648;
  double t649;
  double t666;
  double t667;
  double t669;
  double t608;
  double t675;
  double t677;
  double t679;
  double t681;
  double t694;
  double t700;
  double t523;
  double t530;
  double t746;
  double t756;
  double t757;
  double t760;
  double t774;
  double t777;
  double t789;
  double t806;
  double t808;
  double t813;
  double t864;
  double t867;
  double t874;
  double t877;
  double t891;
  double t892;
  double t906;
  double t872;
  double t908;
  double t913;
  double t917;
  double t925;
  double t927;
  double t930;
  double t935;
  double t938;
  double t830;
  double t834;
  double t842;
  double t939;
  double t944;
  double t947;
  double t949;
  double t960;
  double t969;
  double t975;
  double t1049;
  double t1084;
  double t1094;
  double t1095;
  double t1096;
  double t1098;
  double t1109;
  double t1133;
  double t1144;
  double t1146;
  double t1150;
  double t1158;
  double t1160;
  double t1183;
  double t1184;
  double t1189;
  double t1178;
  double t1180;
  double t1198;
  double t1202;
  double t1203;
  double t1204;
  double t1208;
  double t1282;
  double t1278;
  double t1261;
  double t1265;
  double t1290;
  double t1291;
  double t1295;
  double t1320;
  double t1323;
  double t1356;
  double t1359;
  double t1329;
  double t1254;
  double t1384;
  double t1417;
  double t1419;
  double t1424;
  double t1430;
  double t1432;
  double t1444;
  double t1344;
  double t1347;
  double t1504;
  double t1511;
  double t1513;
  double t1525;
  double t1529;
  double t1540;
  double t1546;
  double t1550;
  double t1558;
  double t1624;
  double t1626;
  double t1630;
  double t1631;
  double t1622;
  double t1635;
  double t1639;
  double t1649;
  double t1650;
  double t1656;
  double t1657;
  double t1660;
  double t1662;
  double t1568;
  double t1576;
  double t1604;
  double t1664;
  double t1670;
  double t1676;
  double t1677;
  double t1680;
  double t1689;
  double t1690;
  double t1722;
  double t1743;
  double t1746;
  double t1747;
  double t1748;
  double t1749;
  double t1750;
  double t1761;
  double t1763;
  double t1768;
  double t1776;
  double t1778;
  double t1779;
  double t1781;
  double t1782;
  double t1783;
  double t1786;
  double t1846;
  double t1848;
  double t1850;
  double t1844;
  double t1855;
  double t1857;
  double t1869;
  double t1870;
  double t1871;
  double t1928;
  double t1937;
  double t1938;
  double t1927;
  double t1941;
  double t1949;
  double t1957;
  double t1959;
  double t1960;
  double t1997;
  double t1999;
  double t2002;
  double t1991;
  double t2003;
  double t2007;
  double t2011;
  double t2015;
  double t2018;
  double t1020;
  double t1024;
  double t1033;
  double t2025;
  double t2029;
  double t2031;
  double t2045;
  double t2046;
  double t2051;
  double t1113;
  double t1048;
  double t1056;
  double t1064;
  double t1081;
  double t1915;
  double t1920;
  double t1924;
  double t1838;
  double t1841;
  double t1842;
  double t1214;
  double t1225;
  double t1226;
  double t2117;
  double t2120;
  double t2121;
  double t2114;
  double t2122;
  double t2125;
  double t2137;
  double t2138;
  double t2145;
  double t2185;
  double t2186;
  double t2187;
  double t2184;
  double t2188;
  double t2189;
  double t2199;
  double t2203;
  double t2205;
  double t2254;
  double t2257;
  double t2262;
  double t2252;
  double t2267;
  double t2268;
  double t2273;
  double t2274;
  double t2277;
  double t1693;
  double t1695;
  double t1699;
  double t2283;
  double t2284;
  double t2285;
  double t2294;
  double t2301;
  double t2304;
  double t1754;
  double t1721;
  double t1723;
  double t1728;
  double t1739;
  double t2174;
  double t2175;
  double t2176;
  double t2103;
  double t2105;
  double t2111;
  double t1803;
  double t1804;
  double t1805;
  double t2354;
  double t2356;
  double t2360;
  double t2370;
  double t2375;
  double t2376;
  double t2368;
  double t2378;
  double t2379;
  double t2388;
  double t2398;
  double t2399;
  double t2448;
  double t2454;
  double t2455;
  double t2447;
  double t2460;
  double t2463;
  double t2468;
  double t2471;
  double t2472;
  double t2441;
  double t2364;
  double t2365;
  double t2527;
  double t2529;
  double t2531;
  double t2526;
  double t2533;
  double t2534;
  double t2537;
  double t2539;
  double t2540;
  double t2598;
  double t2601;
  double t2604;
  double t2597;
  double t2613;
  double t2615;
  double t2620;
  double t2624;
  double t2625;
  double t2591;
  double t2519;
  double t2521;
  double t2683;
  double t2684;
  double t2688;
  double t2738;
  double t2739;
  double t2764;
  double t2766;
  double t2810;
  double t2812;
  double t2813;
  double t2787;
  double t2793;
  double t2798;
  double t2723;
  double t2730;
  double t2734;
  double t2676;
  double t2678;
  double t2857;
  double t2861;
  double t2859;
  double t2862;
  double t2864;
  double t2869;
  double t2872;
  double t2873;
  double t2914;
  double t2921;
  double t2924;
  double t2915;
  double t2927;
  double t2932;
  double t2934;
  double t2935;
  double t2938;
  double t2974;
  double t2978;
  double t2983;
  double t2986;
  double t2993;
  double t2996;
  double t3000;
  double t3006;
  double t3007;
  double t3009;
  double t3055;
  double t3056;
  double t3058;
  double t3062;
  double t3098;
  double t3102;
  double t3106;
  double t3108;
  double t3154;
  double t3156;
  double t3160;
  double t3169;
  double t3173;
  double t3174;
  double t3220;
  double t3226;
  double t3297;
  double t3298;
  double t3341;
  double t3357;
  double t3383;
  double t3384;
  double t3387;
  double t3375;
  double t3377;
  double t3381;
  double t3275;
  double t3279;
  double t3288;
  double t3205;
  double t3214;
  double t3215;
  double t3430;
  double t3429;
  double t3431;
  double t3433;
  double t3443;
  double t3444;
  double t3446;
  double t3509;
  double t3510;
  double t3511;
  double t3504;
  double t3513;
  double t3515;
  double t3518;
  double t3519;
  double t3520;
  double t3556;
  double t3560;
  double t3561;
  double t3565;
  double t3572;
  double t3575;
  double t3580;
  double t3583;
  double t3584;
  double t3586;
  double t3609;
  double t3611;
  double t3612;
  double t3614;
  double t3647;
  double t3651;
  double t3652;
  double t3654;
  double t3679;
  double t3681;
  double t3684;
  double t3692;
  double t3696;
  double t3697;
  t218 = Cos(var1[3]);
  t144 = Cos(var1[5]);
  t202 = Sin(var1[4]);
  t168 = Sin(var1[3]);
  t241 = Sin(var1[5]);
  t214 = -1.*t144*t168*t202;
  t253 = t218*t241;
  t286 = t214 + t253;
  t327 = t218*t144*t202;
  t377 = t168*t241;
  t408 = t327 + t377;
  t454 = Cos(var1[10]);
  t453 = Cos(var1[9]);
  t443 = Sin(var1[10]);
  t452 = t443*t286;
  t464 = t453*t454*t408;
  t472 = t452 + t464;
  t481 = t454*t286;
  t488 = -1.*t453*t443*t408;
  t497 = t481 + t488;
  t551 = Cos(var1[11]);
  t552 = 0. + t551;
  t511 = Sin(var1[11]);
  t325 = Sin(var1[9]);
  t645 = -1.*t144*t168;
  t648 = t218*t202*t241;
  t649 = t645 + t648;
  t666 = -1.*t218*t144;
  t667 = -1.*t168*t202*t241;
  t669 = t666 + t667;
  t608 = 0. + t511;
  t675 = -1.*t453*t443*t649;
  t677 = t454*t669;
  t679 = t675 + t677;
  t681 = t453*t454*t649;
  t694 = t443*t669;
  t700 = t681 + t694;
  t523 = -1.*t511;
  t530 = 0. + t523;
  t746 = Cos(var1[4]);
  t756 = -1.*t453*t218*t746*t443;
  t757 = -1.*t454*t746*t168;
  t760 = t756 + t757;
  t774 = t453*t454*t218*t746;
  t777 = -1.*t746*t443*t168;
  t789 = t774 + t777;
  t806 = t608*t760;
  t808 = t552*t789;
  t813 = t806 + t808;
  t864 = t218*t746;
  t867 = 0. + t864;
  t874 = t453*t746*t168;
  t877 = -1.*t325;
  t891 = 0. + t877;
  t892 = -1.*t891*t202;
  t906 = 0. + t874 + t892;
  t872 = t867*t443;
  t908 = t454*t906;
  t913 = 0. + t872 + t908;
  t917 = t530*t913;
  t925 = t454*t867;
  t927 = -1.*t443*t906;
  t930 = 0. + t925 + t927;
  t935 = t552*t930;
  t938 = 0. + t917 + t935;
  t830 = t552*t760;
  t834 = t530*t789;
  t842 = t830 + t834;
  t939 = Power(t938,2);
  t944 = t552*t913;
  t947 = t608*t930;
  t949 = 0. + t944 + t947;
  t960 = Power(t949,2);
  t969 = t939 + t960;
  t975 = 1/t969;
  t1049 = 0. + t453;
  t1084 = -1.*t746*t325*t168;
  t1094 = t1049*t202;
  t1095 = 0. + t1084 + t1094;
  t1096 = Power(t1095,2);
  t1098 = t1096 + t939 + t960;
  t1109 = 1/t1098;
  t1133 = t1049*t746*t144;
  t1144 = t144*t168*t202;
  t1146 = -1.*t218*t241;
  t1150 = t1144 + t1146;
  t1158 = t325*t1150;
  t1160 = 0. + t1133 + t1158;
  t1183 = t218*t144;
  t1184 = t168*t202*t241;
  t1189 = t1183 + t1184;
  t1178 = Power(t1160,2);
  t1180 = t1049*t746*t241;
  t1198 = t325*t1189;
  t1202 = 0. + t1180 + t1198;
  t1203 = Power(t1202,2);
  t1204 = t1178 + t1203;
  t1208 = 1/t1204;
  t1282 = Cos(var1[13]);
  t1278 = Cos(var1[12]);
  t1261 = Sin(var1[13]);
  t1265 = t1261*t286;
  t1290 = t1278*t1282*t408;
  t1291 = t1265 + t1290;
  t1295 = t1282*t286;
  t1320 = -1.*t1278*t1261*t408;
  t1323 = t1295 + t1320;
  t1356 = Cos(var1[14]);
  t1359 = 0. + t1356;
  t1329 = Sin(var1[14]);
  t1254 = Sin(var1[12]);
  t1384 = 0. + t1329;
  t1417 = -1.*t1278*t1261*t649;
  t1419 = t1282*t669;
  t1424 = t1417 + t1419;
  t1430 = t1278*t1282*t649;
  t1432 = t1261*t669;
  t1444 = t1430 + t1432;
  t1344 = -1.*t1329;
  t1347 = 0. + t1344;
  t1504 = -1.*t1278*t218*t746*t1261;
  t1511 = -1.*t1282*t746*t168;
  t1513 = t1504 + t1511;
  t1525 = t1278*t1282*t218*t746;
  t1529 = -1.*t746*t1261*t168;
  t1540 = t1525 + t1529;
  t1546 = t1384*t1513;
  t1550 = t1359*t1540;
  t1558 = t1546 + t1550;
  t1624 = t1278*t746*t168;
  t1626 = 0. + t1254;
  t1630 = -1.*t1626*t202;
  t1631 = 0. + t1624 + t1630;
  t1622 = t867*t1261;
  t1635 = t1282*t1631;
  t1639 = 0. + t1622 + t1635;
  t1649 = t1347*t1639;
  t1650 = t1282*t867;
  t1656 = -1.*t1261*t1631;
  t1657 = 0. + t1650 + t1656;
  t1660 = t1359*t1657;
  t1662 = 0. + t1649 + t1660;
  t1568 = t1359*t1513;
  t1576 = t1347*t1540;
  t1604 = t1568 + t1576;
  t1664 = Power(t1662,2);
  t1670 = t1359*t1639;
  t1676 = t1384*t1657;
  t1677 = 0. + t1670 + t1676;
  t1680 = Power(t1677,2);
  t1689 = t1664 + t1680;
  t1690 = 1/t1689;
  t1722 = 0. + t1278;
  t1743 = t746*t1254*t168;
  t1746 = t1722*t202;
  t1747 = 0. + t1743 + t1746;
  t1748 = Power(t1747,2);
  t1749 = t1748 + t1664 + t1680;
  t1750 = 1/t1749;
  t1761 = t1722*t746*t144;
  t1763 = -1.*t1254*t1150;
  t1768 = 0. + t1761 + t1763;
  t1776 = Power(t1768,2);
  t1778 = t1722*t746*t241;
  t1779 = -1.*t1254*t1189;
  t1781 = 0. + t1778 + t1779;
  t1782 = Power(t1781,2);
  t1783 = t1776 + t1782;
  t1786 = 1/t1783;
  t1846 = t453*t746*t144*t168;
  t1848 = -1.*t144*t891*t202;
  t1850 = t1846 + t1848;
  t1844 = t218*t746*t144*t443;
  t1855 = t454*t1850;
  t1857 = t1844 + t1855;
  t1869 = t454*t218*t746*t144;
  t1870 = -1.*t443*t1850;
  t1871 = t1869 + t1870;
  t1928 = t453*t746*t168*t241;
  t1937 = -1.*t891*t202*t241;
  t1938 = t1928 + t1937;
  t1927 = t218*t746*t443*t241;
  t1941 = t454*t1938;
  t1949 = t1927 + t1941;
  t1957 = t454*t218*t746*t241;
  t1959 = -1.*t443*t1938;
  t1960 = t1957 + t1959;
  t1997 = -1.*t746*t891;
  t1999 = -1.*t453*t168*t202;
  t2002 = t1997 + t1999;
  t1991 = -1.*t218*t443*t202;
  t2003 = t454*t2002;
  t2007 = t1991 + t2003;
  t2011 = -1.*t454*t218*t202;
  t2015 = -1.*t443*t2002;
  t2018 = t2011 + t2015;
  t1020 = -1.*t552*t913;
  t1024 = -1.*t608*t930;
  t1033 = 0. + t1020 + t1024;
  t2025 = t530*t2007;
  t2029 = t552*t2018;
  t2031 = t2025 + t2029;
  t2045 = t552*t2007;
  t2046 = t608*t2018;
  t2051 = t2045 + t2046;
  t1113 = Sqrt(t969);
  t1048 = t746*t325*t168;
  t1056 = -1.*t1049*t202;
  t1064 = 0. + t1048 + t1056;
  t1081 = 1/Sqrt(t969);
  t1915 = t746*t325*t168*t241;
  t1920 = -1.*t1049*t202*t241;
  t1924 = t1915 + t1920;
  t1838 = t746*t144*t325*t168;
  t1841 = -1.*t1049*t144*t202;
  t1842 = t1838 + t1841;
  t1214 = -1.*t1049*t746*t241;
  t1225 = -1.*t325*t1189;
  t1226 = 0. + t1214 + t1225;
  t2117 = t1278*t746*t144*t168;
  t2120 = -1.*t144*t1626*t202;
  t2121 = t2117 + t2120;
  t2114 = t218*t746*t144*t1261;
  t2122 = t1282*t2121;
  t2125 = t2114 + t2122;
  t2137 = t1282*t218*t746*t144;
  t2138 = -1.*t1261*t2121;
  t2145 = t2137 + t2138;
  t2185 = t1278*t746*t168*t241;
  t2186 = -1.*t1626*t202*t241;
  t2187 = t2185 + t2186;
  t2184 = t218*t746*t1261*t241;
  t2188 = t1282*t2187;
  t2189 = t2184 + t2188;
  t2199 = t1282*t218*t746*t241;
  t2203 = -1.*t1261*t2187;
  t2205 = t2199 + t2203;
  t2254 = -1.*t746*t1626;
  t2257 = -1.*t1278*t168*t202;
  t2262 = t2254 + t2257;
  t2252 = -1.*t218*t1261*t202;
  t2267 = t1282*t2262;
  t2268 = t2252 + t2267;
  t2273 = -1.*t1282*t218*t202;
  t2274 = -1.*t1261*t2262;
  t2277 = t2273 + t2274;
  t1693 = -1.*t1359*t1639;
  t1695 = -1.*t1384*t1657;
  t1699 = 0. + t1693 + t1695;
  t2283 = t1347*t2268;
  t2284 = t1359*t2277;
  t2285 = t2283 + t2284;
  t2294 = t1359*t2268;
  t2301 = t1384*t2277;
  t2304 = t2294 + t2301;
  t1754 = Sqrt(t1689);
  t1721 = -1.*t746*t1254*t168;
  t1723 = -1.*t1722*t202;
  t1728 = 0. + t1721 + t1723;
  t1739 = 1/Sqrt(t1689);
  t2174 = -1.*t746*t1254*t168*t241;
  t2175 = -1.*t1722*t202*t241;
  t2176 = t2174 + t2175;
  t2103 = -1.*t746*t144*t1254*t168;
  t2105 = -1.*t1722*t144*t202;
  t2111 = t2103 + t2105;
  t1803 = -1.*t1722*t746*t241;
  t1804 = t1254*t1189;
  t1805 = 0. + t1803 + t1804;
  t2354 = t144*t168;
  t2356 = -1.*t218*t202*t241;
  t2360 = t2354 + t2356;
  t2370 = -1.*t746*t891*t241;
  t2375 = t453*t669;
  t2376 = t2370 + t2375;
  t2368 = t443*t2360;
  t2378 = t454*t2376;
  t2379 = t2368 + t2378;
  t2388 = t454*t2360;
  t2398 = -1.*t443*t2376;
  t2399 = t2388 + t2398;
  t2448 = t746*t144*t891;
  t2454 = t453*t1150;
  t2455 = t2448 + t2454;
  t2447 = t443*t408;
  t2460 = t454*t2455;
  t2463 = t2447 + t2460;
  t2468 = t454*t408;
  t2471 = -1.*t443*t2455;
  t2472 = t2468 + t2471;
  t2441 = t1133 + t1158;
  t2364 = t325*t669;
  t2365 = t1214 + t2364;
  t2527 = -1.*t746*t1626*t241;
  t2529 = t1278*t669;
  t2531 = t2527 + t2529;
  t2526 = t1261*t2360;
  t2533 = t1282*t2531;
  t2534 = t2526 + t2533;
  t2537 = t1282*t2360;
  t2539 = -1.*t1261*t2531;
  t2540 = t2537 + t2539;
  t2598 = t746*t144*t1626;
  t2601 = t1278*t1150;
  t2604 = t2598 + t2601;
  t2597 = t1261*t408;
  t2613 = t1282*t2604;
  t2615 = t2597 + t2613;
  t2620 = t1282*t408;
  t2624 = -1.*t1261*t2604;
  t2625 = t2620 + t2624;
  t2591 = t1761 + t1763;
  t2519 = -1.*t1254*t669;
  t2521 = t1803 + t2519;
  t2683 = -1.*t453*t746*t144;
  t2684 = -1.*t325*t1150;
  t2688 = t2683 + t2684;
  t2738 = -1.*t453*t746*t241;
  t2739 = t2738 + t1225;
  t2764 = t453*t202;
  t2766 = t1084 + t2764;
  t2810 = t454*t552*t2766;
  t2812 = -1.*t443*t608*t2766;
  t2813 = t2810 + t2812;
  t2787 = -1.*t552*t443*t2766;
  t2793 = t454*t530*t2766;
  t2798 = t2787 + t2793;
  t2723 = -1.*t746*t325*t241;
  t2730 = t453*t1189;
  t2734 = t2723 + t2730;
  t2676 = -1.*t746*t144*t325;
  t2678 = t2676 + t2454;
  t2857 = 0. + t327 + t377;
  t2861 = 0. + t2448 + t2454;
  t2859 = -1.*t443*t2857;
  t2862 = -1.*t454*t2861;
  t2864 = t2859 + t2862;
  t2869 = t454*t2857;
  t2872 = -1.*t443*t2861;
  t2873 = t2869 + t2872;
  t2914 = 0. + t645 + t648;
  t2921 = t746*t891*t241;
  t2924 = 0. + t2921 + t2730;
  t2915 = -1.*t443*t2914;
  t2927 = -1.*t454*t2924;
  t2932 = t2915 + t2927;
  t2934 = t454*t2914;
  t2935 = -1.*t443*t2924;
  t2938 = t2934 + t2935;
  t2974 = -1.*t867*t443;
  t2978 = -1.*t454*t906;
  t2983 = t2974 + t2978;
  t2986 = t925 + t927;
  t2993 = t608*t2983;
  t2996 = t552*t2986;
  t3000 = t2993 + t2996;
  t3006 = t552*t2983;
  t3007 = t530*t2986;
  t3009 = t3006 + t3007;
  t3055 = t443*t2857;
  t3056 = t454*t2861;
  t3058 = 0. + t3055 + t3056;
  t3062 = 0. + t2869 + t2872;
  t3098 = t443*t2914;
  t3102 = t454*t2924;
  t3106 = 0. + t3098 + t3102;
  t3108 = 0. + t2934 + t2935;
  t3154 = -1.*t511*t913;
  t3156 = t551*t930;
  t3160 = t3154 + t3156;
  t3169 = -1.*t551*t913;
  t3173 = -1.*t511*t930;
  t3174 = t3169 + t3173;
  t3220 = t1278*t746*t144;
  t3226 = t3220 + t1763;
  t3297 = t1278*t746*t241;
  t3298 = t3297 + t1779;
  t3341 = -1.*t1278*t202;
  t3357 = t1721 + t3341;
  t3383 = t1282*t1359*t3357;
  t3384 = -1.*t1261*t1384*t3357;
  t3387 = t3383 + t3384;
  t3375 = -1.*t1359*t1261*t3357;
  t3377 = t1282*t1347*t3357;
  t3381 = t3375 + t3377;
  t3275 = -1.*t746*t1254*t241;
  t3279 = -1.*t1278*t1189;
  t3288 = t3275 + t3279;
  t3205 = -1.*t746*t144*t1254;
  t3214 = -1.*t1278*t1150;
  t3215 = t3205 + t3214;
  t3430 = 0. + t2598 + t2601;
  t3429 = -1.*t1261*t2857;
  t3431 = -1.*t1282*t3430;
  t3433 = t3429 + t3431;
  t3443 = t1282*t2857;
  t3444 = -1.*t1261*t3430;
  t3446 = t3443 + t3444;
  t3509 = t746*t1626*t241;
  t3510 = t1278*t1189;
  t3511 = 0. + t3509 + t3510;
  t3504 = -1.*t1261*t2914;
  t3513 = -1.*t1282*t3511;
  t3515 = t3504 + t3513;
  t3518 = t1282*t2914;
  t3519 = -1.*t1261*t3511;
  t3520 = t3518 + t3519;
  t3556 = -1.*t867*t1261;
  t3560 = -1.*t1282*t1631;
  t3561 = t3556 + t3560;
  t3565 = t1650 + t1656;
  t3572 = t1384*t3561;
  t3575 = t1359*t3565;
  t3580 = t3572 + t3575;
  t3583 = t1359*t3561;
  t3584 = t1347*t3565;
  t3586 = t3583 + t3584;
  t3609 = t1261*t2857;
  t3611 = t1282*t3430;
  t3612 = 0. + t3609 + t3611;
  t3614 = 0. + t3443 + t3444;
  t3647 = t1261*t2914;
  t3651 = t1282*t3511;
  t3652 = 0. + t3647 + t3651;
  t3654 = 0. + t3518 + t3519;
  t3679 = -1.*t1329*t1639;
  t3681 = t1356*t1657;
  t3684 = t3679 + t3681;
  t3692 = -1.*t1356*t1639;
  t3696 = -1.*t1329*t1657;
  t3697 = t3692 + t3696;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=1.;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=1.;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=1.;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=1.;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=1.;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0.2429*t286 + 0.0329*t325*t408 - 0.2083*t472 - 0.1422*t497 - 0.02*(t472*t530 + t497*t552) - 0.16*(t472*t552 + t497*t608);
  p_output1[37]=0.0329*t325*t649 + 0.2429*t669 - 0.1422*t679 - 0.2083*t700 - 0.02*(t552*t679 + t530*t700) - 0.16*(t608*t679 + t552*t700);
  p_output1[38]=-0.2429*t168*t746 + 0.0329*t218*t325*t746 - 0.1422*t760 - 0.2083*t789 - 0.16*t813 - 0.02*t842;
  p_output1[39]=t1033*t842*t975 + t813*t938*t975;
  p_output1[40]=-1.*t1109*t1113*t218*t325*t746 + 0.5*t1064*t1081*t1109*(2.*t842*t938 + 2.*t813*t949);
  p_output1[41]=t1208*t1226*t325*t408 + t1160*t1208*t325*t649;
  p_output1[42]=-0.2083*t1291 - 0.1422*t1323 - 0.02*(t1291*t1347 + t1323*t1359) - 0.16*(t1291*t1359 + t1323*t1384) - 0.1944*t286 + 0.0329*t1254*t408;
  p_output1[43]=-0.1422*t1424 - 0.2083*t1444 - 0.02*(t1359*t1424 + t1347*t1444) - 0.16*(t1384*t1424 + t1359*t1444) + 0.0329*t1254*t649 - 0.1944*t669;
  p_output1[44]=-0.1422*t1513 - 0.2083*t1540 - 0.16*t1558 - 0.02*t1604 + 0.1944*t168*t746 + 0.0329*t1254*t218*t746;
  p_output1[45]=t1558*t1662*t1690 + t1604*t1690*t1699;
  p_output1[46]=0.5*(2.*t1604*t1662 + 2.*t1558*t1677)*t1728*t1739*t1750 + t1254*t1750*t1754*t218*t746;
  p_output1[47]=-1.*t1254*t1786*t1805*t408 - 1.*t1254*t1768*t1786*t649;
  p_output1[48]=0.0329*t1842 - 0.2083*t1857 - 0.1422*t1871 - 0.0817*t144*t202 - 0.02*(t1857*t530 + t1871*t552) - 0.16*(t1857*t552 + t1871*t608) + 0.2429*t144*t218*t746;
  p_output1[49]=0.0329*t1924 - 0.2083*t1949 - 0.1422*t1960 - 0.0817*t202*t241 - 0.02*(t1949*t530 + t1960*t552) - 0.16*(t1949*t552 + t1960*t608) + 0.2429*t218*t241*t746;
  p_output1[50]=-0.2083*t2007 - 0.1422*t2018 - 0.02*t2031 - 0.16*t2051 - 0.2429*t202*t218 - 0.0817*t746 + 0.0329*(-1.*t168*t202*t325 - 1.*t1049*t746);
  p_output1[51]=t1033*t2031*t975 + t2051*t938*t975;
  p_output1[52]=t1109*t1113*(t168*t202*t325 + t1049*t746) + 0.5*t1064*t1081*t1109*(2.*t2031*t938 + 2.*t2051*t949);
  p_output1[53]=t1208*t1226*t1842 + t1160*t1208*t1924;
  p_output1[54]=0.0817*t144*t202 - 0.0329*t2111 - 0.2083*t2125 - 0.1422*t2145 - 0.02*(t1347*t2125 + t1359*t2145) - 0.16*(t1359*t2125 + t1384*t2145) - 0.1944*t144*t218*t746;
  p_output1[55]=-0.0329*t2176 - 0.2083*t2189 - 0.1422*t2205 - 0.02*(t1347*t2189 + t1359*t2205) - 0.16*(t1359*t2189 + t1384*t2205) + 0.0817*t202*t241 - 0.1944*t218*t241*t746;
  p_output1[56]=0.1944*t202*t218 - 0.2083*t2268 - 0.1422*t2277 - 0.02*t2285 - 0.16*t2304 + 0.0817*t746 - 0.0329*(t1254*t168*t202 - 1.*t1722*t746);
  p_output1[57]=t1690*t1699*t2285 + t1662*t1690*t2304;
  p_output1[58]=0.5*t1728*t1739*t1750*(2.*t1662*t2285 + 2.*t1677*t2304) + t1750*t1754*(-1.*t1254*t168*t202 + t1722*t746);
  p_output1[59]=t1786*t1805*t2111 + t1768*t1786*t2176;
  p_output1[60]=0.2429*t2360 + 0.0329*t2365 - 0.2083*t2379 - 0.1422*t2399 - 0.02*(t2379*t530 + t2399*t552) - 0.16*(t2379*t552 + t2399*t608) - 0.0817*t241*t746;
  p_output1[61]=0.0329*t2441 - 0.2083*t2463 - 0.1422*t2472 + 0.2429*t408 - 0.02*(t2463*t530 + t2472*t552) - 0.16*(t2463*t552 + t2472*t608) + 0.0817*t144*t746;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=t1208*t1226*t2365 + t1160*t1208*t2441;
  p_output1[66]=-0.1944*t2360 - 0.0329*t2521 - 0.2083*t2534 - 0.1422*t2540 - 0.02*(t1347*t2534 + t1359*t2540) - 0.16*(t1359*t2534 + t1384*t2540) + 0.0817*t241*t746;
  p_output1[67]=-0.0329*t2591 - 0.2083*t2615 - 0.1422*t2625 - 0.02*(t1347*t2615 + t1359*t2625) - 0.16*(t1359*t2615 + t1384*t2625) - 0.1944*t408 - 0.0817*t144*t746;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=t1786*t1805*t2521 + t1768*t1786*t2591;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0.0329*t2678 + 0.1422*t2688*t443 - 0.2083*t2688*t454 - 0.02*(t2688*t454*t530 - 1.*t2688*t443*t552) - 0.16*(t2688*t454*t552 - 1.*t2688*t443*t608);
  p_output1[109]=0.0329*t2734 + 0.1422*t2739*t443 - 0.2083*t2739*t454 - 0.02*(t2739*t454*t530 - 1.*t2739*t443*t552) - 0.16*(t2739*t454*t552 - 1.*t2739*t443*t608);
  p_output1[110]=-0.02*t2798 - 0.16*t2813 + 0.1422*t2766*t443 - 0.2083*t2766*t454 + 0.0329*(t202*t325 + t874);
  p_output1[111]=t1033*t2798*t975 + t2813*t938*t975;
  p_output1[112]=t1109*t1113*(-1.*t202*t325 - 1.*t168*t453*t746) + 0.5*t1064*t1081*t1109*(2.*t2798*t938 + 2.*t2813*t949);
  p_output1[113]=t1208*t1226*t2678 + t1160*t1208*t2734;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=-0.1422*t2864 - 0.2083*t2873 - 0.02*(t2873*t530 + t2864*t552) - 0.16*(t2873*t552 + t2864*t608);
  p_output1[121]=-0.1422*t2932 - 0.2083*t2938 - 0.02*(t2938*t530 + t2932*t552) - 0.16*(t2938*t552 + t2932*t608);
  p_output1[122]=-0.1422*t2983 - 0.2083*t2986 - 0.16*t3000 - 0.02*t3009;
  p_output1[123]=t1033*t3009*t975 + t3000*t938*t975;
  p_output1[124]=0.5*t1064*t1081*t1109*(2.*t3009*t938 + 2.*t3000*t949);
  p_output1[125]=0;
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=-0.02*(-1.*t3062*t511 - 1.*t3058*t551) - 0.16*(-1.*t3058*t511 + t3062*t551);
  p_output1[133]=-0.02*(-1.*t3108*t511 - 1.*t3106*t551) - 0.16*(-1.*t3106*t511 + t3108*t551);
  p_output1[134]=-0.16*t3160 - 0.02*t3174;
  p_output1[135]=t1033*t3174*t975 + t3160*t938*t975;
  p_output1[136]=0.5*t1064*t1081*t1109*(2.*t3174*t938 + 2.*t3160*t949);
  p_output1[137]=0;
  p_output1[138]=0;
  p_output1[139]=0;
  p_output1[140]=0;
  p_output1[141]=0;
  p_output1[142]=0;
  p_output1[143]=0;
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=0;
  p_output1[148]=0;
  p_output1[149]=0;
  p_output1[150]=-0.0329*t3215 + 0.1422*t1261*t3226 - 0.2083*t1282*t3226 - 0.02*(t1282*t1347*t3226 - 1.*t1261*t1359*t3226) - 0.16*(t1282*t1359*t3226 - 1.*t1261*t1384*t3226);
  p_output1[151]=-0.0329*t3288 + 0.1422*t1261*t3298 - 0.2083*t1282*t3298 - 0.02*(t1282*t1347*t3298 - 1.*t1261*t1359*t3298) - 0.16*(t1282*t1359*t3298 - 1.*t1261*t1384*t3298);
  p_output1[152]=0.1422*t1261*t3357 - 0.2083*t1282*t3357 - 0.02*t3381 - 0.16*t3387 - 0.0329*(t1254*t202 - 1.*t1278*t168*t746);
  p_output1[153]=t1690*t1699*t3381 + t1662*t1690*t3387;
  p_output1[154]=t1750*t1754*(t1624 - 1.*t1254*t202) + 0.5*t1728*t1739*t1750*(2.*t1662*t3381 + 2.*t1677*t3387);
  p_output1[155]=t1786*t1805*t3215 + t1768*t1786*t3288;
  p_output1[156]=0;
  p_output1[157]=0;
  p_output1[158]=0;
  p_output1[159]=0;
  p_output1[160]=0;
  p_output1[161]=0;
  p_output1[162]=-0.1422*t3433 - 0.2083*t3446 - 0.02*(t1359*t3433 + t1347*t3446) - 0.16*(t1384*t3433 + t1359*t3446);
  p_output1[163]=-0.1422*t3515 - 0.2083*t3520 - 0.02*(t1359*t3515 + t1347*t3520) - 0.16*(t1384*t3515 + t1359*t3520);
  p_output1[164]=-0.1422*t3561 - 0.2083*t3565 - 0.16*t3580 - 0.02*t3586;
  p_output1[165]=t1662*t1690*t3580 + t1690*t1699*t3586;
  p_output1[166]=0.5*t1728*t1739*t1750*(2.*t1677*t3580 + 2.*t1662*t3586);
  p_output1[167]=0;
  p_output1[168]=0;
  p_output1[169]=0;
  p_output1[170]=0;
  p_output1[171]=0;
  p_output1[172]=0;
  p_output1[173]=0;
  p_output1[174]=-0.02*(-1.*t1356*t3612 - 1.*t1329*t3614) - 0.16*(-1.*t1329*t3612 + t1356*t3614);
  p_output1[175]=-0.02*(-1.*t1356*t3652 - 1.*t1329*t3654) - 0.16*(-1.*t1329*t3652 + t1356*t3654);
  p_output1[176]=-0.16*t3684 - 0.02*t3697;
  p_output1[177]=t1662*t1690*t3684 + t1690*t1699*t3697;
  p_output1[178]=0.5*t1728*t1739*t1750*(2.*t1677*t3684 + 2.*t1662*t3697);
  p_output1[179]=0;
  p_output1[180]=0;
  p_output1[181]=0;
  p_output1[182]=0;
  p_output1[183]=0;
  p_output1[184]=0;
  p_output1[185]=0;
  p_output1[186]=0;
  p_output1[187]=0;
  p_output1[188]=0;
  p_output1[189]=0;
  p_output1[190]=0;
  p_output1[191]=0;
  p_output1[192]=0;
  p_output1[193]=0;
  p_output1[194]=0;
  p_output1[195]=0;
  p_output1[196]=0;
  p_output1[197]=0;
  p_output1[198]=0;
  p_output1[199]=0;
  p_output1[200]=0;
  p_output1[201]=0;
  p_output1[202]=0;
  p_output1[203]=0;
  p_output1[204]=0;
  p_output1[205]=0;
  p_output1[206]=0;
  p_output1[207]=0;
  p_output1[208]=0;
  p_output1[209]=0;
  p_output1[210]=0;
  p_output1[211]=0;
  p_output1[212]=0;
  p_output1[213]=0;
  p_output1[214]=0;
  p_output1[215]=0;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 12, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "j_1_func_fully.hh"

namespace SymFunction
{

void j_1_func_fully_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE