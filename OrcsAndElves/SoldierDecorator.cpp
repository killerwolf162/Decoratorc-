#include "SoldierDecorator.h"

SoldierDecorator::SoldierDecorator(Unit* u) : Decorator(u)
{
}

SoldierDecorator::~SoldierDecorator()
{
}

void SoldierDecorator::render()
{
	Decorator::render();
	std::cout << " - Type: Soldier" << std::endl;
}
