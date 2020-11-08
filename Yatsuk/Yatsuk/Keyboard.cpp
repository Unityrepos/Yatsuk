#include "Keyboard.h"
int Keyboard::downKey = 0;
int Keyboard::upKey = 0;
char Keyboard::chr = 0;
bool Keyboard::IsKeyDown(int key)
{
	return key == Keyboard::downKey;
}
void Keyboard::KeyDown(int key)
{
	Keyboard::downKey = key;
}
int Keyboard::KeyDown()
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
int Keyboard::KeyUp()
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
int Keyboard::downButton = 0;
int Keyboard::upButton = 0;
bool Keyboard::IsButtonDown(int key)
{
	return key == Keyboard::downButton;
}
void Keyboard::ButtonDown(int key)
{
	Keyboard::downButton = key;
}
int Keyboard::ButtonDown()
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
int Keyboard::ButtonUp()
{
	return Keyboard::upButton;
}