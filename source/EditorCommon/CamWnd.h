#pragma once
#ifndef CAMWND_H
#define CAMWND_H

#include "Camera.h"
#include "winapi.h"

class CamWnd {
public:
	CamWnd();
	~CamWnd();

	int m_bCamWndId;
	CamWnd* CameraObservor();

	HWND g_pCamWnd;

	bool g_pResetWnd;

	HDC g_pCamDC = GetDC(g_pCamWnd);
	HGLRC g_pCamWndGlContext = wglCreateContext(g_pCamDC);

	std::size_t CamWndSize = sizeof(CamWnd);

	virtual void ReleaseCamWnd() = 0;

	void Cam_AddToMainFrame(HWND* MainFrame, CamWnd* Cam);
	
};

#endif
