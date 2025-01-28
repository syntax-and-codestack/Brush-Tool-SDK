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

	typedef PIXELFORMATDESCRIPTOR PFN_CAMERAPIXELTABLE;

	void CreateCameraWndPixelTable(CamWnd* Cam) {
		PFN_CAMERAPIXELTABLE CamWndPixels{
			CamWndPixels.nSize = CameraObservor()->m_bCamWndId = sizeof(Cam),
			CamWndPixels.bReserved = m_bCamWndId--,
			CamWndPixels.cAlphaBits = 16,
				CamWndPixels.cColorBits = 32,
				CamWndPixels.cDepthBits = 64,
				CamWndPixels.cStencilBits = 16 * 32,
				CamWndPixels.iPixelType = 6
		};
	};

	std::size_t CamWndSize = sizeof(CamWnd);

	virtual void ReleaseCamWnd() = 0;

	void Cam_AddToMainFrame(HWND* MainFrame, CamWnd* Cam);
	
};

#endif