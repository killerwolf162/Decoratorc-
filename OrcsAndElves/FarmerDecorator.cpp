#include "FarmerDecorator.h"

FarmerDecorator::FarmerDecorator(Unit* u) : Decorator(u)
{
}

FarmerDecorator::~FarmerDecorator()
{
}

void FarmerDecorator::render()
{
	Decorator::render();
	std::cout << " - Type: Farmer" << std::endl;
}
