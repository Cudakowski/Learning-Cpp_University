#include "Warrior.h"

Warrior::Warrior(std::string name): Character(name) {}
    

std::string Warrior::GetProffesion()
{
    return "Warior";
}

void Warrior::equip(Equipment * eq)
{
    if(Sword * cpy = dynamic_cast<Sword *>(eq))
    {
        _equipment=cpy;
    }
}
