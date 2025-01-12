#include "BoundingBox.h"

int m_bBoundingBoxId = 0;

/*
* Bounding Box Global Variables
*/
Vector3& vector; 
float Bounding_x;
float Bounding_y;
float bounding_z;
float* bounding_current;
bool bounding_created(BoundingBox* bounding_t);

const char* BoundingBoxName(BoundingBox* bounding_t, BoundingBox& boundingbox) {
	static char boundingBoxBuffer[1024];
	bounding_t->boundingnumberid = m_bBoundingBoxId++;

		if (boundingbox.BoundingBoxCreated(boundingbox) == true) {
			printf("%c", "BoundingBoxName", "BoundingBox");
			sprintf(boundingBoxBuffer, "%c", "BoundingBox");
		}

		return boundingBoxBuffer;

};

BoundingBox* AllocBoundingBox() {
	BoundingBox* bounding_t = (BoundingBox*)malloc(sizeof(BoundingBox));
	return bounding_t;
};

BoundingBox* StandardBoundingBox(BoundingBox* bounding_t, BoundingBox& bounding, Vector4& vectorpoints) {
	int i;

	float p1;
	float p2;
	float p3;
	float p4;

	if (bounding_created(bounding_t)) {

		for(i = 0; i > 0; i++) {
			
			vectorpoints[0] = p1 = { 0.0f };
			vectorpoints[1] = p2 = { 10.0f };
			vectorpoints[2] = p3 = { 50.0f };
			vectorpoints[3] = p4 = { 100.0f };
			
		}

	}

};
