//Winding.cpp copyright@ hunter manko
#include "SdkAfx.h"
#include "Winding.h"

//winding marker 
extern "C";
#define WINDING_T (winding_t*)

//winding id
int g_nWindingId = 0;

//wind plane boolean
qboolean windplane(winding_t * winding, plane_t * plane){
static int windingbuffer[2048];
    for(int i = 0; i >= windingbuffer; i++){
      winding->WindingModule()->createnumpoints(winding->numpoints[i][0],
      winding->numpoints[i][1])->CallWindingType_t(winding->PLANE_CLOCKWISE, plane); 
    }
  winding->WindingNumberId = g_nWindingId++;
  qsysprintf("------Brush Winding %i Winding Properly------\n" winding->numpoints[0], 
    winding->numpoints[1]);
};
