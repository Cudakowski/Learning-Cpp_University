#ifndef SWORD_H
#define SWORD_H

#include "Equipment.h"

class Sword: public Equipment
{
public:
    Sword();

    std::string getName() override;
};



#endif
