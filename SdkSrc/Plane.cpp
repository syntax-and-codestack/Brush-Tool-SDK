#include "includes/SdkVector.h"

#define PLANE_DEBUG
#ifdef PLANE_DEBUG

template<class Plane3>
 Plane3 * pPlaneDebug;

#endif

template<typename PlaneVecElements>

 typedef struct Plane3Vec{
   float p3fab;
   Plane3Vec * current;
   Vector3& VecElements;

 };

template<typename Plane3Element>

 typedef struct Plane3ElementType{
   int ElementPlaneId;
   Vector3& vectorElements;
   bool winded_t(<Plane3Element>Plane3ElementType*type_winded);

 };
