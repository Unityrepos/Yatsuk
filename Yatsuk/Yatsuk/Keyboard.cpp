#include "Keyboard.h"
bool  Keyboard::pressedKey[256] = {
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
bool  Keyboard::pressedButton[4] = {0,0,0,0};
int   Keyboard::downKey = 0;
int  Keyboard::upKey = 0;
char Keyboard::chr = 0;
bool Keyboard::IsKeyDown(int key)
{
	return key == Keyboard::downKey;
}
void Keyboard::KeyDown(int key)
{
	Keyboard::downKey = key;
}
int  Keyboard::KeyDown()
{
	return Keyboard::downKey;
}
bool Keyboard::IsKeyUp(int key)
{
	return key == Keyboard::upKey;
}
void Keyboard::KeyUp(int key)
{
	Keyboard::upKey = key;
}
int  Keyboard::KeyUp()
{
	return Keyboard::upKey;
}
char Keyboard::Char()
{
	return Keyboard::chr;
}
void Keyboard::Char(char cr)
{
	Keyboard::chr = cr;
}
void Keyboard::AddChar(std::string &text)
{
	if (chr != 0)
	{
		text.push_back(Keyboard::chr);
	}
}
int  Keyboard::downButton = 0;
int  Keyboard::upButton = 0;
bool Keyboard::IsButtonDown(int key)
{
	return key == Keyboard::downButton;
}
void Keyboard::ButtonDown(int key)
{
	Keyboard::downButton = key;
}
int  Keyboard::ButtonDown()
{
	return Keyboard::downButton;
}
bool Keyboard::IsButtonUp(int key)
{
	return key == Keyboard::upButton;
}
void Keyboard::ButtonUp(int key)
{
	Keyboard::upButton = key;
}
int  Keyboard::ButtonUp()
{
	return Keyboard::upButton;
}
void Keyboard::KeyPressed(int key)
{
	if (key < 256)
		Keyboard::pressedKey[key] = 1;
}
void Keyboard::KeyPressedDelete(int key)
{
	if (key < 256)
		Keyboard::pressedKey[key] = 0;
}
bool Keyboard::IsKeyPressed(int key)
{
	if (key < 256)
		return Keyboard::pressedKey[key];
	else
		return 0;
}
void Keyboard::ButtonPressed(int key)
{
	if (key < 4)
		Keyboard::pressedButton[key] = 1;
}
void Keyboard::ButtonPressedDelete(int key)
{
	if (key < 4)
		Keyboard::pressedButton[key] = 0;
}
bool Keyboard::IsButtonPressed(int key)
{
	if (key < 4)
		return Keyboard::pressedButton[key];
	else
		return 0;
}
LONG Keyboard::Cursor(Mouse dir)
{
	POINT p;
	GetCursorPos(&p);
	if (dir == X)
	{
		return p.x;
	}
	else if (dir == Y)
	{
		return p.y;
	}
	else
	{
		return 0;
	}
}
LONG Keyboard::Cursor(Mouse dir, HWND *hWnd)
{
	POINT *p = new POINT ();
	POINT *p1 = new POINT();
	LONG len;
	ScreenToClient(*hWnd, p);
	GetCursorPos(p1);
	if (dir == X)
	{
		len = (*p).x + (*p1).x;
	}
	else if (dir == Y)
	{
		len = (*p).y + (*p1).y;
	}
	else
	{
		len = 0;
	}
	delete p;
	delete p1;
	return len;
}