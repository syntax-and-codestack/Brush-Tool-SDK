#pragma once
#ifndef GRID_H
#define GRID_H

//Grid.h copyright@ hunter manko

template<typename GridPanel>class CGrid{
public:
 CGrid();
 ~CGrid();

 int x;
 int y;

 #define PAINT_PANEL_GRID 10

 enum{
  MFC = 0,
  WIN32
 }GridPanelWidgetOwner;

 enum{
  XY = 0,
  YZ,
  XZ
 }GridPanelView;

virtual void Paint() = 0;

};

class Grid{
public:
 Grid();
  ~Grid();

 std::size_t g_nGridSize = sizeof(Grid);

 int          g_nGridColumns;
 int          g_nGridRows;

 int * g_nGetGridLines();

 bool GridZoomIn();
 bool GridZoomOut();
 bool & GridZoomPreference();

 Grid * prev_grid;
 Grid * current_grid;
 Grid * next_grid;

 void GridAddToPanel(HWND m_pPanel, Grid * grid);
 Grid & GridDevice();

 HWND m_pGridPanel;//grid panel

 HDC g_nGridDeviceContext = GetDC(m_pGridPanel);//set device panel
 PIXELFORMATDESCRIPTOR gridpixels{};//pfe

 int GridPixelFormat = ChoosePixelFormat(g_nGridDeviceContext, &gridpixels);//pixel format for grid panel
 HGLRC glGridPen = wglCreateContext(g_nGridDeviceContext);//opengl context for grid

/*Zoom Grid Out*/
void ZoomGridOut(Grid * gridpanel()){  
  if(gridpanel()->GridZoomPreference().GridZoomOut()){
     gridpanel()->g_nGetGridLines()->g_nGridColumns = -g_nGridColumns;
     gridpanel()->g_nGetGridLines()->g_nGridRows = -g_nGridRows;
  }  
};

/*Zoom Grid In*/
void ZoomGridIn(Grid * gridpanel()){  
   if(gridpanel()->GridZoomPreference().GridZoomIn()){
    gridpanel()->g_nGetGridLines()->g_nGridColumns = +g_nGridColumns;
    gridpanel()->g_nGetGridLines()->g_nGridRows = +g_nGridRows;
  }  
};

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

LPSTR * GridTitleXY = "XY VIEW";
LPSTR * GridTitleYZ = "YZ VIEW";
LPSTR * GridTitleXZ = "XZ VIEW";

typedef bool g_nboolean;

g_nboolean GridFlushTitle;

bool AddBrushToScene;
bool AddModelToScene;
bool AddEntitiesToScene;

Grid * Add();

void GridDimensions(Grid * grid(), int nDim){
 switch(nDim){
   case 112:
    grid()->g_nSetColumns = 112; 
    grid()->g_nSetRows = 112;
   break;
  
   case 256:
    grid()->g_nSetColumns = 256; 
    grid()->g_nSetRows = 256;
   break;
  
   case 512:
    grid()->g_nSetColumns = 512; 
    grid()->g_nSetRows = 512;
   break;
  
   case 1024:
    grid()->g_nSetColumns = 1024; 
    grid()->g_nSetRows = 1024;
   break;
  } 
};

};

#endif
