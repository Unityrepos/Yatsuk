#include "ExtraWinFile.h"
#include <string>
#include <iostream>
//#include "WindowProcess.h"

std::string nm = "";

LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	switch (msg)
	{
	case WM_CLOSE:
		PostQuitMessage(42);
		break;
	case WM_CHAR:
		static std::string title;
		title.push_back((char)wParam);
		SetWindowText(hWnd, title.c_str());
		break;
	}
	return DefWindowProc(hWnd, msg, wParam, lParam);
}

int CALLBACK WinMain(
	HINSTANCE	hInstance,
	HINSTANCE	hPrevInstance,
	LPSTR		lpCmdLine,
	int			nCmdShow)
{
	const auto pClassName = "Yatsuk";
	WNDCLASSEX wc = {0};
	wc = Window::Standart(wc, hInstance, pClassName, CS_OWNDC);
	wc.lpfnWndProc = WndProc;
	/*wc.cbSize = sizeof (wc);//
	wc.style = CS_OWNDC;//
	wc.lpfnWndProc = WndProc;//
	wc.cbClsExtra = 0;//
	wc.cbWndExtra = 0;//
	wc.hInstance = hInstance;//
	wc.hIcon = NULL;//
	wc.hbrBackground = NULL;//
	wc.hCursor = NULL;//
	wc.lpszMenuName = NULL;//
	wc.lpszClassName = pClassName;//
	wc.hIconSm = NULL;/*/

	RegisterClassEx(&wc);
	HWND hWnd = CreateWindowEx
	(
		0, pClassName,
		"Yatsuk",
		WS_CAPTION | WS_MINIMIZEBOX | WS_SYSMENU,
		200, 200, 640, 480,
		NULL, NULL, hInstance, NULL
	);
	ShowWindow(hWnd, SW_SHOW);

	MSG msg;
	BOOL gResult;

	while (gResult = GetMessage(&msg, NULL, 0, 0) > 0)
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	if (gResult == -1)
	{
		return -1;
	}
	else
	{
		return msg.wParam;
	}
	return 1;
}