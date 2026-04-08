#ifndef RENDERABLE_H
#define RENDERABLE_H

#include "Updateable.h"

class Renderable : virtual public Updateable
{
public:
    void render() const;
};

#endif
