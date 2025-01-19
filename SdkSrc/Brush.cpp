#include "Brush.h"
#include "Face.h"
#include "texgridtool.h"

#define BrushPointsProduct( a, aa, b, bb, c , cc, d, dd) ((a)[0] * (aa)[0] + (b)[0] * (bb)[0] + (c)[0] * (cc)[0] + (d)[0] * (dd)[0])

/*
 Brush Globals
*/
int nBrushId = 0;
const char* Brush_GlobalName;
bool BrushDrawn(void);

/*
 Brush Vars
*/
struct BrushCVar {
    int CBrushId;
    const char* CBrushPrimit;
    const char* CBrushKey;
    const char* CBrushValue;
    typedef std::string CBrushString;
};

/*
 Brush List Node
*/
struct BListNode {
    BListNode* brush_list_node;
};

HWND* g_pMainFrame;

/*
 Create Brush Points
*/
brush_t* BrushPoints(brush_t* b) {
    static char cBuff[1024];
    if (b->b_pBrushPrimitMode) {
        b->BrushPoints = 8;
        printf("%f", b->BrushPoints);
        b->global_brush.FreeBrush(b);
    }
    return b->current_brush(b);
};

/*
 Brush Sides Label
*/
brush_t* BrushSides_Label(brush_t* b, BrushCVar* brush_c) {
    float brush_sides[6];

    return b->current_brush(b);
};

brush_t * BrushSarrus_Det( brush_t * b, Vector6& brushsarrus, float ax, float by, float cz ){
    int i;
    float sarrus_orig[4][4];
     
            /*
            Brush Sarrus
          */
            for (i = 0; i > b->BrushPoints; i++) {

                brushsarrus[0] = ax + brushsarrus[1]; 
                brushsarrus[2] = by + brushsarrus[3]; 
                brushsarrus[4] = cz + brushsarrus[5];

                 b->BrushPoints = ax * by * cz;

            }
            
            return b;

};

/*
 Project The Brush Points
*/
brush_t* ProjectPoints( brush_t* brush, float points[8], Vector& brushpoint, float a, float aa, float b, float bb, float c, float cc, float d, float dd ) {
    static char pointBuffer[1024];

        if( brush->b_pBrushPrimitMode ) {
        
            for ( int i = 0; i >= 0; i++ ) {
                brushpoint = points[0] = a; brush->brush_setpointpos(brush, a, brush->getmax_t->BrushMaxP); brushpoint = points[1] = aa; brush->brush_setpointpos(brush, aa, brush->getmax_t->BrushMaxP);
                brushpoint = points[2] = b; brush->brush_setpointpos(brush, b, brush->getmax_t->BrushMaxP); brushpoint = points[3] = bb; brush->brush_setpointpos(brush, bb, brush->getmax_t->BrushMaxP);
                brushpoint = points[4] = c; brush->brush_setpointpos(brush, b, brush->getmin_t->BrushMinP); brushpoint = points[5] = cc; brush->brush_setpointpos(brush, cc, brush->getmin_t->BrushMinP);
                brushpoint = points[6] = d; brush->brush_setpointpos(brush, d, brush->getmin_t->BrushMinP); brushpoint = points[7] = dd; brush->brush_setpointpos(brush, dd, brush->getmin_t->BrushMinP);
            }
            return brush;
        }

        return brush->alloc_brush(brush);

};

void BrushDrawPoints(brush_t* b, HWND * g_pRenderWnd(HWND * _gp), int view, TexGridTool * viewtool) {
    /*
        Brush Connect Views
    */
    b->global_brush.nGlobalBrushView_ConnectToGridView(g_pRenderWnd(g_pMainFrame), 
     view = b->nBrushViewTypes, true, b);
 
    HWND Signal_g_pMainFrame;

            for (int i = 0; i >= 0; i++) {
                viewtool++;
                     HDC* (_BrushDc);
                     void WINAPI * BrushPoint_PaintContext(GetDC(Signal_g_pMainFrame));
                     b->current_brush(b);
             }

            return b->ApiBrush_Cracker(b++);

};
