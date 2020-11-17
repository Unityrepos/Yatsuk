#include "Init.h"
#include <vector>
std::vector<void(*)()> Init::updateFunction = {};
int Init::tint = 1;
HWND Init::test = NULL;
void Init::Update(void(*func)())
{
	Init::updateFunction.push_back(func);
}
void Init::Update()
{
	for (auto i = std::begin(Init::updateFunction);i!=std::end(Init::updateFunction);++i)
	{
		(*i)();
	}
}