#pragma once
/*Winding.h*/
#ifndef WINDING_H 
#define WINDING_H

#include <list>
#include "Windows.h"
#include "SdkVector.h"
#include "Plane.h"
#include <string>

#ifdef __DEBUG_WINDING
template<class __DEBUG_WINDING_T>
virtual bool Debuged_Winding_t() = 0;
#endif

#define BASE_RADIUS_WINDING (x, y) ((x)[0] + (y)[0])
#define WINDING_PI 3.14 / 2
#define RADIUS_WINDING 000

class winding_t {
public:
	winding_t();
	virtual ~winding_t();

	winding_t& global_winding;

	int WindingNumberId;
	winding_t* current_id;

	float numpoints[2];
	Vector3 windpoints;
	float maxarpoints[8][5];

	void* createnumpoints(float * w);

	virtual void construct_winding_t(winding_t* winding) = 0;
	enum { PLANE_CLOCKWISE = 0, PLANE_COUNTER_CLOCKWISE = 1 }WindingType;
	std::size_t PrintWindingSize_t = sizeof(winding_t);
	void Get_WindingSize(winding_t* current_size);

	winding_t* NewWinding(winding_t* winding);
	winding_t* AllocWinding(winding_t* winding);
	winding_t* WindingModule() {
		winding_t* winding = (winding_t*)malloc(sizeof(winding_t));
		return winding;
	};

	void * CallWindingType_t(winding_t* windingType_t, plane_t * current_plane);
	void * PrintWinding(static char* windingbuffer, const char* windingname, float* windingf);

	struct __GLOBALWINDING_TABLE_ {
		const int MAX_WINDING_NUMBER[10000];
	};

	void WINAPI WinApi_GetWinding_t(winding_t* winding, bool _debugged_winding_t);

#define _COCERT_WINDING_T winding_t*(t(sizeof(winding_t)) = 000

#define _WINDING_T_WHILE (while)(_COCERT_WINDING_T*t != current_id)

	const char* const winding_name(winding_t* current_winding);


};

#endif