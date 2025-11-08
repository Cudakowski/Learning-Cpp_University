#include "ShopC.h"


ShopC::ShopC()
{

}

ShopC::~ShopC()
{
    if(ile>0)
    {
        delete [] tab;
    }
}

ShopC::ShopC(ShopC& other)
{
    ile=other.ile;
    tab= new Product[ile];
    for (size_t i = 0; i < ile; i++)
    {
        tab[i]=other.tab[i];
    }
}

ShopC &ShopC::operator=(const ShopC& other)
{
    ile=other.ile;
    tab= new Product[ile];
    for (size_t i = 0; i < ile; i++)
    {
        tab[i]=other.tab[i];
    }
    return *this;
}

ShopC &ShopC::operator=(ShopC&& other)
{
    ile=other.ile;
    other.ile=0;

    tab=other.tab;
    other.tab=nullptr;
    return *this;
}

ShopC::ShopC(ShopC&& other)
{
    ile=other.ile;
    other.ile=0;

    tab=other.tab;
    other.tab=nullptr;
}




void ShopC::Print()
{
    std::cout<<"---\n# Zawartosc/sklad:\n";

    for (size_t i = 0; i < ile; i++)
    {
        tab[i].Print();
    }
        
    std::cout<<"---\n";
}

void ShopC::Remove()
{
    if (ile>1)
    {
        ile--;
        return;
    }
    else if (ile==1)
    {
        ile--;
        delete [] tab;
    }

    //std::cout<<"BLAD: Pusto !\n";
}

void ShopC::Add(Product prod)
{
    //tab[ile]=prod;
    //ile++;

    if (ile==0)
    {
        tab = new Product[ile+1];
        tab[ile]=prod;
    }
    else
    {
        Product *ptr=new Product[ile+1];
        for (size_t i = 0; i < ile; i++)
        {
            ptr[i]=tab[i];
        }
        ptr[ile]=prod;

        delete [] tab;

        tab=ptr;
    }

    ile++;
}

void ShopC::Clear()
{
    if(ile!=0)
    {
        ile=0;
        delete [] tab ;
    }

}

