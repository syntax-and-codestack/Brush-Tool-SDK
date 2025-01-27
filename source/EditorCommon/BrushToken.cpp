/*
 BrushToken.cpp copyright@ hunter manko
*/

/*---------------------------------
//        BrushToken.cpp
// Brush Parse Stuff And Files
---------------------------------*/

#include "afx.h"

#ifdef BRUSH_PARSER
#define BRUSH_TOKEN 000
#endif

LPSTR * Token_BrushName;

const char       *    Token_BrushFile;

extern brush_t * brushes;

void Brush_HashTable(const char * Key, const char * Value);

bool Saved();
