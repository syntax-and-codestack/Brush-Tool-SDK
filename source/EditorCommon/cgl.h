//cgl.h copyright@ hunter manko
#pragma once
#ifndef CGL_H
#define CGL_H

#include <Windows.h>

#define (_Win32)
#ifndef (!_Win32)
  #define WINAPI
#endif

typedef float VColorId[4];
#define CGL_PEN_RED
#define CGL_PEN_WHITE
#define CGL_PEN_GREEN
VColorId * vecc_id;
HGLRC CGL_GL_CONTEXT;
HGLRC BRUSH_HIGHLIGHT;
HGRLC ENTITY_HIGHLIGHT;
HGRLC MODEL_HIGHLIGHT;

#endif
