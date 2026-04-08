#ifndef ENEMY_H
#define ENEMY_H

#include "GameObject.h"
#include "Collideable.h"
#include "Renderable.h"

class Enemy : public GameObject, public Collideable, public Renderable
{
public:
    Enemy();
    Enemy(std::string name);
    void action() const override;
};

#endif
