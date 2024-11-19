#include "Decorator.h"

Decorator::Decorator(Unit* u)
{
	theUnit = u;
}

Decorator::~Decorator()
{
	if (theUnit) delete theUnit;
}

void Decorator::render()
{
	theUnit->render();
}

