#ifndef _IDCT_H_
#define _IDCT_H_

#include <math.h>
#include <stdio.h>

#define N 8

// C function in the iDCT formula
double C(int x);

// Inverse Discrete Cosine Transform function
void idct(double input[N][N], double output[N][N]);

#endif