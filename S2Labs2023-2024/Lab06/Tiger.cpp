#include "Tiger.h"

void Tiger::makeSound()
{
    std::cout<<"Tiger growls\n";
}

void Tiger::eat()
{
    std::cout<<"Tiger eats meet\n";
}

void Tiger::sleep()
{
    std::cout<<"\n";
}

std::string Tiger::getAnimal()
{
    return "Tiger";
}

void Tiger::interact(Animal* other)
{
    std::cout<<"Tiger stares at "<<other->getAnimal()<<"\n";
}

void Tiger::useSkill()
{
    std::cout<<"Tiger uses Flare Blitz skill\n";
}
