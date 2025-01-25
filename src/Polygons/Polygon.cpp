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


