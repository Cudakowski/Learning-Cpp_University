#include "Shipment.h"

Shipment::Shipment(Box box): _weight(box.getW()), _volume(box.getV())
{

}

Shipment::Shipment(Item item): _weight(item.getW()), _volume(item.getV())
{

}

Shipment::Shipment(Pallet pal): _weight(pal.getW()), _volume(pal.getV())
{

}

void Shipment::Presentation()
{
    std::cout<<"Shipment: , weight: "<<_weight<<"g total, volume: "<<_volume<<"L total\n";
}
