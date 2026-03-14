#include "Bear.h"

void Bear::makeSound() 
{
    std::cout<<"Bear grunts\n";
}

void Bear::eat() 
{
    std::cout<<"Bear eats fish\n";
}

void Bear::sleep() 
{
    std::cout<<"\n";
}

std::string Bear::getAnimal() 
{
    return "Bear";
}

void Bear::interact(Animal* other) 
{
    std::cout<<"Bear grunts at "<<other->getAnimal()<<"\n";
}

void Bear::useSkill() 
{
    std::cout<<"Bear uses Belly Drum skill\n";
}
