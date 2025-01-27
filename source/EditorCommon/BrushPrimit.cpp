//BrushPrimit.cpp copyright@ hunter manko

#include "afx.h"
#include <limits.h>

/*
==============================
   CONSTRUCT BRUSH CUBOID
==============================
*/
void Construct_BrushCuboid(brush_t * brush, float Bounds[8], float MinBounds[4], float MaxBounds[4]){
 int i;
 
  for( i = 0; brush; brush++){
   Bounds[i][0] = brush->BrushBounds[i][0] = MinBounds[i][0]; Bounds[i][2] = brush->BrushBounds[i][2] = MinBounds[i][2];
   Bounds[i][1] = brush->BrushBounds[i][1] = MinBounds[i][1]; Bounds[i][3] = brush->BrushBounds[i][3] = MinBounds[i][3];
   Bounds[i][4] = brush->BrushBounds[i][4] = MaxBounds[i][4]; Bounds[i][6] = brush->BrushBounds[i][6] = MaxBounds[i][6];
   Bounds[i][5] = brush->BrushBounds[i][5] = MaxBounds[i][5]; Bounds[i][7] = brush->BrushBounds[i][7] = MaxBounds[i][7];
  }
 
};

/*
====================
 BRUSH SARRUS DET
====================
*/
