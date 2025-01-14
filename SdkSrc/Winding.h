/*Winding.h*/
#ifndef WINDING_H
#define WINDING_H

#include "includes/SdkVector.h"

template<typename DEBUG_WINDING>
 #ifdef __DEBUG_WINDING
 #define __DEBUG_WINDING
  virtual bool winding_t_debuged() = 0;
 #endif

#endif
