/*Face.h*/
#ifndef FACE_H
#define FACE_H

#include "Winding.h"
#include "includes/SdkVetor.h"

#ifdef __FACE_DEBUG
template<class _FaceDebugged>
  _FaceDebugged virtual bool FaceDebuggedON_Winding(face_t * f, winding_t * w) = 0;
#endif

class face_t{
public:
  face_t();
  virtual ~face_t();

  float FacePoints;
  Vector4 FaceVectors;

  

  

};

#endif
