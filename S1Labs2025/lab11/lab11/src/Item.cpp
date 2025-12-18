#include "Item.h"



Item::Item(std::string name, int weight, int volume) : _name(name), _weight(weight), _volume(volume)
{

}


void Item::Presentation()
{
    std::cout<<"Item: "<<_name<<", weight: "<<_weight<<"g, volume: "<<_volume<<"L\n";
}


int Item::getW(){return _weight;}
int Item::getV(){return _volume;}
