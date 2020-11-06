#include <Windows.h>
#include <string>
#include "WinCreator.h"

namespace Window
{
	WNDCLASSEX Standart(WNDCLASSEX wnd, HINSTANCE hInstance, std::string name, UINT style)
	{
		wnd.cbSize = sizeof (wnd);//
		wnd.style = style;//
		wnd.cbClsExtra = 0;//
		wnd.cbWndExtra = 0;//
		wnd.hInstance = hInstance;//
		wnd.hIcon = NULL;//
		wnd.hbrBackground = NULL;//
		wnd.hCursor = NULL;//
		wnd.lpszMenuName = NULL;//
		wnd.lpszClassName = name.c_str ();//
		wnd.hIconSm = NULL;//
		return wnd;
	}
}




























	//Window::Window(HINSTANCE hInstance, std::string name, UINT style)
	//{
	//	this->wnd = {0};
	//	this->wnd.cbSize = sizeof(wnd);//
	//	this->wnd.style = style;//
	//	this->wnd.lpfnWndProc = DefWindowProc;//
	//	this->wnd.cbClsExtra = 0;//
	//	this->wnd.cbWndExtra = 0;//
	//	this->wnd.hInstance = hInstance;//
	//	this->wnd.hIcon = NULL;//
	//	this->wnd.hbrBackground = NULL;//
	//	this->wnd.hCursor = NULL;//
	//	this->wnd.lpszMenuName = NULL;//
	//	this->wnd.lpszClassName = name.c_str();//
	//	this->wnd.hIconSm = NULL;//
	//}
	//void Window::Size(UINT size)
	//{
	//	this->wnd.cbSize = size;
	//}
	//void Window::Style(UINT style)
	//{
	//	this->wnd.style = style;
	//}
	//void Window::Proc(WNDPROC proc)
	//{
	//	this->wnd.lpfnWndProc = proc;
	//}
	//void Window::SizeExtra(int size)
	//{
	//	this->wnd.cbClsExtra = size;
	//}
	//void Window::WndExtra(int size)
	//{
	//	this->wnd.cbWndExtra = size;
	//}
	//void Window::Instance(HINSTANCE inst)
	//{
	//	this->wnd.hInstance = inst;
	//}
	//void Window::Icon(HICON icon)
	//{
	//	this->wnd.hIcon = icon;
	//}
	//void Window::Background(HBRUSH bg)
	//{
	//	this->wnd.hbrBackground = bg;
	//}
	//void Window::Cursor(HCURSOR cursor)
	//{
	//	this->wnd.hCursor = cursor;
	//}
	//void Window::MenuName(std::string name)
	//{
	//	this->wnd.lpszMenuName = name.c_str();
	//}
	//void Window::ClassName(std::string name)
	//{
	//	this->wnd.lpszClassName = name.c_str();
	//}
	//void Window::IconSm(HICON icon)
	//{
	//	this->wnd.hIconSm = icon;
	//}

	//WNDCLASSEX Window::Wnd()
	//{
	//	return this->wnd;
	//}
