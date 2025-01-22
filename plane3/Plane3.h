#pragma once
#ifndef PLANE3_H
#define PLANE3_H

#include <math.h>
#include "SdkVector.h"
#include <set>

class Plane3 {
public:
	Plane3();
	virtual ~Plane3();

	double dist; //(-d)
	Vector3 normal; // (a, b, c)
	Vector3 planevector;

	Plane3(double nx, double ny, 
		double nz, double dist);

	double vx;
	double vy;
	double vz;

	Vector3& _normal() {
		return normal;
	};

	const Vector3& _normal () const {
		return normal;
	};


	void ReversePlane3(Vector3& _normal) { };

	float vMagnitude;

	const void VectorLength() const {
		std::size_t* VectorMagnitude();
		return VectorLength();
	}

};

#endif
