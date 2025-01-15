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

enum { FREE = 0, PRIMIT = 1, WINDING = 2 }PlaneMode;

 plane_t * AllocPlane();
 plane_t * SplitPlane(int spilt[2], plane_t * p);
 plane_t * NewPlane();

void freeplane();
void windplane();

#ifndef PLANEPRIMIT_MODE
#define PLANEPRIMIT_MODE
bool planeprimitmode;
#endif

bool m_bPlaneCastFree(plane_t * p, plane_t plane){
 if(p->planeprimitmode){
  static_cast<bool>(freeplane);
 }
 return p->planeprimitmode;
};

virtual void construct_plane_t(plane_t * p, winding_t * w) = 0;

template<typename plane_observor_module>
plane_observor_module plane_free(plane_t * p);
template<typename plane_observor_module>
plane_observor_module plane_primit(plane_t * p);
template<typename plane_observor_module>
plane_observor_module plane_winding(plane_t * p, winding_t * w);

};

#endif
