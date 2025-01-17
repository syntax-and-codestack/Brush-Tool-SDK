/*plane.cpp*/
#include "Plane.h"

struct PlaneListNode {
    PlaneListNode* plistnode;
};

/*
  Create Normal Plane
*/
plane_t* CreateNormalPlane(plane_t* p, Vector _normal, float ax, float by, float cz, float dist, Vector _vector(float vec)) {
    int pNodeSurface_Flags = 32;

    dist = p->_dist;
    _normal = p->normal;

    for (pNodeSurface_Flags; pNodeSurface_Flags >= p->planenumberid++; pNodeSurface_Flags++) {
        p->normal_plane()->globalPlaneStream.freeplane(p->normal_plane());
        p->globalPlaneStream.planevectors(ax <= 0.5f, by >= 5.0f, cz = 15.0f, p->normal_plane()->plane_current = p);
            /*
             Plane Vectors Math
            */
            p->vectorpoints[0] = _vector(ax); p->vectorpoints[1] = _vector(by); p->vectorpoints[2] = _vector(cz);
            p->normal = _normal = 25.0f / ax / by * cz;
            p->_dist = dist = 0.5 / 2;
    };
    return p->normal_plane()->plane_current = p;
};
