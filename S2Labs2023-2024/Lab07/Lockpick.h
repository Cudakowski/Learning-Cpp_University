#ifndef LOCKPICK_H
#define LOCKPICK_H

#include "Equipment.h"

class Lockpick: public Equipment
{
public:
    Lockpick();

    std::string getName() override;
};

#endif
