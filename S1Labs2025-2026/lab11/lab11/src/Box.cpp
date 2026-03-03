#include "Box.h"

Box::Box(Item item) : _count(1), _weight(item.getW()), _volume(item.getV())
{
    
}

void Box::AddItem(Item item)
{
    _count++;
    _weight+=item.getW();
    _volume+=item.getV();
}

void Box::Presentation()
{
    std::cout<<"Box: contains "<<_count<<" items, weight: "<<_weight<<"g total, volume: "<<_volume<<"L total\n";
}

int Box::getW(){return _weight;}
int Box::getV(){return _volume;}
