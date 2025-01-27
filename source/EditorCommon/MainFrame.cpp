#include "winapi.h"

int WINAPI WinMain(HWND g_pMainFrame) {
	MessageBoxA(g_pMainFrame, "Loading Brush Sdk", "Brush-Sdk-2025", MB_OKCANCEL);
	return 0;
};