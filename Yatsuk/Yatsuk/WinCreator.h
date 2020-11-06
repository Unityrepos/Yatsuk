#pragma once

namespace Window
{
	WNDCLASSEX Standart(WNDCLASSEX wnd, HINSTANCE hInstance, std::string name, UINT style);
}
















//class Window
//{
//private:
//	WNDCLASSEX wnd = {0};
//public:
//	Window(HINSTANCE hInstance, std::string name, UINT style);
//	void Size(UINT size);
//	void Style(UINT style);
//	void Proc(WNDPROC proc);
//	void SizeExtra(int size);
//	void WndExtra(int size);
//	void Instance(HINSTANCE inst);
//	void Icon(HICON icon);
//	void Background(HBRUSH bg);
//	void Cursor(HCURSOR cursor);
//	void MenuName(std::string name);
//	void ClassName(std::string name);
//	void IconSm(HICON icon);
//
//	WNDCLASSEX Wnd();
//};