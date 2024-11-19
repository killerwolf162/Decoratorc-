#include "ShamanDecorator.h"

ShamanDecorator::ShamanDecorator(Unit* u) : Decorator(u)
{
}

ShamanDecorator::~ShamanDecorator()
{
}

void ShamanDecorator::render()
{
	Decorator::render();
	std::cout << " - Type: Shaman" << std::endl;
}
