#include "Init.h"
#include <vector>
vector<void(*)()> Init::updateFunction(0);
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