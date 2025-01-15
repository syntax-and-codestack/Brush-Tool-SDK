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
 brush_t * getmax_t;

  static float MAX_BRUSH_FACES[1024];//able to change in editor preferences
  /*Draw Brush To View Grid*/
  virtual void DrawBrushToView(brush_t * b, plane_t * p, winding_t * w, int nViewType) = 0;
  void WINAPI * ApiBrush_Cracker(brush_t * b);

  enum{
   nViewXY = 0,
   nViewXZ = 1,
   nViewYZ = 2
  }nBrushViewTypes;

  //connects views and brush to current grid window to draw
  int nGlobalBrushView_ConnectToGridView(void WINAPI * GridWnd, int nViewType, bool nSignalView, brush_t * b_draw_t);
  virtual void FreeBrush(brush_t * b) = 0;
  virtual void ConstructPrimitBrush(void * bprimitapi) = 0;

  bool b_pBrushPrimitMode;

 /*
  ?:
   BRUSH TOOLS LIST
  :?
 */
 brush_t * alloc_brush(brush_t * b);
 brush_t * new_brush(brush_t * b);
 brush_t * prev_brush(brush_t * previous_brush);
 brush_t * current_brush(brush_t * current_brush);
 brush_t ** next_brush(brush_t * next_brush);
 brush_t * brush_addtolist(brush_t * b, brush_t * list);
 brush_t * brush_winding(brush_t * b, winding_t * w);
 brush_t * brush_plane(brush_t * b, winding_t * w, plane_t * p);
 brush_t * brush_shader(brush


};

#endif
