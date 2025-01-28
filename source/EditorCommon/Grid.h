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

};

#endif
