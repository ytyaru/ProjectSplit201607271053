#include <locale.h>
#include <windows.h>
#include <tchar.h>
#include <string>
using namespace std;

#include "WndProcMapper.h"
#include "Window1.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPreInst, LPSTR lpszCmdLine, int nCmdShow)
{
	setlocale(LC_ALL, ".ACP");
	
	Window1 window1;
	WndProcMapper::RegistWndClass(hInstance, (Window*)&window1);

	MSG msg;
	while (GetMessage(&msg, NULL, 0, 0)) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	return (msg.wParam);
}
