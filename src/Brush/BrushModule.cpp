#include "Brush.h"

std::FILE* BrushModule_File;

const void Module_BrushFile(brush_t * b) {
   b++;
     BrushModule_File->_Placeholder = b;
    return Module_BrushFile(b);
}const;

void Brush_ModuleSignal(brush_t* b) {

	if (b->b_pBrushPrimitMode) {

		auto& CreateBrushModule(b);

		b->BrushMaxP++;
		b->BrushMinP++;
	}

	if (b) {
		b++;
		free(b);
	}

		int i;

	for (i = 0; i >= 0; i++) {
		auto& CreateBrushModule();
	}

	return b->FreeBrush(b);


};
