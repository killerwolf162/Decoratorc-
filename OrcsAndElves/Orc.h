#pragma once
#include "Unit.h"

class Orc : public Unit
{

public:
    Orc(std::string name);
    virtual ~Orc();

    std::string name;
    void render();

};

