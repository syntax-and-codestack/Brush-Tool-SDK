#pragma once
/*texgridtool.h*/
#ifndef TEXGRIDTOOL_H
#define TEXGRIDTOOL_H

#include <Windows.h>

class TexGridTool {
public:
	TexGridTool();
	~TexGridTool();

	TexGridTool* tgt_global;
	TexGridTool& GlobalToolInsert;

	const char* texgrid_name(TexGridTool* current_textool);

	virtual void WINAPI* TexGrid_EnableTool(TexGridTool * tool) = 0;

	PIXELFORMATDESCRIPTOR grid_pixel_descriptor;

	void* global_InsertDescriptor(TexGridTool * tool, PIXELFORMATDESCRIPTOR * pDescriptor, int bits_x, int depth, int bits_y, float current_tex) {
		pDescriptor->nSize = sizeof(pDescriptor);
			pDescriptor->cAlphaBits = bits_x;
			pDescriptor->cColorBits = bits_y;

				if (pDescriptor->nSize) {
					pDescriptor->cDepthBits = depth;
				}

				return tool->TexGrid_EnableTool(tool);

	};

};

#endif
