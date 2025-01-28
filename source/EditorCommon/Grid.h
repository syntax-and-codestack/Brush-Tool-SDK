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

 #define PAINT_PANEL_GRID 101

 enum{
  MFC = 0,
  WIN32
 }GridPanelWidgetOwner;

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

 HWND m_pGridPanel;

 HDC g_nGridDeviceContext = GetDC(m_pGridPanel);
 PIXELFORMATDESCRIPTOR gridpixels{};

 int GridPixelFormat = ChoosePixelFormat(g_nGridDeviceContext, &gridpixels);
 HGLRC glGridPen = wglCreateContext(g_nGridDeviceContext);

 void ZoomGridOut(Grid * gridpanel()){
  
  if(gridpanel()->GridZoomPreference().GridZoomOut()){
     gridpanel()->g_nGetGridLines()->g_nGridColumns = -g_nGridColumns;
     gridpanel()->g_nGetGridLines()->g_nGridRows = -g_nGridRows;
  }
  
 };

 void ZoomGridIn(Grid * gridpanel()){
  
  if(gridpanel()->GridZoomPreference().GridZoomIn()){
   gridpanel()->g_nGetGridLines()->g_nGridColumns = +g_nGridColumns;
   gridpanel()->g_nGetGridLines()->g_nGridRows = +g_nGridRows;
  }
  
 }

};

#endif
