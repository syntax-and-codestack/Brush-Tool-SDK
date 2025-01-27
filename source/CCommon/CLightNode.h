#pragma once
#ifndef C_LIGHT_NODE_H
#define C_LIGHT_NODE_H

#include <winapi.h>

typedef float light_vec_t;
typedef light_vec_t light_vec3_t[3];
typedef light_vec_t light_vec4_t[4];
typedef light_vec_t light_vec6_t[6];

class CLightNode {
	public:

	CLightNode();
	~CLightNode();

		light_vec_t* light_t;




};


#endif