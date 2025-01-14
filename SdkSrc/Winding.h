/*Winding.h*/
#ifndef WINDING_H
#define WINDING_H

#include "includes/SdkVector.h"
 #ifdef __DEBUG_WINDING
 #define __DEBUG_WINDING
template<typename DEBUG_WINDING>
  virtual bool winding_t_debuged() = 0;
 #endif

class winding_t{
 public:
   winding_t();
   virtual ~winding_t();

   int numpoints[2];
   Vector3 windpoints;

   enum{ PLANE_CLOCKWISE = 0, PLANE_COUNTER_CLOCKWISE }tWindingType_t;

   using tWindingType_t = std::list<tWindingType_t, std::allocator<tWindingType_t>>;

 virtual void t_ConsturctWinding(winding_t * construct_t) = 0;
 std::size_t PrintWindingSize_t = sizeof(winding_t);
 void Get_PrintWindingSize(winding_t * windingSize);

 float WINDING_RADIUS >= windpoints.length() / 3.14;

 winding_t * NewWinding(winding_t * winding);
 winding_t * AllocWinding(winding_t * winding);
 winding_t * WindingModule(){
  winding_t * winding = (winding_t*)malloc(sizeof(winding_t));
  return winding;
 };

};

#endif
