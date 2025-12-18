#include "Pallet.h"

Pallet::Pallet(Box box): _count(1), _weight(box.getW()), _volume(box.getV())
{

}

void Pallet::AddBox(Box box)
{
    _count++;
    _weight+=box.getW();
    _volume+=box.getV();
}

void Pallet::Presentation()
{
    std::cout<<"Pallet: contains "<<_count<<" boxes, weight: "<<_weight<<"g total, volume: "<<_volume<<"L\n";
}

int Pallet::getW(){return _weight;}
int Pallet::getV(){return _volume;}
