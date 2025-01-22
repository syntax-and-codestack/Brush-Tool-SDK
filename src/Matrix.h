#pragma once
#ifndef MATRIX_H
#define MATRIX_H

#include "SdkVector.h"
#include <math.h>
#include <set>

class Matrix {
public:

	Matrix();
		virtual ~Matrix();

		Matrix& g_qMatrix;

		void* SetTransformation(Vector3* Translate);
		void TransformVector(Vector3& vector);
		void* SetScale(Vector3* Scale);
		void ScaleVector(Vector3& Scale);



};

/*
====================================

			MATRIX ROTATING IS DONE IN MATRIX 4X4

====================================
*/

/*!NOTE
   m4x4 looks like this..

						x  y  z
   x axis        ( 0  1  2)
   y axis        ( 4  5  6)
   z axis        ( 8  9 10)
   translation   (12 13 14)
   scale         ( 0  5 10)
 */

typedef Vector m4x4_t[16];

class Matrix4x4 {
public:

	Matrix4x4();
	virtual ~Matrix4x4();
	Vector3 MatrixVec3Default{0, 1, 0 };

		float M4X4(Matrix4x4* Matrix, Vector3& vector3, Vector4& vector4) {

		};
	
		void* Cos(double* _X);
		void* Sin(double * _X);

		float_t x;
		float_t y;
		float_t z;

		void CreateAxisM4X4(Matrix4x4* matrix, Vector3& vecm) {
			matrix->x = vecm[0];
			matrix->y = vecm[1];
			matrix->z = vecm[2];
		};

};


#endif