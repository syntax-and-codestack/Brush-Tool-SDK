/*Brush.h*/
#ifndef BRUSH_H
#define BRUSH_H

#include "Plane.h"

class brush_t{
public:
 brush_t();
 virtual ~brush_t();

 int BrushNumberId;
 brush_t& brush_module_t;

virtual void DrawBrushToView(brush_t * b, plane_t * p, winding_t * w, int nViewType) = 0;

};

#endif
