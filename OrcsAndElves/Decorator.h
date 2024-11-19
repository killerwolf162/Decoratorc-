#pragma once
#include "Unit.h"

class Decorator : public Unit
{
private:
	Unit* theUnit;
public:
	Decorator(Unit* u);
	virtual ~Decorator();

	virtual void render();
};

