#ifndef CHARACTER_H
#define CHARACTER_H

#include "State.h"
#include "Equipment.h"
#include <string>

class Character
{
protected:
    State _state;
    std::string _name;
    Equipment * _equipment;
public:
    Character(std::string name);
    virtual ~Character()=default;

    State get_state();
    std::string GetName();
    virtual std::string GetProffesion()=0;
    virtual std::string getEquipedItemName();
    virtual void equip(Equipment * eq)=0;
    void set_state(State state);
};




#endif
