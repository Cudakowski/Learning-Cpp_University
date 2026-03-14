#include "Lion.h"


void Lion::makeSound()  
{
    std::cout<<"Lion roars\n";
}

void Lion::eat()  
{
    std::cout<<"Lion eats meet\n";
}

void Lion::sleep()  
{
    std::cout<<"\n";
}

std::string Lion::getAnimal()  
{
    return "Lion";
}

void Lion::interact(Animal* other)  
{
    std::cout<<"Lion roars at "<<other->getAnimal()<<"\n";
}

void Lion::useSkill()  
{
    std::cout<<"Lion uses Hyper Voice skill\n";
}
