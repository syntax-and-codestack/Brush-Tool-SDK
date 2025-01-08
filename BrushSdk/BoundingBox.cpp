#include "Mathlib/Vector.h"

/*
* Vector Bounding Line Colors (r, g, b)
*/
#define BOUNDING_LINE_COLOR_RGB(double r, g, b) (r = 0.0, g = 5.3, b = 2.1)

Vector ** v_pCurrentList_;
Vector3 v_Main_TopFrontLine = { 0.0f, 3.0f, -10.0f };
Vector3 v_Main_TopBackLine = { 10.0f, +3.0f, -1.0f };
