#include "Enemy.h"

Enemy::Enemy(): GameObject("Unnamed Enemy") {}
Enemy::Enemy(std::string name): GameObject(name) {}


// Performing enemy-specific action for Cersei:
// Rendering object
// Handling collision
// Updating object
void Enemy::action() const 
{
    std::cout<<"Performing enemy-specific action for "<<GameObject::Name()<<":\n";
    Renderable::render();
    Collideable::collide();
    Updateable::update();
}
