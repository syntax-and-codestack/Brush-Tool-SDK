/*Polar Brush Includes*/
#include "afx.h"
#include "Stdafx.h"
#include "Grid.h"

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

/*
  Brush Diameter

        d
  rad = -
        2 
*/
#define BrushDiameter (d, rad) ((rad)[0] = (d)[0] / 2)

/*
  Brush Volume & Height

          _____________
 r =   \ |      V
        \|     ---
             pi * h
  
*/
#define BrushVH (r, V, h, pi) ((r)[0] = 2^ (V)[0] / (pi)[0] * (h)[0])

/*
  Brush Surface Area

      SA - 2pi * h^2
  r = --------------
         2pi * h  
*/
#define BrushSurfaceArea (r, h, SA) ( (r)[0] = (SA)[0] - 2(pi)[0] * (h^2)[0] / 2(pi)[0] * (h)[0])

class _q_epolarglobals{
public:
  qboolean qbrushpolarprimit_mode;
};

_q_epolarglobals& q_epolarglobals;

/*
  instead of a standard vector grid it constructs to a polar grid
     its a grid that drags along circular lines not square  
*/
void Signal_GridType(Grid * grid, int GridFormatId){
    if(q_epolarglobals.qbrushpolarprimit_mode){
      GridFormatId == grid->CPolarGrid;
    }
};

//polar brush name
#ifdef CSG_BRUSH
const char * PolarBrushName(brush_t * b){
static char cBuff[1024];
b->BrushNumberId = p_rBrushId++;
  if(q_epolarglobals.qbrushpolarprimit_mode){
     sprintf(cBuff, "Brush %i", b->BrushNumberId);
  }
  return cBuff;
};
#endif

#define POLAR_BRUSH_SIDES 32

typedef struct polarside_t{
 vec3_t polarside_vector;
 float psidesize = sizeof(*polarside_t);
 int side[32];
 vec_t _tail;
};

typedef struct polarbrush_t{
  vec3_t position;
  vec3_t scale;
  qboolean _selected;

 void brushsides(polarbrush_t * brush, polarside_t * _side);
};

typedef struct polartexdef_t{
  vec3_t texstretch;
  float shift[2];
  const char * pTextureName;

 void polarbrushtexdef(polarbrush_t * brush, polartexdef_t * texdef, const char * pTextureName);
};

//after found in tree free the polar brush
const void PolarBrushTree(int sidecount){
int i;
polarbrush_t brush;
polarside_t * sides;   
  for(i = 0; brush; sides; brush++; sides++){
     sidecount = sides->side[i][0] *= sidecount = sides->side[i][31];
   free(sides[i++]);
     brush[i].brushsides(brush, sides);
   free(brush[i++]);
  }  
};


