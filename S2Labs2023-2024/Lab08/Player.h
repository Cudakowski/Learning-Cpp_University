#ifndef PLAYER_H
#define PLAYER_H

#include "GameObject.h"
#include "Collideable.h"
#include "Renderable.h"

class Player: public GameObject, public Collideable, public Renderable
{
public:
    Player();
    Player(std::string name);
    void action() const override;
};

#endif
