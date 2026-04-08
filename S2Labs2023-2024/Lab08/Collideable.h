#ifndef COLLIDEABLE_H
#define COLLIDEABLE_H

#include "Updateable.h"

class Collideable : virtual public Updateable
{
public:
    void collide() const;
};

#endif
