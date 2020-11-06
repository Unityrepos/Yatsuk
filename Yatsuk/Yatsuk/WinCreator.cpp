#include <Windows.h>
#include <string>
#include "WinCreator.h"


	Window::Window(HINSTANCE hInstance, const char* const name, UINT style)
	{
		this->wnd = {0};
		this->wnd.cbSize = sizeof(wnd);//
		this->wnd.style = style;//
		this->wnd.lpfnWndProc = DefWindowProc;//
		this->wnd.cbClsExtra = 0;//
		this->wnd.cbWndExtra = 0;//
		this->wnd.hInstance = hInstance;//
		this->wnd.hIcon = NULL;//
		this->wnd.hbrBackground = NULL;//
		this->wnd.hCursor = NULL;//
		this->wnd.lpszMenuName = NULL;//
		this->wnd.lpszClassName = name;//
		this->wnd.hIconSm = NULL;//
	}
	void Window::Size(UINT size)
	{
		this->wnd.cbSize = size;
	}
	void Window::Style(UINT style)
	{
		this->wnd.style = style;
	}
	void Window::Proc(WNDPROC proc)
	{
		this->wnd.lpfnWndProc = proc;
	}
	void Window::SizeExtra(int size)
	{
		this->wnd.cbClsExtra = size;
	}
	void Window::WndExtra(int size)
	{
		this->wnd.cbWndExtra = size;
	}
	void Window::Instance(HINSTANCE inst)
	{
		this->wnd.hInstance = inst;
	}
	void Window::Icon(HICON icon)
	{
		this->wnd.hIcon = icon;
	}
	void Window::Background(HBRUSH bg)
	{
		this->wnd.hbrBackground = bg;
	}
	void Window::Cursor(HCURSOR cursor)
	{
		this->wnd.hCursor = cursor;
	}
	void Window::MenuName(const char* const name)
	{
		this->wnd.lpszMenuName = name;
	}
	void Window::ClassName(const char* const name)
	{
		this->wnd.lpszClassName = name;
	}
	void Window::IconSm(HICON icon)
	{
		this->wnd.hIconSm = icon;
	}

	WNDCLASSEX Window::operator()()
	{
		return this->wnd;
	}
	WNDCLASSEX *Window::operator&()
	{
		return &(this->wnd);
	}





























	//WNDCLASSEX Window::Wnd()
	//{
	//	return this->wnd;
	//}
//namespace Window
//{
//	WNDCLASSEX Standart(WNDCLASSEX wnd, HINSTANCE hInstance, const char * const name, UINT style)
//	{
//		wnd.cbSize = sizeof (wnd);//
//		wnd.style = style;//
//		wnd.cbClsExtra = 0;//
//		wnd.cbWndExtra = 0;//
//		wnd.hInstance = hInstance;//
//		wnd.lpfnWndProc = DefWindowProc;
//		wnd.lpszClassName = name;
//		wnd.hIcon = NULL;//
//		wnd.hbrBackground = NULL;//
//		wnd.hCursor = NULL;//
//		wnd.lpszMenuName = NULL;//
//		wnd.hIconSm = NULL;//
//		return wnd;
//	}
//}