#include "BoundingBox.h"

class AABB {
public:
	AABB();
	virtual ~AABB();

	Vector3 Min;
	Vector3 Max;
	Vector3 Center;
	Vector3 Extents;

};