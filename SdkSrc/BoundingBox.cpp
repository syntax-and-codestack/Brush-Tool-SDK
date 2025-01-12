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
