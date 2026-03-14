#include "Character.h"

Character::Character(std::string name): _name{name}, _state{State::Idle}, _equipment{nullptr} {}

State Character::get_state(){return _state;}
std::string Character::GetName(){return _name;}
std::string Character::getEquipedItemName(){return _equipment->getName();}
void Character::set_state(State state){_state = state;}
