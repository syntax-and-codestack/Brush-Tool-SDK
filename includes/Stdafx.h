//StdAfx.h copyright@ hunter manko
#pragma once
#ifndef STDAFX_H
#define STDAFX_H

//typedefs
typedef bool qboolean;
void* _cdecl qmalloc(std::size_t _Size);

void qsysprintf(const char* text, ...);//work as printf function
void qsprintf(char* buffer, const char* format, int* id);//work as a sprintf function

//globals
class _q_eglobals {
public:
	qboolean qselect;
	qboolean qdraw_t;
	qboolean qbrushselected;

	qboolean qbrushprimit_mode;
};

#endif