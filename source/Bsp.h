#pragma once
#ifndef BSP_H
#define BSP_H

#include "afx.h"

class bsp_t {
public:

	bsp_t();
	virtual ~bsp_t();

	int node;
	int* c_node;
	bsp_t* c_get_node;

	bool flush_c_node;

	const char * c_bsp_msg = "Bsp Active\n";
		
    LPSTR* c_bsp_notif;

};

#endif