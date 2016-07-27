#pragma once
#pragma comment(lib, "Rpcrt4.lib")
#include <windows.h>
#include <tchar.h>
#include <string>
#include <vector>
#include "IPartWndProc.h"
using namespace std;

class Window
{
public:
	Window(void);
	~Window(void);
	void Create(HINSTANCE hInstance, basic_string<TCHAR> className);
	LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	vector<IPartWndProc*> partWndProcs;
protected:
private:
	LPWNDCLASSEX m_lpWndClassEx;
	HWND m_hWnd;
};

