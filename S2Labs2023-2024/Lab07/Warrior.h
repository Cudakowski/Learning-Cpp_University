#ifndef WARIOR_H
#define WARIOR_H

#include "Character.h"
#include "Sword.h"

class Warrior: public Character
{
public:
    Warrior(std::string name);
    
    std::string GetProffesion() override;
    void equip(Equipment * eq) override;
};



#endif
