#ifndef THIEF_H
#define THIEF_H

#include "Character.h"
#include "Lockpick.h"

class Thief: public Character
{
public:
    Thief(std::string name);

    std::string GetProffesion() override;
    void equip(Equipment * eq) override;
};

#endif
