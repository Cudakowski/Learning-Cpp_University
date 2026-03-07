#include "Lot.h"


void Lot::rezerwujBilet(IPasazer* a)
{
    _vec.push_back(a);
}

std::string Lot::getNumerLotu()
{
    return _numer;
}

void Lot::wyswietlRezerwacje()
{
    for (auto &&i : _vec)
    {
        i->przedstawSie();
    }
    
}

void Lot::zwolnijPojedynczegoPaszera(std::string nrKarty)
{
    for (int i{};i<_vec.size();i++)
    {
        if(_vec[i]->getNrKarty()==nrKarty)
        {
            delete _vec[i];
            _vec.erase(_vec.begin()+i);
            return;
        }
    }
}

void Lot::zwolnijWszystkichPaszazerow()
{
    for (int i{};i<_vec.size();i++)
    {
        delete _vec[i];
    }
    _vec.clear();
}
