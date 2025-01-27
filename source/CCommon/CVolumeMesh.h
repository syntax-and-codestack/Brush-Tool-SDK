#pragma once 
#ifndef C_VOLUME_MESH_H
#define C_VOLUME_MESH_H

int c_volume_mesh;
int c_id;
int * c_active_volume_mesh;

//////////////////////////////////
//                              //
//  CVolumeMesh does not need   //
//    winding, there are no     //
//        faces to wind         //
//                              //
//////////////////////////////////

//CVolumeMesh.h copyright@ hunter manko

class CVolumeMesh{
public:

 CVolumeMesh();
 ~CVolumeMesh();

 int c_volume_mesh_number;
 bool add_volume;

 enum{
  c_wireframe = 0x0
}CVolumeRendering;

int sides[6];

bool HollowMeshC;

Vector3 &vMeshMins;
Vector3 &vMeshMaxs;

Vector3 &vMeshSpawnOrigin = { 0.0f, 0.0f, 0.0f };

Vector3 &vMeshPosition;

Vector3 * vMeshVecCall;

float CVolumeMeshLineColor[3];


};

#endif
