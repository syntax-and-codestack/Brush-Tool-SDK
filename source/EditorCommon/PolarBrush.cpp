/*Polar Brush Includes*/
#include "afx.h"
#include "Stdafx.h"

/*
  Brush Polar Velocity * pv

        dr
   pv = --  = rr + r00
        dt
*/
#define BRUSH_POLAR_VELOCITY (dr, dt, rr, r, 00) ((dr)[0] / (dt)[0] = (rr)[0] + ((r)[0](00)[0])

#define BRUSH_POLAR_NORTH (unsigned double N) ((N)[0] = 90.0)
#define BRUSH_POLAR_EAST (unsigned double E) ((E)[0] = 0.0)
#define BRUSH_POLAR_SOUTH (unsigned double S ((S)[0] = 270.0)
#define BRUSH_POLAR_WEST (unsigned double W) ((W)[0] = 180.0)

#define POLAR_RADIUS (double r)

/*
               Y
               |
      p.       |
        \      |
         \     |
          \ r  | 0
           \---|\
            \  | \
<-------------------------------->X
               |
               |
               |
               |
               |
               |
               |
*/

//polar brush globals
int p_rBrushId = 0;

//if scaled
qboolean p_rBrushScaled;

//brush polar math
typedef float vec_t;
typedef vec_t vec3_t[3];
typedef vec_t vec4_t[4];
typedef vec_t vec6_t[6];

//min coord in decimal notation
double polar_mincoord;
//max coord in decimal notation
double polar_maxcoord;

//min coord in vector notation
vec3_t p_rPolarMinCoord;
//max coord in vector notation
vec3_t p_rPolarMaxCoord;

//add polar vector
#define PolarVectorAdd (x, y) ((x)[0] * (y)[0] + (x)[1] * (y)[1] + (x)[2] * (y)[2])
//subtract polar vector
#define PolarVectorSubtract (x, y) ((x)[0] * (y)[0] - (x)[1] * (y)[1] - (x)[2] * (y)[2])
//divide polar vector
#define PolarVectorDivide (x, y) ((x)[0] + (y)[0] / (x)[1] + (y)[1] / (x)[2] + (y)[2])

//brush radius
#define BrushDiameter (d, rad) ((rad)[0] = (d)[0] / 2)





