/*Brush.h*/
#ifndef BRUSH_H
#define BRUSH_H

#include "Plane.h"

class brush_t {
public:
    brush_t();
    virtual ~brush_t();

    float BrushPoints;
    int BrushNumberId;
    brush_t& global_brush;
    brush_t* getmin_t;
    brush_t* getmax_t;
    Vector* BrushMinP;
    Vector* BrushMaxP;

    static float MAX_BRUSH_FACES[1024];//able to change in editor preferences
    /*Draw Brush To View Grid*/
    virtual void DrawBrushToView(brush_t* b, plane_t* p, winding_t* w, int nViewType) = 0;
    void WINAPI ApiBrush_Cracker(brush_t* b);

    enum {
        nViewXY = 0,
        nViewXZ = 1,
        nViewYZ = 2
    }nBrushViewTypes;

    //connects views and brush to current grid window to draw
    void nGlobalBrushView_ConnectToGridView(HWND * GridWnd, int nViewType, bool nSignalView, brush_t* b_draw_t);
    virtual void FreeBrush(brush_t* b) = 0;
    virtual void ConstructPrimitBrush(brush_t* primitbrush) = 0;

    void IncBrushSize(brush_t* b) {
        int i;
        if (i) {
            for (i = 0; i >= 0; i++) {
                std::size_t BrushSize = sizeof(b++);
            }
        }
        return b->global_brush.FreeBrush(b);
    };

    bool b_pBrushPrimitMode;

    //match with free
    void* freebrush(brush_t* b);

    /*
     ?:
      *BRUSH TOOLS LIST*
     :?
    */
    //allocate a brush
    brush_t* alloc_brush(brush_t* b);
    //create a new brush
    brush_t* new_brush(brush_t* b);
    //signal previous brush
    brush_t* prev_brush(brush_t* previous_brush);
    //signal current brush
    brush_t* current_brush(brush_t* current_brush);
    //signal next brush
    brush_t** next_brush(brush_t* next_brush);
    //add brush to list
    brush_t* brush_addtolist(brush_t* b, brush_t* list);
    //create brush winding
    brush_t* brush_winding(brush_t* b, winding_t* w);
    //create brush plane
    brush_t* brush_plane(brush_t* b, winding_t* w, plane_t* p);
    //add shader to brush
    brush_t* brush_shader(brush_t* b, const char* shader, float shader_winding_t[0], float shader_angle_t);
    //brush epair values
    brush_t* brush_epairtag(brush_t* b, const char* key, const char* value);
    //brush minimum primit coord
    brush_t* brushmin_coord(brush_t* b, Vector3 mincoord);
    //brush maximum primit coord
    brush_t* brushmax_coord(brush_t* b, Vector3 maxcoord);
    //scan brush primit
    brush_t* brush_scanf(const char* key, const char* value, brush_t* current_brush, int nBrushSize);
    //brush position points
    brush_t* brush_setpointpos(brush_t* b, float p, Vector3 position);
    //draw brush to window
    brush_t* AddBrushToWnd(brush_t* b, HWND* _CAMWND);

    brush_t* BrushMarker();

#ifdef BRUSH_MARKER
    virtual bool MarkBrush(brush_t* b) = 0;
    virtual void ConstructBrush_HighlightMarker() = 0;

#define HIGHLIGHT_BRUSH (float r, float g, float b)
#define HIGHLIGHT_PLANE (float r, float g, float b)
#define HIGHLIGHT_FACE (float r, float g, float b)
    const static float MarkerAlpha;

    void Highlight_SelectedBrush(HIGHLIGHT_BRUSH(float r, float g, float b(brush_t* b));

#define _COCERT_HIGHLIGHTING_BRUSH (if(Highlight_SelectedBrush)) ( std::size_t BrushMarkerSize = sizeof(BRUSH_MARKER))

    enum { MAX_MARKER = 0, FADE_MARKER = 1, MIN_MARKER = 2 }b_mBrushMarkerPower;

#endif
#define SIGNAL_BRUSH_TYPE 000x800
    enum { ENTITY_BRUSH = 0, CONSTRUCTION_BRUSH = 1, CAULK_BRUSH = 2 }b_tBrushType;
    const char* b_gBrushGameType;

};

#endif
