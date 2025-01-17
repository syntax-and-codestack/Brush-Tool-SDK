/*plane.cpp*/
#include "Plane.h"

struct PlaneListNode{
  PlaneListNode * plistnode;
};

/*
  Create Normal Plane
*/
plane_t * CreateNormalPlane(plane_t * p, Vector _normal, float ax, float by, float cz, float dist){
  int pNodeSurface_Flags = 32;

    dist = p->_dist;
    _normal = p->normal;

  for(pNodeSurface_Flags; pNodeSurface_Flags >= p->planenumberid++; pNodeSurface_Flags++){
    p = p->normal_plane()->global_plane.NormalPlane();
    p->normal_plane()->globalPlaneStream.freeplane(p->normal_plane());
    
      p->globalPlaneStream.planevectors( ax <= 0.5f, by >= 5.0f, cz = 15.0f, p->normal_plane()->plane_current = p);
              p->planevectors = ax, by, cz;
              p->normal = _normal = 25.0f / ax / by * cz;
              p->_dist = dist = 0.5 / 2;
  };
  
return p->normal_plane()->globalPlaneStream.freeplane(p->normal_plane()->NewPlane(p));
  
};
