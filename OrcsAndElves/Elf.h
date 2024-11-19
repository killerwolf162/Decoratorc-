#pragma once
#include "Unit.h"
class Elf : public Unit
{
public:
    Elf(std::string name);
    virtual ~Elf();

    std::string name;
    void render();

};

