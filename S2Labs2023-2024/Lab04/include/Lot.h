#ifndef LOT_H
#define LOT_H

#include <string>
#include <iostream>
#include <vector>
#include "IPasazer.h"

class Lot
{
private:
    std::string _numer;
    std::string _czas;
    std::string _start;
    std::string _cel;

    std::vector<IPasazer*> _vec;
public:
    Lot(std::string numer, std::string czas, std::string start, std::string cel): 
        _numer(numer), _czas(czas), _start(start), _cel(cel) {}

    void rezerwujBilet(IPasazer* a);
    std::string getNumerLotu();
    void wyswietlRezerwacje();
    void zwolnijPojedynczegoPaszera(std::string nrKarty);
    void zwolnijWszystkichPaszazerow();
};

#endif
