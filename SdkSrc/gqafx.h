#pragma once
#ifndef GQAFX_h
#define GQAFX_H

class GQ_Globals {
public:

	GQ_Globals();
	virtual ~GQ_Globals();

	GQ_Globals& gq_globals;

	bool g_qBrushPrimitMode;
	bool g_qEntityPrimitMode;
	bool g_qVectorPrimitMode;

	const static void g_qCreate(void);

};

#endif