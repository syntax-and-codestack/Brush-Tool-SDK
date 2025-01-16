#include "Plane.h"
#include "Brush.h"
#pragma region MAP

extern plane_t * active_planes;
extern plane_t * selected_planes;
extern winding_t * active_winding;
extern brush_t * active_brushes;
extern brush_t * selected_brushes;

class Map{
public:
  Map(const char * mapname, std::size_t mapsize);
   virtual ~Map();

  int MapNumberid;
  const char * MapName;
  bool save_map(Map * current_map);
  bool cancel_map(Map * current_map);
  bool load_map(Map * current_map);

    virtual void constructMap(Map * map) = 0;

    /*WINAPI Modules*/
    void WINAPI ApiObservor_GetMaps(Map * map, HWND hwndDatabase);
    void WINAPI ApiMap_GetTextures();
    void WINAPI ApiMap_GetEntities();
    void WINAPI ApiMap_GetBrushes();
    void WINAPI ApiMap_GetModels();
    void WINAPI ApiMap_GetPlanes();
    void WINAPI ApiMap_GetFaces();

    /*?:
      WINAPI Get Map Size
    :?*/
    void WINAPI * ApiMap_GetSize(){
      std::size_t MapSize = sizeof(Map);
    };

    


};

#pragma endregion
