#ifndef TIGER_H
#define TIGER_H

#include "Animal.h"
#include <iostream>

class Tiger : public Animal
{
private:
    /* data */
public:
    void makeSound() override;
    void eat() override;
    void sleep() override;
    std::string getAnimal() override;
    void interact(Animal* other) override;
    void useSkill() override;
};



#endif
