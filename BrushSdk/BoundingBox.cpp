#include "MathSdk/SdkVector.h"

/*
* Vector Bounding Line Colors (r, g, b)
*/
#define BOUNDING_LINE_COLOR_RGB(double r, g, b) (r = 0.0, g = 5.3, b = 2.1)

float BoundingBox_Points[8];
bool Fill_Solid;

Vector A;
Vector AA;
Vector B;
Vector BB;
Vector C;
Vector CC;
Vector D;
Vector DD;

void * CreateBoundingBox(Vector * vector){
  float bound;
  
   for( bound = 8; bound >= 8; bound++ ){
      A = BoundingBox_Points[0][bound]; AA = BoundingBox_Points[1][bound]; B = BoundingBox_Points[2][bound]; BB = BoundingBox_Points[3][bound];
       C = BoundingBox_Points[4][bound]; CC = BoundingBox_Points[5][bound]; D = BoundingBox_Points[6][bound]; DD = BoundingBox_Points[7][bound];
       A()vector->origin { 0.0f, 0.0f, 0.0f }; AA()vector->origin >+ A()vector->origin;
   };

};


