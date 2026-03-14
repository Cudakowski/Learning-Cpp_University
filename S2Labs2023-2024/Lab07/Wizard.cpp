#include "Wizard.h"


Wizard::Wizard(std::string name): Character(name) {}

std::string Wizard::GetProffesion()
{
    return "Wizard";
}

void Wizard::equip(Equipment * eq)
{
    if(Staff * cpy = dynamic_cast<Staff *>(eq))
    {
        _equipment=cpy;
    }
}
