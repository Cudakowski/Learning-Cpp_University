#include "Shop.h"


Shop::Shop()
{

}

Shop::Shop(Product prod)
{
    tab.push_back(prod);
}

Shop::Shop(Product prod1,Product prod2)
{
    tab.push_back(prod1);
    tab.push_back(prod2);
}

Shop::Shop(int n,Product **prodTab)
{
    for (size_t i = 0; i < n; i++)
    {
        tab.push_back(**(prodTab+i));
    }
}

Shop::Shop(std::vector<Product> prodV)
{
    tab=prodV;
}


void Shop::Print()
{
    std::cout<<"---\n# Zawartosc/sklad:\n";

    for (size_t i = 0; i < tab.size(); i++)
    {
        tab[i].Print();
    }
        
    std::cout<<"---\n";
}

void Shop::Remove()
{
    if (tab.size()>0)
    {
        tab.pop_back();
        return;
    }

    std::cout<<"BLAD: Pusto !\n";
}

void Shop::Add(Product prod)
{
    tab.push_back(prod);
}

void Shop::Clear()
{
    tab.clear();
}
