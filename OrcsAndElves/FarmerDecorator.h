#pragma once
#include "Decorator.h"
class FarmerDecorator : public Decorator
{
public:
	FarmerDecorator(Unit* u);
	virtual ~FarmerDecorator();

	void render();
};


