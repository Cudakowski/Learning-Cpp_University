#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H
#include <iostream>

class GameObject
{
public:
    virtual ~GameObject(){}
    virtual void draw() const
    {
        std::cout<<"Rendering GameObject\n";
    }
};

#endif
