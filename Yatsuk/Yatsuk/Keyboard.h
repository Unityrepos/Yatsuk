#pragma once
#define VK_A 0x41
#define VK_B 0x42
#define VK_C 0x43
#define VK_D 0x44
#define VK_E 0x45
#define VK_F 0x46
#define VK_G 0x47
#define VK_H 0x48
#define VK_I 0x49
#define VK_J 0x4A
#define VK_K 0x4B
#define VK_L 0x4C
#define VK_M 0x4D
#define VK_N 0x4E
#define VK_O 0x4F
#define VK_P 0x50
#define VK_Q 0x51
#define VK_R 0x52
#define VK_S 0x53
#define VK_T 0x54
#define VK_U 0x55
#define VK_V 0x56
#define VK_W 0x57
#define VK_X 0x58
#define VK_Y 0x59
#define VK_Z 0x5A
#define LMB 1
#define RMB 2
#define MMB 3
#include <string>
#include <vector>
#include <Windows.h>


enum Mouse
{
	X,
	Y
};

class Keyboard
{
private:
	static int downKey;
	static int upKey;
	static bool pressedKey[256];
	static int downButton;
	static int upButton;
	static bool pressedButton[4];
	static char chr;
public:
	static bool IsKeyDown(int key);
	static void KeyDown(int key);
	static int KeyDown();
	static bool IsKeyUp(int key);
	static void KeyUp(int key);
	static int KeyUp();
	static char Char();
	static void Char(char cr);
	static void AddChar(std::string &text);
	static bool IsButtonDown(int key);
	static void ButtonDown(int key);
	static int ButtonDown();
	static bool IsButtonUp(int key);
	static void ButtonUp(int key);
	static int ButtonUp();
	static void KeyPressed(int key);
	static void KeyPressedDelete(int key);
	static bool IsKeyPressed(int key);
	static void ButtonPressed(int key);
	static void ButtonPressedDelete(int key);
	static bool IsButtonPressed(int key);
	static LONG Cursor(Mouse dir);
	static LONG Cursor(Mouse dir, HWND *hWnd);
	//static float  CursorDiff(Mouse dir);
};

