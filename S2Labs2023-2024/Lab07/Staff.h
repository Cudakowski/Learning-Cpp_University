#ifndef STAFF_H
#define STAFF_H

#include "Equipment.h"

class Staff:public Equipment
{
public:
    Staff();

    std::string getName() override;
};



#endif
