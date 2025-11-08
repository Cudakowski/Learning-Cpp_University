#include "ShopB.h"


ShopB::ShopB()
{

}

ShopB::~ShopB()
{
    if(ile>0)
    {
        delete [] tab;
    }
}

ShopB::ShopB(ShopB& other)
{
    ile=other.ile;
    tab= new Product[ile];
    for (size_t i = 0; i < ile; i++)
    {
        tab[i]=other.tab[i];
    }
}

ShopB &ShopB::operator=(const ShopB& other)
{
    ile=other.ile;
    tab= new Product[ile];
    for (size_t i = 0; i < ile; i++)
    {
        tab[i]=other.tab[i];
    }
    return *this;
}

void ShopB::Print()
{
    std::cout<<"---\n# Zawartosc/sklad:\n";

    for (size_t i = 0; i < ile; i++)
    {
        tab[i].Print();
    }
        
    std::cout<<"---\n";
}

void ShopB::Remove()
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

    std::cout<<"BLAD: Pusto !\n";
}

void ShopB::Add(Product prod)
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

void ShopB::Clear()
{
    if(ile!=0)
    {
        ile=0;
        delete [] tab ;
    }

}

