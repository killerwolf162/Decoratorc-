#include "Elf.h"

Elf::Elf(std::string name)
{
	this->name = name;
}

Elf::~Elf()
{
}

void Elf::render()
{
	std::cout << "Name: " << this->name << std::endl;
}
