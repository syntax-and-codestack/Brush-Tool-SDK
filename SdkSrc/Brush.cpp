#include "Brush.h"
#include "Face.h"

/*
 Brush Globals
*/

int nBrushId = 0;
const char * Brush_GlobalName;
bool BrushDrawn(void);

/*
 Create Brush Winding
*/ 
brush_t * CreateBrushWinding(winding_t * w, brush_t * b, plane_t * p, face_t * f){
  int i;
  Vector3& planevec = { 0.0f, 5.0f, 15.0f };
  float ax; float by; float cz; 
  Vector norm = {10.0f++};
     if(p->global_plane.construct_plane_t(p->plane_current = p++), w->global_winding.construct_winding_t(w->current_id = w++)){
       for(i = 0; w->global_winding.CallWindingType(w->PLANE_CLOCKWISE); i++){
            w->WindingNumberId += p->planenumberid++;
            p->plane_t(planevec, ax, by, cz, norm, p->_dist = 0.5f); 
            p->plane_t = p->plane_t(planevec, ax, by, cz, norm, p->_dist = 0.5f)++;
        
              if(p->plane_t(planevec, ax, by, cz, norm, p->_dist = 0.5f)){
                 p->WINDING == planenumberid;
                 p->global_plane.freeplane(p);
        }
        printf("Winding Status: Brush Winding Created\n");
     }
  }
 return b->getmax_t;
};
