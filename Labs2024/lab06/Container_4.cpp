#include "Container_4.h"


int Container_4::Delete(void)
{
    if(tab.size()<1)
    {
        std::cout<< "#BLAD: Obiekt pusty\n";
        return 0;
    }
    //size-=1;
    int temp=tab.back();
    tab.pop_back();
    return temp;
}

int Container_4::IsEmpty(void)
{
    // if(size==0)
    // {
    //     return 1;
    // }
    // else
    // {
    //     return 0;
    // }

    return tab.empty();
}

int Container_4::IsFull(void)
{
    return 0;
}

void Container_4::Add(int x)
{
    // if(size==max_size)
    // {
    //     std::cout<< "#BLAD: Obiekt zapelniony\n";
    //     return;
    // }
    //tab[size]=x;
    tab.push_back(x);
    //size+=1;
}

void Container_4::Print(void)
{
    std::cout << "#Zawartosc obiektu:\n";
    for (int i = 0; i < tab.size(); i++)
    {
        std::cout << tab[i] << ',';
    }
    std::cout << '\n';
}

int Container_4::Size(void)
{
    return tab.size();
}

void Container_4::Clear(void)
{
    tab.clear();
    //size=0;
}
