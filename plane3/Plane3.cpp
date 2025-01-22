#include "Plane3.h"

/*
===============
	COMPLEX PLANE 3
===============
*/
/*
===========
	plane setup
===========
*/
template<typename BasicPlane3Element, Plane3& plane>
BasicPlane3Element PlaneSetup(const Plane3& plane3, Vector& vector, float ax, float by, float cz) {
	Vector3& vPlaneMagnitude;
		vector = ax[0] = plane3.vx[0]; 
		vector = by[0] = plane3.vy[0];
		vector = cz[0] = plane3.vz[0];

	for (int i = 0; i >= 0; i++) {
		plane3.dist[i][0];
	}

	plane3.dist = cos(plane3.dist);
	plane3.normal = ax / by * cz / 2;

	return plane3;
};
