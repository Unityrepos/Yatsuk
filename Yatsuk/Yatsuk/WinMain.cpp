#include "ExtraWinFile.h"
#include <string>
#include <iostream>
//#include "WindowProcess.h"


LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	switch (msg)
	{
	case WM_CLOSE:
		PostQuitMessage(42);
		break;
	}
	if (msg == WM_KEYDOWN)
	{
		Keyboard::KeyDown(wParam);
		Keyboard::KeyPressed(wParam);
	}
	else if (Keyboard::KeyDown() != 0)
	{
		Keyboard::KeyDown(0);
	}
	if (msg == WM_KEYUP)
	{
		Keyboard::KeyUp(wParam);
		Keyboard::KeyPressedDelete(wParam);
	}
	else if (Keyboard::KeyUp() != 0)
	{
		Keyboard::KeyUp(0);
	}
	if (msg == WM_CHAR)
	{
		Keyboard::Char(wParam);
	}
	else if (Keyboard::Char() != 0)
	{
		Keyboard::Char(0);
	}
	if (msg == WM_LBUTTONDOWN)
	{
		Keyboard::ButtonDown(LMB);
		Keyboard::ButtonPressed (LMB);
	}
	else if (msg == WM_RBUTTONDOWN)
	{
		Keyboard::ButtonDown(RMB);
		Keyboard::ButtonPressed(RMB);
	}
	else if (msg == WM_MBUTTONDOWN)
	{
		Keyboard::ButtonDown(MMB);
		Keyboard::ButtonPressed(MMB);
	}
	else if (Keyboard::ButtonDown() != 0)
	{
		Keyboard::ButtonDown(0);
	}
	if (msg == WM_LBUTTONUP)
	{
		Keyboard::ButtonUp(LMB);
		Keyboard::ButtonPressedDelete(LMB);
	}
	else if (msg == WM_RBUTTONUP)
	{
		Keyboard::ButtonUp(RMB);
		Keyboard::ButtonPressedDelete(RMB);
	}
	else if (msg == WM_MBUTTONUP)
	{
		Keyboard::ButtonUp(MMB);
		Keyboard::ButtonPressedDelete(MMB);
	}
	else if (Keyboard::ButtonUp() != 0)
	{
		Keyboard::ButtonUp(0);
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
	Window wc(hInstance, pClassName, CS_OWNDC);
	wc.Proc(WndProc);
	wc.Icon(static_cast<HICON>(LoadImage(hInstance, MAKEINTRESOURCE(IDI_ICON2),IMAGE_ICON,64,64,0)));
	wc.IconSm(static_cast<HICON>(LoadImage(hInstance, MAKEINTRESOURCE(IDI_ICON2), IMAGE_ICON, 16, 16, 0)));

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
}