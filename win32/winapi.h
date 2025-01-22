/*
 winapi.h :
  Win32Api *!made to be used easier!*

  UPDATE THE FOLLOWING:

   HWND,
   WINAPI,
   INT,
   BOOL,
   BOOLEAN,
   FLOAT

  &&other common win32 resources  
*/

#include <Windows.h>

#ifdef _WIN32

typedef HWND WinWidget;
typedef HINSTANCE WinInstance;
typedef MSG WinMsg;
typedef WINAPI CallApi;
typedef HICON WinIcon;
typedef HMENU WinMenu;
typedef HTOOLBAR WinToolbar;

WinWidget * globalWidget();
void * Window32(WinWidget * _widget);

WinInstance * globalInstance();
void * Instance32(WinInstance * _instance);

WinMsg * globalMsg();
void * Msg32(WinMsg * _msg);

WinIcon * globalIconPaint();
void * IconPaint(WinIcon * _icon);

WinMenu * globalMenu();
void * Menu(WinMenu * _menu);

WinToolbar * globalConstructToolbar();
void * Toolbar(WinToolbar * _toolbar);

#endif
