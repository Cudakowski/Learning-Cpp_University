#ifndef PLAYER_CHARACTER_H
#define PLAYER_CHARACTER_H

#include "Renderable.h"
#include "GameObject.h"
#include <iostream>


class PlayerCharacter: public Renderable, public GameObject
{
private:
    void attack() const{
        std::cout<<"PlayerCharacter attacking!\n";
    }
public:
    void draw() const override
    {
        GameObject::draw();
        attack();
    }

    void render() const override
    {
        Renderable::render();
        attack();
    }

};

namespace gutils
{

void handleGameObject(GameObject *object)
{
    if(object)
    {
        PlayerCharacter* player = dynamic_cast<PlayerCharacter*>(object);
        if(player)
        {
            player->draw();
        }
    }
}

void handleRenderable(Renderable *object)
{
    if(object)
    {
        PlayerCharacter* player = dynamic_cast<PlayerCharacter*>(object);            
        if(player)
        {
            player->render();
        }
    }
}

} // namespace gutils

#endif
