#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <iostream>
#include <string>

class Equipment
{
public:
    virtual ~Equipment()=default;
    virtual std::string getName()=0;
};



#endif
