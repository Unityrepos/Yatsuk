#pragma once
#include <Windows.h>
#include <vector>
#include <string>
class Init
{
private:
	static std::vector<void(*)()> updateFunction;
public:
	static HWND test;
	static int tint;
	static void Update(void(*)());
	static void Update();
	//static HWND test;
};

