#ifndef LION_H
#define LION_H

#include "Animal.h"
#include <iostream>

class Lion : public Animal
{
private:
    
public:
    void makeSound() override;
    void eat() override;
    void sleep() override;
    std::string getAnimal() override;
    void interact(Animal* other) override;
    void useSkill() override;
};



#endif
