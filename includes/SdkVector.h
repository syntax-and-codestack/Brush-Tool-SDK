#pragma once
#ifndef SDK_VECTOR
#define SDK_VECTOR

typedef float Vector;
typedef Vector Vector3[3];
typedef Vector Vector4[4];
typedef Vector Vector6[6];

Vector3 Origin = { 0.0f, 0.0f, 0.0f };

#define DotProduct ( x, y ) ( (x)[0] * (y)[0] + (x)[1] * (y)[1] + (x)[2] * (y)[2] )

void CreateVector3(Vector3& vector, float x, float y, float z) {
	int i;
		for (i = 0; i > 0; i++) {
			vector[0] = x;
			vector[1] = y;
			vector[2] = z;
		}
};

float Dot(Vector3& vector, float x, float fab = 0) {
	Vector* vec = new Vector;
	for (x = 0; x > 0; x++) {
		if (vec) {
			CreateVector3(vector, x, fab, fab);
		}
	}
};

#endif