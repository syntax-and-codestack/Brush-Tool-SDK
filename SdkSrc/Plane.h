/*Plane.h*/
#include <string>
#include "includes/SdkVector.h"
#include "Winding.h"
#ifndef PLANE_H
#define PLANE_H

#ifdef __PLANE_DEBUG
template<class _PlaneDebugTool>
virtual bool debugged_plane_t() = 0;
#endif

class plane_t{
public:
 plane_t(Vector3& vectors, float ax, float by, float cz, Vector n, float d);
 virtual ~plane_t(Vector3& vectors, float ax, float by, float cz, Vector n, float d);

 int planenumberid;

 Vector normal;
 Vector3 planevectors;
 float _dist;

std::size_t PlaneSize = sizeof(plane_t);

virtual bool resetplane(plane_t * p, winding_t * w) override = 0;

 plane_t * AllocPlane();
 plane_t * SplitPlane(int spilt[2], plane_t * p);
 plane_t * NewPlane();

virtual void construct_plane_t(plane_t * p, winding_t * w) = 0;


};

#endif
