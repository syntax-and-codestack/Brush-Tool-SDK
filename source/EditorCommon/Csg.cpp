//Csg.cpp includes
#include <limits.h>
#include "Stdafx.h"

//globals
static int csgId = 0;

#define CSG_HOLLOW 000x000
#define CSG_GROUP 000x001

std::size_t csgsize;

class Csg{
public:
 Csg();
 ~Csg();

 int numberid;//set to id int

 qboolean csgdrawn;
 qboolean csgscale;
 qboolean csgtranslate;
 qboolean csgrotate;

 virtual void DrawCsg(Csg * csg) = 0;
 virtual void CreateCsg(Csg& csg) = 0;
 int CsgMouseRegister(Csg& csg, int mouse_button);
 virtual void RegisterMouse(int * Mouse) = 0;

 int MAX_CSG_FACES[9999];

 virtual void LeftClckMB() = 0;
 virtual void RightClckMB() = 0;
 virtual void MiddleClckMB() = 0;
 virtual void DestroyCsg() = 0;

 qboolean texdef_csg_enabled;

 enum{
 CsgCube = 0,
 CsgCylinder = 1,
 CsgPyramid = 2
 }CsgShape;

};
