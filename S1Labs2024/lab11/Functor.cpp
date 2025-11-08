#include "Functor.h"



bool Functor::operator()(int a, int b)
{
    if(a<b)
    {
        mniejsze++;
        return 1;
    }
    else if (a==b)
    {
        rowne++;
    }
    else
    {
        wieksze++;
    }

    return 0;
}

void Functor::wypiszStatystyki()
{
    std::cout<< "Liczba porownan:"
                "'a' mniejsze 'b': " << mniejsze <<'\n'<<
                "'a' rowne 'b': " << rowne <<'\n'<<
                "'a' wieksze 'b': " << wieksze <<'\n';
}
