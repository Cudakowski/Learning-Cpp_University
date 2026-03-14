#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal
{
private:
    /* data */
public:
    virtual ~Animal()=default;

    virtual void makeSound() = 0;
    virtual void eat() = 0;
    virtual void sleep() = 0;
    virtual std::string getAnimal() = 0;
    virtual void interact(Animal* other) = 0;
    virtual void useSkill() = 0;
};




#endif
