#ifndef WIZARD_H
#define WIZARD_H

#include "Character.h"
#include "Staff.h"

class Wizard : public Character
{
public:
    Wizard(std::string name);

    std::string GetProffesion() override;
    void equip(Equipment * eq) override;
    
};


#endif
