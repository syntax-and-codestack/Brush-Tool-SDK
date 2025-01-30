//StdAfx.h copyright@ hunter manko
#pragma once
#ifndef STDAFX_H
#define STDAFX_H

//typedefs
typedef bool qboolean;
typedef malloc qmalloc;

//globals
class _q_eglobals{
public:
 qboolean qselect;
 qboolean qdraw_t;
 qboolean qbrushselected;

void qsysprintf(const char * text, ...);//work as printf function
void qsprintf(char * buffer, const char * format, int * id);//work as a sprintf function

qboolean qbrushprimit_mode;
};

#endif
