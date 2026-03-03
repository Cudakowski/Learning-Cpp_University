#ifndef RENDERABLE_H
#define RENDERABLE_H
#include <iostream>

class Renderable
{
public:
    virtual ~Renderable(){}
    virtual void render() const
    {
        std::cout<< "Drawing Renderable\n";
    }
};

#endif
