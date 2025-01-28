#pragma once
#pragma once
#ifndef GRID_H
#define GRID_H

//Grid.h copyright@ hunter manko

#include "winapi.h"

class CGrid {
public:
    CGrid();
    ~CGrid();

    int x;
    int y;

#define PAINT_PANEL_GRID 10

    enum {
        MFC = 0,
        WIN32
    }GridPanelWidgetOwner;

    int XY;
    int YZ;
    int XZ;

    virtual void Paint() = 0;

};

class Grid {
public:
    Grid();
    ~Grid();

    std::size_t g_nGridSize = sizeof(Grid);

    int          g_nGridColumns;
    int          g_nGridRows;

    Grid* g_nGetGridLines();

    bool GridZoomIn;
    bool GridZoomOut;
    bool * GridZoomPreference();

    void ZoomIn(Grid* m_pPanel()) {
        if (GridZoomIn) {
            m_pPanel()->g_nGetGridLines()->current_grid->g_nGridColumns++;
            m_pPanel()->g_nGetGridLines()->current_grid->g_nGridRows++;
        }
    };

    void ZoomOut(Grid* m_pPanel()) {
        if (GridZoomOut) {
            m_pPanel()->g_nGetGridLines()->current_grid->g_nGridColumns--;
            m_pPanel()->g_nGetGridLines()->current_grid->g_nGridRows--;
        }
    };

    Grid* prev_grid;
    Grid* current_grid;
    Grid* next_grid;

    void GridAddToPanel(HWND m_pPanel, Grid* grid);
    Grid& GridDevice();

    HWND m_pGridPanel;//grid panel

    HDC g_nGridDeviceContext = GetDC(m_pGridPanel);//set device panel
    PIXELFORMATDESCRIPTOR gridpixels{};//pfe

    int GridPixelFormat = ChoosePixelFormat(g_nGridDeviceContext, &gridpixels);//pixel format for grid panel
    HGLRC glGridPen = wglCreateContext(g_nGridDeviceContext);//opengl context for grid

    //grid view id
    int g_nGridViewId;

    //paint grid 
    virtual void PaintGrid() = 0;
    //paint columns
    virtual void PaintColumms() = 0;
    //paint rows
    virtual void PaintRows() = 0;
    //paint objects *brushes, models, entities*
    virtual void PaintObjects() = 0;

    const char *  GridTitleXY = "XY VIEW";
    const char *  GridTitleYZ = "YZ VIEW";
    const char *  GridTitleXZ = "XZ VIEW";

    typedef bool g_nboolean;

    g_nboolean GridFlushTitle;

    bool AddBrushToScene;
    bool AddModelToScene;
    bool AddEntitiesToScene;

    Grid* Add();

    void GridDimensions(Grid* grid(), int nDim) {
        switch (nDim) {
        case 112:
            grid()->g_nGridColumns = 112;
            grid()->g_nGridRows = 112;
            break;

        case 256:
            grid()->g_nGridColumns = 256;
            grid()->g_nGridRows = 256;
            break;

        case 512:
            grid()->g_nGridColumns = 512;
            grid()->g_nGridRows = 512;
            break;

        case 1024:
            grid()->g_nGridColumns = 1024;
            grid()->g_nGridRows = 1024;
            break;
        }
    };

};

#endif