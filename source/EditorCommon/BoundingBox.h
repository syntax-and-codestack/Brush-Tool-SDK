#pragma once
#ifndef BOUNDING_BOX_H
#define BOUNDING_BOX_H

#include <list>

#include "SdkVector.h"

class BoundingBox {
public:
	BoundingBox(Vector3& vector, float x, float y, float z);
	virtual ~BoundingBox();

	int boundingnumberid;
	BoundingBox& boundingbox;
	float BoundingBoxPoints[8];

	bool BoundingBoxCreated(BoundingBox& boundingbox);

		void CreateBoundingBox(Vector3& vector, BoundingBox& bounding_t);
		virtual void ConstructBounding(BoundingBox& bounding) = 0;
		bool BoundedNear(double _bounddist, BoundingBox * bounding_t);
		static void BoundingTransform(BoundingBox * bounding_t, Vector3 * transform);
		static void BoundingScale(BoundingBox* bounding_t, Vector3 * scale);
		static void BoundingRotate(BoundingBox* bounding_t, Vector3 * roatate);

		std::size_t BoundingBoxSize = sizeof(BoundingBox);

			enum {
				AABB = 0x0, 
				OBB,
				MBR
			}BoundingBoxType_t;
		
			bool BoundingUpdate(BoundingBox* prev, BoundingBox* current);//get new dimensions and coords

			#define BOUNDING_LINE_RGB (r, g, b)

			Vector3 BoundingBox_LineRgb;
			Vector4** BoundingBox_ColorBox;

			bool BoundingBoxNull(BoundingBox* bounding_t) {
				if (bounding_t->BoundingBoxSize == NULL) {
					return false;
				}
			};

			Vector3 BoundingCoord_Min;
			Vector3 BoundingCoord_Max;

			Vector3* current_boundingcoord;

			#define BOUNDINGBOX_AXIS_X (Vector3& boundingvector, float x)
			#define BOUNDINGBOX_AXIS_Y (Vector3& boundingvector, float y)
			#define BOUNDINGBOX_AXIS_Z (Vector3& boundingvector, float z)
};

#endif