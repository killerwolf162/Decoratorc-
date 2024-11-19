#pragma once
#include "Decorator.h"
class ShamanDecorator : public Decorator
{
public:
	ShamanDecorator(Unit* u);
	virtual ~ShamanDecorator();

	void render();
};

