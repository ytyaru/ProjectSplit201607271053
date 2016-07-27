#pragma once
#include <windows.h>
#include <tchar.h>
#include <string>
#include <map>
#include "WndClassRegister.h"
#include "Window.h"
#include "IWndProc.h"
using namespace std;

class WndProcMapper
{
public:
	WndProcMapper(void);
	~WndProcMapper(void);
	static void RegistWndClass(HINSTANCE hInstance, Window* pWindow);
	static LRESULT CALLBACK BaseWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
private:
	static map<basic_string<TCHAR>, Window*> m_mapWindowByClassName;
};
