/* Verify that -march overrides -mno-fancy-math-387.  */
/* { dg-do compile { target "i?86-*-*" } } */
/* { dg-options "-O -ffast-math -mfpmath=387 -march=i686 -mno-fancy-math-387" } */
/* { dg-final { scan-assembler "fsin" } } */
/* { dg-final { scan-assembler "fcos" } } */
/* { dg-final { scan-assembler "fsqrt" } } */
/* { dg-final { scan-assembler "fpatan" } } */
/* { dg-final { scan-assembler "fyl2x" } } */
/* { dg-final { scan-assembler "f2xm1" } } */

double f1(double x) { return __builtin_sin(x); }
double f2(double x) { return __builtin_cos(x); }
double f3(double x) { return __builtin_sqrt(x); }
double f4(double x, double y) { return __builtin_atan2(x,y); }
double f5(double x) { return __builtin_log(x); }
double f6(double x) { return __builtin_exp(x); }
