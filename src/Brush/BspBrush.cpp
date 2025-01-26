#include "afx.h"

/*
	BspBrush.cpp copyright@ hunter manko
*/

//brush tools

int	*	c_nodes; //make node
int	*	c_nonvisbrush; //not visible
int	*	c_active_brushes; //active brushes

bool clip_brush_t; //?clip?

//max brushes per bsp
#define MAX_BRUSH_NUM 65223
//max planes per bsp
#define MAX_PLANE_NUM 68223
//max faces per bsp
#define MAX_FACE_NUM 75233

#define BRUSH_POINTS 000

#define BRUSH_IS_MAYJOR "Brush"


/*
==============
	Add Brush To Bsp
==============
*/
void Add_BrushToBsp(brush_t* brush, bsp_t * bsp) {
	int c;

	brush_t& brush_s();

		for (c = 0; brush; brush++) {
			c_active_brushes = bsp->c_get_node->c_node = brush->brushnumber_t;
				if (brush) {
					brush->brushnumber_t++;
				}

		}

	return brush_s().BrushHandle();

};
