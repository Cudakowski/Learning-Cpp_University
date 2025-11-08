#include "ShopA.h"


ShopA::ShopA()
{

}




void ShopA::Print()
{
    std::cout<<"---\n# Zawartosc/sklad:\n";

    for (size_t i = 0; i < ile; i++)
    {
        tab[i].Print();
    }
        
    std::cout<<"---\n";
}

void ShopA::Remove()
{
    if (ile>0)
    {
        ile--;
        return;
    }

    std::cout<<"BLAD: Pusto !\n";
}

void ShopA::Add(Product prod)
{
    tab[ile]=prod;
    ile++;
}

void ShopA::Clear()
{
    ile=0;
}

