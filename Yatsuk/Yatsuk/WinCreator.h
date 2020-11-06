#pragma once


class Window
{
private:
	WNDCLASSEX wnd = { 0 };
public:
	Window(HINSTANCE hInstance, const char* const name, UINT style);
	void Size(UINT size);
	void Style(UINT style);
	void Proc(WNDPROC proc);
	void SizeExtra(int size);
	void WndExtra(int size);
	void Instance(HINSTANCE inst);
	void Icon(HICON icon);
	void Background(HBRUSH bg);
	void Cursor(HCURSOR cursor);
	void MenuName(const char* const name);
	void ClassName(const char* const name);
	void IconSm(HICON icon);

	WNDCLASSEX operator()();
	WNDCLASSEX* operator&();
};











//
//
//
//
//
//
//
//
//namespace Window
//{
//	WNDCLASSEX Standart(WNDCLASSEX wnd, HINSTANCE hInstance, const char* const name, UINT style);
//}
//
//
//
//
//










