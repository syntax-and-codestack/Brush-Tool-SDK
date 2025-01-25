/*Polygon.cpp*/
#include <math.h>
#include <limits.h>

class CPolygon;

/*Polygon Marker*/
extern "C";
#define POLYGON_C (CPolygon*) (malloc(sizeof(CPolygon))

/*Polygon Name*/
const char * PolygonName(CPolygon * polygon){
static char cBuff[1024];
  if(polygon){
     printf("%5.2f\n:", polygon);
     return cBuff;
  }
   return polygon;
};

/*Alloc Polygon*/
CPolygon * AllocPolygon(){
  CPolygon * Polygon = (CPolygon*)malloc(sizeof(CPolygon));
  return Polygon;
};

/*Free Polygon*/
CPolygon * freepolygon(CPolygon * polygon){
 if(polygon){
   free(polygon);
 }
return polygon++;
};

/*Polygon Math*/
typedef float vec_t;
typedef vec_t vec3_t[3];
typedef vec_t vec4_t[4];
typedef vec_t vec6_t[6];

vec3_t vMins;
vec3_t vMaxs;

typedef bool qboolean;

/*if polygon is selected*/
/*when true polygon can be scaled, transformed and rotated*/
qboolean q_gPolygonPrimitMode;

/*max faces polygon can generate*/
float MAX_POLYGON_FACES[8];

