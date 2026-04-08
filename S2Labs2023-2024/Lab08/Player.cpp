#include "Player.h"

Player::Player(): GameObject("Unnamed Player") {}
Player::Player(std::string name): GameObject(name) {}

// Performing player-specific action for Ned:
// Rendering object
// Updating object
void Player::action() const 
{
    std::cout<<"Performing player-specific action for "<<GameObject::Name()<<":\n";
    Renderable::render();
    Updateable::update();
}
