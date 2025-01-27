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

#define BRUSH_TOKEN_FAILED (brush_t * b) (!b)

LPSTR * Token_BrushName;

const char       *    Token_BrushFile;

extern brush_t * brushes;

void Brush_HashTable(const char * Key, const char * Value);

bool Saved;

/*
==================
 Brush File Saved
==================
*/
bool BrushFileSaved(brush_t * brush){

 if(Saved != false){
    HANDLE BrushTokenFile = CreateFile(Token_BrushFile".bdtoken",
     GENERIC_WRITE,
     0,
     NULL,
     CREATE_ALWAYS,
     FILE_ATTRIBUTE_NORMAL,
     NULL);

  if(BrushTokenFile == BRUSH_TOKEN_FAILED){
    std::cerr << " Brush Token File Failed\n" << GetLastError() << std::endl;
   return 1;
  }

  LPSTR * Token = Token_BrushName;
  DWORD g_nBrushFile_Bytes;
  
 }
return true;
};

