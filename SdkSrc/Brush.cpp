#include "Brush.h"
#include "Face.h"

/*
 Brush Globals
*/

int nBrushId = 0;
const char* Brush_GlobalName;
bool BrushDrawn(void);

/*
 Create Brush Winding
  <?>
   : Create Plane Winding For All Faces On Brush
  <?>
*/
/*
 MODIFIED:?
brush_t* CreateBrushWinding(winding_t* w, brush_t* b, plane_t* p, face_t* f) {
    /*
        winding variables
    int i;
    Vector3 planevec;
    float ax; float by; float cz;
    Vector norm = { 10.0f };
                /*
                    construct plane and winding types
                
                p->global_plane.construct_plane_t(p->plane_current = p++, w->current_id = w++); 
                w->global_winding.construct_winding_t(w->global_winding.NewWinding(w));
                    w->createnumpoints(w->numpoints);
                    p->global_plane.NewPlane();
                    /*
                        memory allocate size of current plane
                    
                    plane_t* CurrentPlane = (plane_t*)malloc(sizeof(plane_t));
                    CurrentPlane = p;
                    /*
                        free the plane
                    
                    p->global_plane.freeplane(p = CurrentPlane);

     /*
        print winding message
    printf("Winding Status: Brush winding created successfully\n");


};
*/

/*
 ============
  BRUSH VARS
 ============
*/
struct BrushCVars{
  int CBrushId;
  char * CBrushPrimit;
  const char * CBrushKey;
  const char * CBrushValue;
  typedef std::string CBrushString;
};




