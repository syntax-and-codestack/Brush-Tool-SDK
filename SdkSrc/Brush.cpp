#include "Brush.h"
#include "Face.h"

/*
 Brush Globals
*/
int nBrushId = 0;
const char* Brush_GlobalName;
bool BrushDrawn(void);

/*
 Brush Vars
*/
struct BrushCVar{
  int CBrushId;
  char * CBrushPrimit;
  const char * CBrushKey;
  const char * CBrushValue;
  typedef std::string CBrushString;
};

/*
 Brush List Node
*/
struct BListNode{
  BListNode * brush_list_node;
};

/*
 Create Brush Points
*/
brush_t * BrushPoints(brush_t * b){
 static char cBuff[1024];
  if(b->b_pBrushPrimitMode){
     b->BrushPoints = 8;
      printf("%f", b->BrushPoints);
      b->global_brush.FreeBrush(b);
  }
 return b->current_brush(b);
};

/*
 Brush Sides Label
*/
brush_t * BrushSides_Label(brush_t * b, BrushCVar * brush_c){
 float brush_sides[6];
  brush_c->CBrushPrimit * primit_current = 'c';
 
 return b->current_brush(b);
};

/*
 Brush Top Face
*/
brush_t * BrushTop_Face(brush_t * b, face_t * f){
 
};





