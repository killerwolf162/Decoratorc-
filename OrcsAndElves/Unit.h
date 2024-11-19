#pragma once
#include <iostream>

class Unit
{
public:
	
	Unit();
	virtual ~Unit();
	
	std::string name;
	virtual void render() = 0;
};

