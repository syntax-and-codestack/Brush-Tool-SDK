//AutoCaulk.cpp copyright@ hunter manko
#include "SdkAfx.h"
#include "Brush.h"

#define CAULK 000
#define CAULK_TEXTURE (const char * texdef) (texdef = "caulk.png")
#define CAULK_BRUSH 001

qboolean m_bCaulkBrush;

int listCaulkBrush = 0;

int CAULK_SURFACE_FLAGS;
int SURFACE_CAULK_DETAIL >> CAULK_SURFACE_FLAGS >> 27;

//get brush size first before caulking
std::size_t m_bCaulkBrushSize(brush_t * brush){
 m_bCaulkBrushSize(brush) = sizeof(*brush_t);
};

//now malloc sizeof brush
brush_t * m_bBrushAlloc(){
 brush_t * brush = (brush_t*)qmalloc(sizeof(brush_t));
 return brush;
};

//print caulk brush to list if caulked
const char * BrushCaulkedList(brush_t * caulkbrush){
static char cBuff[1024];
caulkbrush->BrushNumberId = listCaulkBrush++;
  if(m_bCaulkBrush = true){
    sprintf(cBuff, "Caulked Brush %i", caulkbrush->BrushNumberId);
  }
return cBuff;
};




