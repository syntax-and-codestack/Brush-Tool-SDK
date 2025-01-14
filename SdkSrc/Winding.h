/*Winding.h*/
#ifndef WINDING_H
#define WINDING_H

#include "includes/SdkVector.h"

template<typename DEBUG_WINDING>
 #ifdef __DEBUG_WINDING
 #define __DEBUG_WINDING
  virtual bool winding_t_debuged() = 0;
 #endif

typedef class winding_t{
 public:
   winding_t();
   virtual ~winding_t();

   int numpoints[2];
   Vector3 windpoints;

   template<class tWindingType_t>
    enum{ PLANE_CLOCKWISE = 0, PLANE_COUNTER_CLOCKWISE };

using tWindingType_t = std::list<tWindingType_t, std::allocator<tWindingType_t>>;

 virtual void t_ConsturctWinding(winding_t * construct_t) = 0;
 std::size_t PrintWindingSize_t = sizeof(winding_t);
 void Get_PrintWindingSize(winding_t * windingSize);

 float WINDING_RADIUS >= windpoints / 3.14;

 winding_t * AllocWinding(winding_t * winding);

};

#endif
