/*Face.h*/
#ifndef FACE_H
#define FACE_H

#include "Winding.h"
#include "Plane.h"

#define FACE_DETAIL 000x800

#ifdef __FACE_DEBUG
template<class _FaceDebugged>
/*debug the face after winding is complete*/
_FaceDebugged virtual bool FaceDebuggedOn_Winding(face_t* f, winding_t* w) = 0;
#endif

class face_t {
public:

    face_t();
    virtual ~face_t();

    face_t& global_face;

    float FacePoints[4];
    float FacePoint;
    Vector4 FaceVector;

        /*
        ==============
            FACE STUFF AFX
        ==============
       */

        virtual void construct_face_t(face_t* face) = 0;
        void wind_face(winding_t* w, plane_t* p, face_t* f, Vector near, float winding_angle[45]);

        boolean faceprimitmode;

        void* FaceBegin(Vector v, float _p, face_t * f);

            

};

#endif