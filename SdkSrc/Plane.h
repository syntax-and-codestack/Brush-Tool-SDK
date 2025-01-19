/*Plane.h*/
#include <string>
#include "SdkVector.h"
#include "Winding.h"

#ifndef PLANE_H
#define PLANE_H

#ifdef __PLANE_DEBUG
template<class _PlaneDebugTool>
/*debugged?*/
virtual bool debugged_plane_t() = 0;
#endif

class plane_t {
public:
	plane_t(Vector3& vectors, float ax, float by, float cz, Vector n, float d);
	virtual ~plane_t();

	int planenumberid;

	plane_t& global_plane;
	plane_t& globalPlaneStream;

	plane_t* plane_current;

	Vector normal;
	Vector3 vectorpoints;
	Vector3& planevectors(float a, float b, float c, plane_t *p);
	float _dist;

	std::size_t PlaneSize = sizeof(plane_t);

	virtual bool resetplane(plane_t* p) = 0;

	enum { FREE = 0, PRIMIT = 1, WINDING_M = 2 }PlaneMode;

	plane_t* AllocPlane();
	plane_t* SplitPlane(int spilt[2], plane_t* p);
	plane_t* NewPlane();

	void freeplane(plane_t* p);
	void windplane(plane_t* p);

#define D3D_PLANE_DESCRIPTOR 000x800 (d3d)
#define NORMAL_PLANE_DESCRIPTOR 000x900 (Vector n)
#define GL_PLANE_DESCRIPTOR 000x1000 (opengl32)

	plane_t * d3d_plane();
	plane_t * normal_plane();
	plane_t * gl_plane();

	virtual void D3DPlane() = 0;
	virtual void NormalPlane() = 0;
	virtual void GLPlane() = 0;

	void returnsize_t(plane_t* sizeof_plane_t);
	void planeshader(plane_t* p, const char* pShaderName);

	bool planeprimitmode;

	bool m_bPlaneCastFree(plane_t*p) {
		if (p->planeprimitmode) {
			static_cast<bool>(freeplane);
		}
		return p->planeprimitmode;
	};


};

#endif