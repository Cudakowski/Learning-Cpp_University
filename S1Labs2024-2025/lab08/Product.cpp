#include "Product.h"

Product::Product(int typ, int numer)
{
    type=typ;
    num=numer;
}


void Product::Print()
{
    std::cout <<"typ: "<<type<<", ilosc sztuk: "<<num<<'\n';
}

void Product::SetCard(int x)
{
    num=x;
}
