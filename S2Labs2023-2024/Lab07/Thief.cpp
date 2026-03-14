#include "Thief.h"

Thief::Thief(std::string name): Character(name) {}


std::string Thief::GetProffesion()
{
    return "Thief";
}

void Thief::equip(Equipment * eq)
{
    if(Lockpick * cpy = dynamic_cast<Lockpick *>(eq))
    {
        _equipment=cpy;
    }
}
