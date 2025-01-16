/*Face.h*/
#ifndef FACE_H
#define FACE_H

#include "Winding.h"
#include "includes/SdkVetor.h"

#define FACE_DETAIL 000x800

#ifdef __FACE_DEBUG
template<class _FaceDebugged>
 /*debug the face after winding is complete*/
  _FaceDebugged virtual bool FaceDebuggedOn_Winding(face_t * f, winding_t * w) = 0;
#endif

class face_t{
public:
  face_t();
  virtual ~face_t();

  float FacePoints[4];
  Vector4 FaceVectors;

  virtual void construct_face_t(face_t * face) = 0;
  void wind_face(winding_t * w, plane_t * p, face_t * f, Vector near, float winding_angle[45]);
  /*
   create face points after winding planes together to create face
  */
  float winding_face_points(winding_t * w, face_t * f, Vector n, plane_t * p){
    face_t& face;
     if(face.wind_face(w->winding_t(), p->plane_t(), f->face_t(), n, 180(face)))
     {
       f->FacePoints * points = new f->FacePoints;
     }
   return f->FacePoints;
  };
  
  

  

};

#endif
