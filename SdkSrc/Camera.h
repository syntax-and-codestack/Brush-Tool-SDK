#pragma once
#ifndef CAMERA_H
#define CAMERA_h

#include "SdkVector.h"
#include <Windows.h>

struct camera_t {

	HWND* CameraAPI;
	bool InitCamera(camera_t* c);

		Vector3 origin;
		Vector3 depth;
		float angle;

		void WINAPI GetCamWnd(HWND* _CamTApi);

		int g_nCrossHair[3];

		PIXELFORMATDESCRIPTOR qe_globalsDrawCrosshairPixels;
		PIXELFORMATDESCRIPTOR global_CameraPixelFormat;

		LPSTR* API_CAMERA_NAME;

		int camera_id;
		const char* camera_name;

		void * DrawXY();
		void * DrawYZ();
		void * DrawXZ();

		camera_t* NewCamera() {
			camera_t* camera = new camera_t;
			return camera;
		};

		camera_t* AllocCamera() {
			camera_t* camera = (camera_t*)malloc(sizeof(camera_t));
			return camera;
		};
		
		enum {
			cam_wireframe,
			cam_no_lighting,
			cam_opengl
		}camera_draw_mode;

};

#endif