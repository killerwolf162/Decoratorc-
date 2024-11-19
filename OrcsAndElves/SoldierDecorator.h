#pragma once

#include "Decorator.h"
class SoldierDecorator : public Decorator
{
public:
	SoldierDecorator(Unit* u);
	virtual ~SoldierDecorator();

	void render();
};

