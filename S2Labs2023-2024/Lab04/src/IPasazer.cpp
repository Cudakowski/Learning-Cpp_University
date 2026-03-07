#include "IPasazer.h"

void IPasazer::przedstawSie() const
{
    std::cout<<"Mam na imie: "<< _imie <<' '<< _nazwisko <<" i moj nr karty kredytowej to: "<<_nrKartyKredytowej+'\n';
}

std::string IPasazer::getNrKarty(){return _nrKartyKredytowej;}
