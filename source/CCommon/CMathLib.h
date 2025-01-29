#pragma once
#ifndef C_MATH_LIB_H
#define C_MATH_LIB_H

typedef float c_vec_t;
typedef c_vec_t c_vec3_t[3];
typedef c_vec_t c_vec4_t[4];
typedef c_vec_t c_vec6_t[6];

bool c_vec_polar;

#include <math.h>

double dist;

typedef double c_decimal_t;
typedef int c_object_t;

class CMATHLIB_H;

void CCos(c_decimal_t* _D);
void CSin(c_decimal_t* _D);

#endif