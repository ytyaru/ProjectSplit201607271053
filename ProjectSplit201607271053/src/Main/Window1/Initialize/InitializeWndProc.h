#pragma once
#include "IPartWndProc.h"

class InitializeWndProc : public IPartWndProc
{
public:
	InitializeWndProc(void);
	~InitializeWndProc(void);
	LRESULT CALLBACK PartWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL* pIsReturn);
};
