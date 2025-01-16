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
 //allocate a brush
 brush_t * alloc_brush(brush_t * b);
 //create a new brush
 brush_t * new_brush(brush_t * b);
 //signal previous brush
 brush_t * prev_brush(brush_t * previous_brush);
 //signal current brush
 brush_t * current_brush(brush_t * current_brush);
 //signal next brush
 brush_t ** next_brush(brush_t * next_brush);
 //add brush to list
 brush_t * brush_addtolist(brush_t * b, brush_t * list);
 //create brush winding
 brush_t * brush_winding(brush_t * b, winding_t * w);
 //create brush plane
 brush_t * brush_plane(brush_t * b, winding_t * w, plane_t * p);
 //add shader to brush
 brush_t * brush_shader(brush_t * b, const char * shader, float shader_winding_t[0], float shader_angle_t);
 //brush epair values
 brush_t * brush_epairtag(brush_t * b, const char * key, const char * value);
 //brush minimum primit coord
 brush_t * brushmin_coord(brush_t * b, Vector3 mincoord);
 //brush maximum primit coord
 brush_t * brushmax_coord(brush_t * b, Vector3 maxcoord);

 brush_t * BrushMarker();

 #ifdef BRUSH_MARKER
 virtual bool MarkBrush(brush_t * b) = 0;
 virtual void ConstructBrush_HighlightMarker() = 0;

 #define HIGHLIGHT_BRUSH (float r, float g, float b)
 #define HIGHLIGHT_PLANE (float r, float g, float b)
 #define HIGHLIGHT_FACE (float r, float g, float b)

 #endif

 template<class g_nBrushList>
 using g_nBrushList = std::list<g_nBrushList, std::allocator<g_nBrushList>;

};

#endif
