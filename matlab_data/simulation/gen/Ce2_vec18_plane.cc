/*
 * Automatically Generated from Mathematica.
 * Fri 21 Dec 2018 15:11:56 GMT-05:00
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
  double t47;
  double t76;
  double t14;
  double t88;
  double t260;
  double t326;
  double t342;
  double t117;
  double t173;
  double t182;
  double t224;
  double t380;
  double t595;
  double t607;
  double t613;
  double t430;
  double t850;
  double t863;
  double t887;
  double t914;
  double t918;
  double t930;
  double t965;
  double t981;
  double t993;
  double t1016;
  double t63;
  double t92;
  double t108;
  double t1109;
  double t1157;
  double t1159;
  double t1182;
  double t764;
  double t835;
  double t847;
  double t964;
  double t1035;
  double t1038;
  double t1191;
  double t1039;
  double t1045;
  double t1081;
  double t1400;
  double t1406;
  double t1471;
  double t1505;
  double t1512;
  double t1614;
  double t1657;
  double t1677;
  double t1284;
  double t1426;
  double t1521;
  double t1558;
  double t137;
  double t367;
  double t512;
  double t513;
  double t517;
  double t521;
  double t579;
  double t628;
  double t660;
  double t671;
  double t697;
  double t701;
  double t2076;
  double t2086;
  double t2108;
  double t2115;
  double t2117;
  double t2126;
  double t2145;
  double t2148;
  double t2171;
  double t2190;
  double t2602;
  double t2603;
  double t2606;
  double t2284;
  double t2298;
  double t2325;
  double t2342;
  double t2378;
  double t2400;
  double t2414;
  double t2448;
  double t2512;
  double t2527;
  double t1303;
  double t1728;
  double t1734;
  double t2753;
  double t2761;
  double t2763;
  double t2774;
  double t2775;
  double t2781;
  double t2792;
  double t2798;
  double t2809;
  double t1094;
  double t1562;
  double t1573;
  double t1799;
  double t1800;
  double t1809;
  double t1817;
  double t1866;
  double t1883;
  double t1884;
  double t3274;
  double t3279;
  double t3298;
  double t3169;
  double t3220;
  double t3233;
  double t3931;
  double t4122;
  double t3977;
  double t4010;
  double t4052;
  double t4186;
  double t4239;
  double t4294;
  double t4445;
  double t4493;
  double t4502;
  double t4508;
  double t4530;
  double t4539;
  double t4633;
  double t4649;
  double t4697;
  double t4754;
  double t4787;
  double t4793;
  double t4923;
  double t4976;
  double t4989;
  double t5026;
  double t5040;
  double t5052;
  double t5654;
  double t5712;
  double t5721;
  double t5604;
  double t5624;
  double t5648;
  double t5743;
  double t5775;
  double t5786;
  double t5651;
  double t5801;
  double t5807;
  double t6023;
  double t6031;
  double t6033;
  double t6101;
  double t6127;
  double t6193;
  double t6484;
  double t6485;
  double t6489;
  double t5903;
  double t8439;
  double t8490;
  double t8551;
  double t8876;
  double t8956;
  double t9016;
  double t8609;
  double t8727;
  double t8831;
  double t9018;
  double t9040;
  double t6201;
  double t6343;
  double t6362;
  double t9365;
  double t9415;
  double t9480;
  double t9600;
  double t9618;
  double t9629;
  double t6519;
  double t6875;
  double t6982;
  double t7093;
  double t7175;
  double t7353;
  double t7359;
  double t10028;
  double t10043;
  double t10097;
  double t7584;
  double t7831;
  double t7959;
  double t5162;
  double t5188;
  double t5227;
  double t5277;
  double t5283;
  double t5284;
  double t1224;
  double t1239;
  double t1251;
  double t1295;
  double t1304;
  double t1314;
  double t1330;
  double t1705;
  double t1713;
  double t1714;
  double t1733;
  double t1738;
  double t1756;
  double t1759;
  double t1770;
  double t1927;
  double t1941;
  double t1955;
  double t1960;
  double t1998;
  double t2039;
  double t2058;
  double t2064;
  double t5420;
  double t5466;
  double t5481;
  double t5488;
  double t5492;
  double t5494;
  double t2567;
  double t2578;
  double t2589;
  double t2590;
  double t2613;
  double t2655;
  double t2663;
  double t2675;
  double t2691;
  double t2702;
  double t2718;
  double t2723;
  double t2724;
  double t2726;
  double t2764;
  double t2814;
  double t2817;
  double t2831;
  double t2836;
  double t2848;
  double t2852;
  double t2862;
  double t2879;
  double t2880;
  double t2915;
  double t2924;
  double t2931;
  double t2949;
  double t2959;
  double t3003;
  double t3009;
  double t3044;
  double t3058;
  double t3084;
  double t3122;
  double t11210;
  double t11217;
  double t11286;
  double t3236;
  double t3259;
  double t3322;
  double t3334;
  double t3342;
  double t3364;
  double t3413;
  double t3474;
  double t3534;
  double t3540;
  double t3546;
  double t3548;
  double t3565;
  double t3579;
  double t3605;
  double t3613;
  double t5260;
  double t5419;
  double t5485;
  double t5496;
  double t5500;
  double t4739;
  double t4800;
  double t4810;
  double t4507;
  double t4549;
  double t4575;
  double t5014;
  double t5093;
  double t5114;
  double t4058;
  double t4381;
  double t4428;
  double t5814;
  double t5889;
  double t5898;
  double t5941;
  double t5948;
  double t5968;
  double t6022;
  double t6053;
  double t6215;
  double t6232;
  double t6241;
  double t6260;
  double t6303;
  double t6348;
  double t6400;
  double t6413;
  double t6432;
  double t6498;
  double t6505;
  double t6517;
  double t6563;
  double t6584;
  double t6764;
  double t6833;
  double t6905;
  double t6925;
  double t6966;
  double t7036;
  double t7115;
  double t7129;
  double t7142;
  double t7323;
  double t7331;
  double t7341;
  double t7358;
  double t7367;
  double t7443;
  double t7451;
  double t7472;
  double t7578;
  double t7639;
  double t7658;
  double t7686;
  double t7690;
  double t7820;
  double t7888;
  double t8053;
  double t8190;
  double t8278;
  double t9046;
  double t9066;
  double t9067;
  double t9111;
  double t9164;
  double t9284;
  double t9327;
  double t9537;
  double t9665;
  double t9729;
  double t9741;
  double t9776;
  double t9778;
  double t9784;
  double t9792;
  double t9990;
  double t10009;
  double t10017;
  double t10131;
  double t10151;
  double t10165;
  double t10172;
  double t10180;
  double t10208;
  double t10277;
  double t10315;
  double t10323;
  double t10341;
  double t10373;
  double t10407;
  double t10422;
  double t10484;
  double t10493;
  double t10506;
  double t10542;
  double t10563;
  double t10564;
  double t10582;
  double t10589;
  double t10627;
  double t10631;
  double t10632;
  double t10640;
  double t10679;
  double t10728;
  double t10743;
  double t10807;
  double t10868;
  double t10900;
  double t10911;
  double t10956;
  double t10975;
  double t10985;
  double t10991;
  double t10999;
  double t11005;
  double t11030;
  double t11895;
  double t11896;
  double t11911;
  double t4435;
  double t4624;
  double t4889;
  double t5143;
  double t5150;
  double t11529;
  double t11572;
  double t11589;
  double t11600;
  double t11602;
  double t12381;
  double t12393;
  double t12398;
  double t9324;
  double t10023;
  double t10235;
  double t10735;
  double t11089;
  double t11098;
  double t12145;
  double t12159;
  double t12160;
  double t12178;
  double t12197;
  double t12214;
  double t11752;
  double t11767;
  double t11770;
  double t11778;
  double t11780;
  double t11788;
  double t12594;
  double t12608;
  double t12621;
  double t12421;
  double t12444;
  double t12445;
  double t12516;
  double t12519;
  double t12520;
  double t5999;
  double t6438;
  double t6830;
  double t7470;
  double t8294;
  double t8384;
  double t12075;
  double t12091;
  double t12102;
  double t12110;
  double t12111;
  double t12112;
  double t11701;
  double t11708;
  double t11709;
  double t11710;
  double t11734;
  double t11739;
  double t12558;
  double t12570;
  double t12576;
  double t12577;
  double t12622;
  double t12623;
  double t12624;
  double t12940;
  double t12944;
  double t12949;
  double t12950;
  double t13005;
  double t13010;
  double t3123;
  double t3544;
  double t3672;
  double t12002;
  double t12015;
  double t12016;
  double t11446;
  double t11470;
  double t11475;
  double t12797;
  double t12805;
  double t12819;
  double t12477;
  double t12487;
  double t12501;
  double t13187;
  double t13192;
  double t13208;
  double t13209;
  double t13254;
  double t13269;
  double t1914;
  double t2211;
  double t2535;
  double t11912;
  double t11919;
  double t11920;
  double t11294;
  double t11358;
  double t11366;
  double t12741;
  double t12744;
  double t12750;
  double t12371;
  double t12406;
  double t12408;
  double t13559;
  double t13573;
  double t13578;
  double t13605;
  double t2721;
  double t2732;
  double t11949;
  double t11963;
  double t11404;
  double t11409;
  double t12726;
  double t12736;
  double t12324;
  double t12363;
  double t13521;
  double t13528;
  double t13532;
  double t12907;
  double t12908;
  double t12915;
  double t13161;
  double t13162;
  double t13173;
  double t542;
  double t723;
  double t741;
  double t11835;
  double t11846;
  double t11867;
  double t11158;
  double t11159;
  double t11176;
  double t12675;
  double t12691;
  double t12695;
  double t12266;
  double t12270;
  double t12272;
  t47 = Cos(var1[17]);
  t76 = Sin(var1[16]);
  t14 = Cos(var1[16]);
  t88 = Sin(var1[17]);
  t260 = -1.*t47*t76;
  t326 = -1.*t14*t88;
  t342 = t260 + t326;
  t117 = Sin(var1[4]);
  t173 = Cos(var1[4]);
  t182 = Cos(var1[5]);
  t224 = Sin(var1[15]);
  t380 = Cos(var1[15]);
  t595 = -1.*t14*t47;
  t607 = t76*t88;
  t613 = t595 + t607;
  t430 = Sin(var1[5]);
  t850 = -1.*t47;
  t863 = 1. + t850;
  t887 = -0.336601*t863;
  t914 = -0.356601*t47;
  t918 = -0.16*t88;
  t930 = 0. + t887 + t914 + t918;
  t965 = -0.20833*t863;
  t981 = -0.36833*t47;
  t993 = 0.020000000000000018*t88;
  t1016 = 0. + t965 + t981 + t993;
  t63 = t14*t47;
  t92 = -1.*t76*t88;
  t108 = t63 + t92;
  t1109 = -0.194401*t76;
  t1157 = -1.*t76*t930;
  t1159 = t14*t1016;
  t1182 = 0. + t1109 + t1157 + t1159;
  t764 = -1.*t14;
  t835 = 1. + t764;
  t847 = -0.194401*t835;
  t964 = t14*t930;
  t1035 = t76*t1016;
  t1038 = 0. + t847 + t964 + t1035;
  t1191 = 0. + t63 + t92;
  t1039 = t47*t76;
  t1045 = t14*t88;
  t1081 = 0. + t1039 + t1045;
  t1400 = -0.16*t47;
  t1406 = t1400 + t993;
  t1471 = 0.020000000000000018*t47;
  t1505 = 0.16*t88;
  t1512 = t1471 + t1505;
  t1614 = -1.*t76*t1406;
  t1657 = t14*t1512;
  t1677 = t1614 + t1657;
  t1284 = 0. + t260 + t326;
  t1426 = t14*t1406;
  t1521 = t76*t1512;
  t1558 = t1426 + t1521;
  t137 = t108*t117;
  t367 = -1.*t182*t224*t342;
  t512 = -1.*t380*t342*t430;
  t513 = t367 + t512;
  t517 = t173*t513;
  t521 = t137 + t517;
  t579 = t342*t117;
  t628 = -1.*t182*t224*t613;
  t660 = -1.*t380*t613*t430;
  t671 = t628 + t660;
  t697 = t173*t671;
  t701 = t579 + t697;
  t2076 = t1191*t117;
  t2086 = -1.*t224*t1284;
  t2108 = 0. + t2086;
  t2115 = t182*t2108;
  t2117 = t380*t1284;
  t2126 = 0. + t2117;
  t2145 = -1.*t2126*t430;
  t2148 = 0. + t2115 + t2145;
  t2171 = t173*t2148;
  t2190 = 0. + t2076 + t2171;
  t2602 = t47*t1016;
  t2603 = 0.194401*t88;
  t2606 = t930*t88;
  t2284 = t1081*t117;
  t2298 = -1.*t224*t1191;
  t2325 = 0. + t2298;
  t2342 = t182*t2325;
  t2378 = t380*t1191;
  t2400 = 0. + t2378;
  t2414 = -1.*t2400*t430;
  t2448 = 0. + t2342 + t2414;
  t2512 = t173*t2448;
  t2527 = 0. + t2284 + t2512;
  t1303 = t1038*t1191;
  t1728 = t1038*t342;
  t1734 = t1558*t1191;
  t2753 = 0.035165*t224;
  t2761 = t380*t1182;
  t2763 = t2753 + t2761;
  t2774 = -1.*t380;
  t2775 = 1. + t2774;
  t2781 = 0.081715*t2775;
  t2792 = 0.11688*t380;
  t2798 = -1.*t224*t1182;
  t2809 = t2781 + t2792 + t2798;
  t1094 = -1.*t1038*t1081;
  t1562 = -1.*t1558*t1081;
  t1573 = -1.*t1038*t108;
  t1799 = 0. + t380;
  t1800 = t1799*t182;
  t1809 = 0. + t224;
  t1817 = -1.*t1809*t430;
  t1866 = 0. + t1800 + t1817;
  t1883 = t173*t1866;
  t1884 = 0. + t1883;
  t3274 = -1.*t1809*t2763;
  t3279 = -1.*t1799*t2809;
  t3298 = 0. + t3274 + t3279;
  t3169 = t1809*t2763;
  t3220 = t1799*t2809;
  t3233 = 0. + t3169 + t3220;
  t3931 = Sin(var1[3]);
  t4122 = Cos(var1[3]);
  t3977 = t380*t182*t342;
  t4010 = -1.*t224*t342*t430;
  t4052 = t3977 + t4010;
  t4186 = t173*t108;
  t4239 = -1.*t117*t513;
  t4294 = t4186 + t4239;
  t4445 = t380*t182*t613;
  t4493 = -1.*t224*t613*t430;
  t4502 = t4445 + t4493;
  t4508 = t173*t342;
  t4530 = -1.*t117*t671;
  t4539 = t4508 + t4530;
  t4633 = t182*t2126;
  t4649 = t2108*t430;
  t4697 = 0. + t4633 + t4649;
  t4754 = t173*t1191;
  t4787 = -1.*t117*t2148;
  t4793 = 0. + t4754 + t4787;
  t4923 = t182*t2400;
  t4976 = t2325*t430;
  t4989 = 0. + t4923 + t4976;
  t5026 = t173*t1081;
  t5040 = -1.*t117*t2448;
  t5052 = 0. + t5026 + t5040;
  t5654 = t182*t1809;
  t5712 = t1799*t430;
  t5721 = 0. + t5654 + t5712;
  t5604 = t182*t2809;
  t5624 = -1.*t2763*t430;
  t5648 = 0. + t5604 + t5624;
  t5743 = t182*t2763;
  t5775 = t2809*t430;
  t5786 = 0. + t5743 + t5775;
  t5651 = t1866*t5648;
  t5801 = t5721*t5786;
  t5807 = 0. + t5651 + t5801;
  t6023 = -1.*t182*t224*t1677;
  t6031 = -1.*t380*t1677*t430;
  t6033 = t6023 + t6031;
  t6101 = t380*t182*t1677;
  t6127 = -1.*t224*t1677*t430;
  t6193 = t6101 + t6127;
  t6484 = -1.*t1866*t5648;
  t6485 = -1.*t5721*t5786;
  t6489 = 0. + t6484 + t6485;
  t5903 = -1.*t5786*t4697;
  t8439 = t1038*t117;
  t8490 = t173*t5648;
  t8551 = 0. + t8439 + t8490;
  t8876 = t173*t1038;
  t8956 = -1.*t117*t5648;
  t9016 = 0. + t8876 + t8956;
  t8609 = t1884*t8551;
  t8727 = -1.*t117*t1866;
  t8831 = 0. + t8727;
  t9018 = t8831*t9016;
  t9040 = t5801 + t8609 + t9018;
  t6201 = t5721*t6193;
  t6343 = -1.*t5786*t4502;
  t6362 = -1.*t6193*t4697;
  t9365 = t1558*t117;
  t9415 = t173*t6033;
  t9480 = t9365 + t9415;
  t9600 = t173*t1558;
  t9618 = -1.*t117*t6033;
  t9629 = t9600 + t9618;
  t6519 = t5786*t4989;
  t6875 = t5786*t4697;
  t6982 = t5786*t4502;
  t7093 = t6193*t4697;
  t7175 = -1.*t5786*t4989;
  t7353 = -1.*t5786*t4052;
  t7359 = -1.*t6193*t4989;
  t10028 = -1.*t1884*t8551;
  t10043 = -1.*t8831*t9016;
  t10097 = t6485 + t10028 + t10043;
  t7584 = -1.*t5721*t6193;
  t7831 = t5786*t4052;
  t7959 = t6193*t4989;
  t5162 = t4122*t4052;
  t5188 = -1.*t3931*t4294;
  t5227 = t5162 + t5188;
  t5277 = t4122*t4502;
  t5283 = -1.*t3931*t4539;
  t5284 = t5277 + t5283;
  t1224 = -1.*t1182*t1191;
  t1239 = 0. + t1094 + t1224;
  t1251 = t342*t1239;
  t1295 = t1182*t1284;
  t1304 = 0. + t1295 + t1303;
  t1314 = t108*t1304;
  t1330 = -1.*t1182*t342;
  t1705 = -1.*t1677*t1191;
  t1713 = t1330 + t1562 + t1573 + t1705;
  t1714 = t1191*t1713;
  t1733 = t1677*t1284;
  t1738 = t1182*t613;
  t1756 = t1728 + t1733 + t1734 + t1738;
  t1759 = t1081*t1756;
  t1770 = t1251 + t1314 + t1714 + t1759;
  t1927 = 0.035165*t1191;
  t1941 = 0. + t1927;
  t1955 = -0.081715*t1284;
  t1960 = -0.11688*t1081;
  t1998 = 0. + t1955 + t1960;
  t2039 = -0.11688*t108;
  t2058 = -0.081715*t613;
  t2064 = t2039 + t2058;
  t5420 = t4122*t4697;
  t5466 = -1.*t3931*t4793;
  t5481 = 0. + t5420 + t5466;
  t5488 = t4122*t4989;
  t5492 = -1.*t3931*t5052;
  t5494 = 0. + t5488 + t5492;
  t2567 = -0.194401*t47;
  t2578 = -1.*t47*t930;
  t2589 = t1016*t88;
  t2590 = 0. + t2567 + t2578 + t2589;
  t2613 = 0. + t2602 + t2603 + t2606;
  t2655 = 0.194401*t47;
  t2663 = t47*t930;
  t2675 = t47*t1512;
  t2691 = -1.*t1016*t88;
  t2702 = t1406*t88;
  t2718 = t2655 + t2663 + t2675 + t2691 + t2702;
  t2723 = -1.*t47*t1406;
  t2724 = t1512*t88;
  t2726 = t2602 + t2723 + t2603 + t2606 + t2724;
  t2764 = t2763*t2126;
  t2814 = t2809*t2108;
  t2817 = t1303 + t2764 + t2814;
  t2831 = t108*t2817;
  t2836 = t380*t2763*t613;
  t2848 = -1.*t224*t2809*t613;
  t2852 = t380*t1677*t2126;
  t2862 = -1.*t224*t1677*t2108;
  t2879 = t1728 + t1734 + t2836 + t2848 + t2852 + t2862;
  t2880 = t1081*t2879;
  t2915 = -1.*t2763*t2400;
  t2924 = -1.*t2809*t2325;
  t2931 = t1094 + t2915 + t2924;
  t2949 = t342*t2931;
  t2959 = -1.*t380*t2763*t342;
  t3003 = t224*t2809*t342;
  t3009 = -1.*t380*t1677*t2400;
  t3044 = t224*t1677*t2325;
  t3058 = t2959 + t3003 + t1562 + t1573 + t3009 + t3044;
  t3084 = t1191*t3058;
  t3122 = t2831 + t2880 + t2949 + t3084;
  t11210 = t4122*t5721;
  t11217 = -1.*t3931*t8831;
  t11286 = 0. + t11210 + t11217;
  t3236 = t3233*t1191;
  t3259 = 0. + t3236;
  t3322 = t3298*t1081;
  t3334 = 0. + t3322;
  t3342 = t1799*t224*t1677;
  t3364 = -1.*t380*t1809*t1677;
  t3413 = t3342 + t3364;
  t3474 = t3413*t1081;
  t3534 = t3298*t108;
  t3540 = t3474 + t3534;
  t3546 = t3233*t342;
  t3548 = -1.*t1799*t224*t1677;
  t3565 = t380*t1809*t1677;
  t3579 = t3548 + t3565;
  t3605 = t3579*t1191;
  t3613 = t3546 + t3605;
  t5260 = 0.241*t2527*t5227;
  t5419 = 0.241*t2190*t5284;
  t5485 = 0.241*t701*t5481;
  t5496 = 0.241*t521*t5494;
  t5500 = t5260 + t5419 + t5485 + t5496;
  t4739 = t3931*t4697;
  t4800 = t4122*t4793;
  t4810 = 0. + t4739 + t4800;
  t4507 = t3931*t4502;
  t4549 = t4122*t4539;
  t4575 = t4507 + t4549;
  t5014 = t3931*t4989;
  t5093 = t4122*t5052;
  t5114 = 0. + t5014 + t5093;
  t4058 = t3931*t4052;
  t4381 = t4122*t4294;
  t4428 = t4058 + t4381;
  t5814 = t4697*t5807;
  t5889 = -1.*t1038*t1191;
  t5898 = -1.*t5648*t2148;
  t5941 = t5889 + t5898 + t5903;
  t5948 = t5721*t5941;
  t5968 = t5814 + t5948;
  t6022 = t4502*t5807;
  t6053 = t1866*t6033;
  t6215 = t6053 + t6201;
  t6232 = t4697*t6215;
  t6241 = -1.*t1038*t342;
  t6260 = -1.*t1558*t1191;
  t6303 = -1.*t5648*t671;
  t6348 = -1.*t6033*t2148;
  t6400 = t6241 + t6260 + t6303 + t6343 + t6348 + t6362;
  t6413 = t5721*t6400;
  t6432 = t6022 + t6232 + t6413;
  t6498 = t4989*t6489;
  t6505 = t1038*t1081;
  t6517 = t5648*t2448;
  t6563 = t6505 + t6517 + t6519;
  t6584 = t5721*t6563;
  t6764 = t6498 + t6584;
  t6833 = t5648*t2148;
  t6905 = t1303 + t6833 + t6875;
  t6925 = t4052*t6905;
  t6966 = t5648*t671;
  t7036 = t6033*t2148;
  t7115 = t1728 + t1734 + t6966 + t6982 + t7036 + t7093;
  t7129 = t4989*t7115;
  t7142 = -1.*t5648*t2448;
  t7323 = t1094 + t7142 + t7175;
  t7331 = t4502*t7323;
  t7341 = -1.*t5648*t513;
  t7358 = -1.*t6033*t2448;
  t7367 = t1562 + t1573 + t7341 + t7353 + t7358 + t7359;
  t7443 = t4697*t7367;
  t7451 = t6925 + t7129 + t7331 + t7443;
  t7472 = t4052*t6489;
  t7578 = -1.*t1866*t6033;
  t7639 = t7578 + t7584;
  t7658 = t4989*t7639;
  t7686 = t1558*t1081;
  t7690 = t1038*t108;
  t7820 = t5648*t513;
  t7888 = t6033*t2448;
  t8053 = t7686 + t7690 + t7820 + t7831 + t7888 + t7959;
  t8190 = t5721*t8053;
  t8278 = t7472 + t7658 + t8190;
  t9046 = t2190*t9040;
  t9066 = -1.*t8551*t2190;
  t9067 = -1.*t9016*t4793;
  t9111 = t5903 + t9066 + t9067;
  t9164 = t1884*t9111;
  t9284 = t9046 + t9164;
  t9327 = t701*t9040;
  t9537 = t1884*t9480;
  t9665 = t8831*t9629;
  t9729 = t6201 + t9537 + t9665;
  t9741 = t2190*t9729;
  t9776 = -1.*t8551*t701;
  t9778 = -1.*t9016*t4539;
  t9784 = -1.*t9480*t2190;
  t9792 = -1.*t9629*t4793;
  t9990 = t6343 + t6362 + t9776 + t9778 + t9784 + t9792;
  t10009 = t1884*t9990;
  t10017 = t9327 + t9741 + t10009;
  t10131 = t2527*t10097;
  t10151 = t8551*t2527;
  t10165 = t9016*t5052;
  t10172 = t6519 + t10151 + t10165;
  t10180 = t1884*t10172;
  t10208 = t10131 + t10180;
  t10277 = t8551*t2190;
  t10315 = t9016*t4793;
  t10323 = t6875 + t10277 + t10315;
  t10341 = t521*t10323;
  t10373 = t8551*t701;
  t10407 = t9016*t4539;
  t10422 = t9480*t2190;
  t10484 = t9629*t4793;
  t10493 = t6982 + t7093 + t10373 + t10407 + t10422 + t10484;
  t10506 = t2527*t10493;
  t10542 = -1.*t8551*t2527;
  t10563 = -1.*t9016*t5052;
  t10564 = t7175 + t10542 + t10563;
  t10582 = t701*t10564;
  t10589 = -1.*t8551*t521;
  t10627 = -1.*t9016*t4294;
  t10631 = -1.*t9480*t2527;
  t10632 = -1.*t9629*t5052;
  t10640 = t7353 + t7359 + t10589 + t10627 + t10631 + t10632;
  t10679 = t2190*t10640;
  t10728 = t10341 + t10506 + t10582 + t10679;
  t10743 = t521*t10097;
  t10807 = -1.*t1884*t9480;
  t10868 = -1.*t8831*t9629;
  t10900 = t7584 + t10807 + t10868;
  t10911 = t2527*t10900;
  t10956 = t8551*t521;
  t10975 = t9016*t4294;
  t10985 = t9480*t2527;
  t10991 = t9629*t5052;
  t10999 = t7831 + t7959 + t10956 + t10975 + t10985 + t10991;
  t11005 = t1884*t10999;
  t11030 = t10743 + t10911 + t11005;
  t11895 = t3931*t5721;
  t11896 = t4122*t8831;
  t11911 = 0. + t11895 + t11896;
  t4435 = 0.241*t2527*t4428;
  t4624 = 0.241*t2190*t4575;
  t4889 = 0.241*t701*t4810;
  t5143 = 0.241*t521*t5114;
  t5150 = t4435 + t4624 + t4889 + t5143;
  t11529 = 0.241*t5284*t4810;
  t11572 = 0.241*t4575*t5481;
  t11589 = 0.241*t5227*t5114;
  t11600 = 0.241*t4428*t5494;
  t11602 = t11529 + t11572 + t11589 + t11600;
  t12381 = t2527*t10323;
  t12393 = t2190*t10564;
  t12398 = t12381 + t12393;
  t9324 = 0.241*t521*t9284;
  t10023 = 0.241*t2527*t10017;
  t10235 = 0.241*t701*t10208;
  t10735 = 0.241*t1884*t10728;
  t11089 = 0.241*t2190*t11030;
  t11098 = t9324 + t10023 + t10235 + t10735 + t11089;
  t12145 = 0.241*t4428*t9284;
  t12159 = 0.241*t5114*t10017;
  t12160 = 0.241*t4575*t10208;
  t12178 = 0.241*t11911*t10728;
  t12197 = 0.241*t4810*t11030;
  t12214 = t12145 + t12159 + t12160 + t12178 + t12197;
  t11752 = 0.241*t5227*t9284;
  t11767 = 0.241*t5494*t10017;
  t11770 = 0.241*t5284*t10208;
  t11778 = 0.241*t11286*t10728;
  t11780 = 0.241*t5481*t11030;
  t11788 = t11752 + t11767 + t11770 + t11778 + t11780;
  t12594 = t4989*t6905;
  t12608 = t4697*t7323;
  t12621 = 0. + t12594 + t12608;
  t12421 = t1191*t1239;
  t12444 = t1081*t1304;
  t12445 = 0. + t12421 + t12444;
  t12516 = t1081*t2817;
  t12519 = t1191*t2931;
  t12520 = 0. + t12516 + t12519;
  t5999 = 0.241*t521*t5968;
  t6438 = 0.241*t2527*t6432;
  t6830 = 0.241*t701*t6764;
  t7470 = 0.241*t1884*t7451;
  t8294 = 0.241*t2190*t8278;
  t8384 = t5999 + t6438 + t6830 + t7470 + t8294;
  t12075 = 0.241*t4428*t5968;
  t12091 = 0.241*t6432*t5114;
  t12102 = 0.241*t4575*t6764;
  t12110 = 0.241*t11911*t7451;
  t12111 = 0.241*t4810*t8278;
  t12112 = t12075 + t12091 + t12102 + t12110 + t12111;
  t11701 = 0.241*t5227*t5968;
  t11708 = 0.241*t6432*t5494;
  t11709 = 0.241*t5284*t6764;
  t11710 = 0.241*t11286*t7451;
  t11734 = 0.241*t5481*t8278;
  t11739 = t11701 + t11708 + t11709 + t11710 + t11734;
  t12558 = 0.241*t6432*t9284;
  t12570 = 0.241*t5968*t10017;
  t12576 = 0.241*t7451*t12398;
  t12577 = 0.241*t8278*t10208;
  t12622 = 0.241*t12621*t10728;
  t12623 = 0.241*t6764*t11030;
  t12624 = t12558 + t12570 + t12576 + t12577 + t12622 + t12623;
  t12940 = 0.241*t3334;
  t12944 = 0. + t12940;
  t12949 = 0.241*t3259;
  t12950 = 0. + t12949;
  t13005 = 0.241*t12520;
  t13010 = 0. + t13005;
  t3123 = 0.241*t3122*t1884;
  t3544 = 0.241*t3540*t2190;
  t3672 = 0.241*t3613*t2527;
  t12002 = 0.241*t3122*t11911;
  t12015 = 0.241*t3540*t4810;
  t12016 = 0.241*t3613*t5114;
  t11446 = 0.241*t3122*t11286;
  t11470 = 0.241*t3540*t5481;
  t11475 = 0.241*t3613*t5494;
  t12797 = 0.241*t3613*t5968;
  t12805 = 0.241*t3122*t12621;
  t12819 = 0.241*t3540*t6764;
  t12477 = 0.241*t3613*t9284;
  t12487 = 0.241*t3122*t12398;
  t12501 = 0.241*t3540*t10208;
  t13187 = 0.241*t1998;
  t13192 = 0. + t13187;
  t13208 = 0.241*t1941;
  t13209 = 0. + t13208;
  t13254 = 0.241*t12445;
  t13269 = 0. + t13254;
  t1914 = 0.241*t1770*t1884;
  t2211 = 0.241*t2064*t2190;
  t2535 = 0.008474765*t342*t2527;
  t11912 = 0.241*t1770*t11911;
  t11919 = 0.241*t2064*t4810;
  t11920 = 0.008474765*t342*t5114;
  t11294 = 0.241*t1770*t11286;
  t11358 = 0.241*t2064*t5481;
  t11366 = 0.008474765*t342*t5494;
  t12741 = 0.008474765*t342*t5968;
  t12744 = 0.241*t1770*t12621;
  t12750 = 0.241*t2064*t6764;
  t12371 = 0.008474765*t342*t9284;
  t12406 = 0.241*t1770*t12398;
  t12408 = 0.241*t2064*t10208;
  t13559 = 0.241*t2613;
  t13573 = 0. + t13559;
  t13578 = 0.241*t2590;
  t13605 = 0. + t13578;
  t2721 = 0.241*t2718*t2190;
  t2732 = 0.241*t2726*t2527;
  t11949 = 0.241*t2718*t4810;
  t11963 = 0.241*t2726*t5114;
  t11404 = 0.241*t2718*t5481;
  t11409 = 0.241*t2726*t5494;
  t12726 = 0.241*t2726*t5968;
  t12736 = 0.241*t2718*t6764;
  t12324 = 0.241*t2726*t9284;
  t12363 = 0.241*t2718*t10208;
  t13521 = -0.03856*t2718;
  t13528 = 0.004820000000000004*t2726;
  t13532 = t13521 + t13528;
  t12907 = -0.03856*t3540;
  t12908 = 0.004820000000000004*t3613;
  t12915 = t12907 + t12908;
  t13161 = 0.00016949530000000016*t342;
  t13162 = -0.03856*t2064;
  t13173 = t13161 + t13162;
  t542 = 0.004820000000000004*t521;
  t723 = -0.03856*t701;
  t741 = t542 + t723;
  t11835 = 0.004820000000000004*t4428;
  t11846 = -0.03856*t4575;
  t11867 = t11835 + t11846;
  t11158 = 0.004820000000000004*t5227;
  t11159 = -0.03856*t5284;
  t11176 = t11158 + t11159;
  t12675 = 0.004820000000000004*t6432;
  t12691 = -0.03856*t8278;
  t12695 = t12675 + t12691;
  t12266 = 0.004820000000000004*t10017;
  t12270 = -0.03856*t11030;
  t12272 = t12266 + t12270;
  p_output1[0]=var2[17]*(-0.5*(0.482*t2527*t521 + 0.482*t2190*t701)*var2[0] - 0.5*t5500*var2[1] - 0.5*t5150*var2[2] - 0.5*t11098*var2[3] - 0.5*t8384*var2[4] - 0.5*(t3123 + t3544 + t3672 + 0.241*t3259*t521 + 0.241*t3334*t701)*var2[5] - 0.5*(t1914 + t2211 + t2535 + 0.241*t1941*t521 + 0.241*t1998*t701)*var2[15] - 0.5*(t2721 + t2732 + 0.241*t2590*t521 + 0.241*t2613*t701)*var2[16] - 0.5*t741*var2[17]);
  p_output1[1]=var2[17]*(-0.5*t5500*var2[0] - 0.5*(0.482*t5284*t5481 + 0.482*t5227*t5494)*var2[1] - 0.5*t11602*var2[2] - 0.5*t11788*var2[3] - 0.5*t11739*var2[4] - 0.5*(t11446 + t11470 + t11475 + 0.241*t3259*t5227 + 0.241*t3334*t5284)*var2[5] - 0.5*(t11294 + t11358 + t11366 + 0.241*t1941*t5227 + 0.241*t1998*t5284)*var2[15] - 0.5*(t11404 + t11409 + 0.241*t2590*t5227 + 0.241*t2613*t5284)*var2[16] - 0.5*t11176*var2[17]);
  p_output1[2]=var2[17]*(-0.5*t5150*var2[0] - 0.5*t11602*var2[1] - 0.5*(0.482*t4575*t4810 + 0.482*t4428*t5114)*var2[2] - 0.5*t12214*var2[3] - 0.5*t12112*var2[4] - 0.5*(t12002 + t12015 + t12016 + 0.241*t3259*t4428 + 0.241*t3334*t4575)*var2[5] - 0.5*(t11912 + t11919 + t11920 + 0.241*t1941*t4428 + 0.241*t1998*t4575)*var2[15] - 0.5*(t11949 + t11963 + 0.241*t2590*t4428 + 0.241*t2613*t4575)*var2[16] - 0.5*t11867*var2[17]);
  p_output1[3]=var2[17]*(-0.5*t11098*var2[0] - 0.5*t11788*var2[1] - 0.5*t12214*var2[2] - 0.5*(0.482*t10208*t11030 + 0.482*t10728*t12398 + 0.482*t10017*t9284)*var2[3] - 0.5*t12624*var2[4] - 0.5*(t12477 + t12487 + t12501 + 0.241*t10728*t12520 + 0.241*t10017*t3259 + 0.241*t11030*t3334)*var2[5] - 0.5*(t12371 + t12406 + t12408 + 0.241*t10728*t12445 + 0.241*t10017*t1941 + 0.241*t11030*t1998)*var2[15] - 0.5*(t12324 + t12363 + 0.241*t10017*t2590 + 0.241*t11030*t2613)*var2[16] - 0.5*t12272*var2[17]);
  p_output1[4]=var2[17]*(-0.5*t8384*var2[0] - 0.5*t11739*var2[1] - 0.5*t12112*var2[2] - 0.5*t12624*var2[3] - 0.5*(0.482*t5968*t6432 + 0.482*t12621*t7451 + 0.482*t6764*t8278)*var2[4] - 0.5*(t12797 + t12805 + t12819 + 0.241*t3259*t6432 + 0.241*t12520*t7451 + 0.241*t3334*t8278)*var2[5] - 0.5*(t12741 + t12744 + t12750 + 0.241*t1941*t6432 + 0.241*t12445*t7451 + 0.241*t1998*t8278)*var2[15] - 0.5*(t12726 + t12736 + 0.241*t2590*t6432 + 0.241*t2613*t8278)*var2[16] - 0.5*t12695*var2[17]);
  p_output1[5]=var2[17]*(-0.5*(t3123 + t3544 + t3672 + t12950*t521 + t12944*t701)*var2[0] - 0.5*(t11446 + t11470 + t11475 + t12950*t5227 + t12944*t5284)*var2[1] - 0.5*(t12002 + t12015 + t12016 + t12950*t4428 + t12944*t4575)*var2[2] - 0.5*(t12477 + t12487 + t12501 + t11030*t12944 + t10017*t12950 + t10728*t13010)*var2[3] - 0.5*(t12797 + t12805 + t12819 + t12950*t6432 + t13010*t7451 + t12944*t8278)*var2[4] - 0.5*(0.241*t12520*t3122 + t13010*t3122 + t12944*t3540 + 0.241*t3334*t3540 + t12950*t3613 + 0.241*t3259*t3613)*var2[5] - 0.5*(t13010*t1770 + t12944*t2064 + 0.241*t12445*t3122 + 0.035165*t12950*t342 + 0.241*t1998*t3540 + 0.241*t1941*t3613)*var2[15] - 0.5*(t12944*t2718 + t12950*t2726 + 0.241*t2613*t3540 + 0.241*t2590*t3613)*var2[16] - 0.5*t12915*var2[17]);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=var2[17]*(-0.5*(t1914 + t2211 + t2535 + t13209*t521 + t13192*t701)*var2[0] - 0.5*(t11294 + t11358 + t11366 + t13209*t5227 + t13192*t5284)*var2[1] - 0.5*(t11912 + t11919 + t11920 + t13209*t4428 + t13192*t4575)*var2[2] - 0.5*(t12371 + t12406 + t12408 + t11030*t13192 + t10017*t13209 + t10728*t13269)*var2[3] - 0.5*(t12741 + t12744 + t12750 + t13209*t6432 + t13269*t7451 + t13192*t8278)*var2[4] - 0.5*(0.241*t12520*t1770 + t13269*t3122 + 0.241*t2064*t3334 + 0.008474765*t3259*t342 + t13192*t3540 + t13209*t3613)*var2[5] - 0.5*(0.241*t12445*t1770 + t13269*t1770 + t13192*t2064 + 0.241*t1998*t2064 + 0.035165*t13209*t342 + 0.008474765*t1941*t342)*var2[15] - 0.5*(0.241*t2064*t2613 + t13192*t2718 + t13209*t2726 + 0.008474765*t2590*t342)*var2[16] - 0.5*t13173*var2[17]);
  p_output1[16]=var2[17]*(-0.5*(t2721 + t2732 + t13605*t521 + t13573*t701)*var2[0] - 0.5*(t11404 + t11409 + t13605*t5227 + t13573*t5284)*var2[1] - 0.5*(t11949 + t11963 + t13605*t4428 + t13573*t4575)*var2[2] - 0.5*(t12324 + t12363 + t11030*t13573 + t10017*t13605)*var2[3] - 0.5*(t12726 + t12736 + t13605*t6432 + t13573*t8278)*var2[4] - 0.5*(0.241*t2726*t3259 + 0.241*t2718*t3334 + t13573*t3540 + t13605*t3613)*var2[5] - 0.5*(t13573*t2064 + 0.241*t1998*t2718 + 0.241*t1941*t2726 + 0.035165*t13605*t342)*var2[15] - 0.5*(t13573*t2718 + 0.241*t2613*t2718 + t13605*t2726 + 0.241*t2590*t2726)*var2[16] - 0.5*t13532*var2[17]);
  p_output1[17]=(-0.5*t741*var2[0] - 0.5*t11176*var2[1] - 0.5*t11867*var2[2] - 0.5*t12272*var2[3] - 0.5*t12695*var2[4] - 0.5*t12915*var2[5] - 0.5*t13173*var2[15] - 0.5*t13532*var2[16])*var2[17];
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