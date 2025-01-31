//SdkAfx.h
#include <Windows.h>

#ifndef SDKAFX_H
#define SDKAFX_H

#define AFX 000

#define MOUSE 001
#define KEY 002
#define MOUSE_CLICK 000x111

class EditorSdk{
public:
//mouse input stuff
int m_bMouseClickId;

virtual void AppRegister_MouseRightClickCommand() = 0;
virtual void AppRegister_MouseLeftClickCommand() = 0;
virtual void AppRegister_MouseMiddleClickCommand() = 0;
virtual void AppRegister_KeyboardKeyClickCommand(const char * Key) = 0;
virtual void AppRegister_CursorCommand(HCURSOR cursor) = 0;
virtual void AppRegister_WindowCommand(HWND hwnd) = 0;
virtual void AppRegister_ButtonCommand(HWND button) = 0;
virtual void AppRegister_WidgetCommand(HWND widget) = 0;
virtual void AppRegister_HandleCommand(HANDLE handle) = 0;
virtual void AppRegister_InstanceCommand(HINSTANCE hinstance) = 0;
virtual void AppRegister_NetCommand(int pCommand) = 0;
virtual void AppRegister_GlCommand(HGLRC pGlCommand) = 0;
virtual void AppRegister_DcCommand(HDC pDcCommand) = 0;

};

#endif
