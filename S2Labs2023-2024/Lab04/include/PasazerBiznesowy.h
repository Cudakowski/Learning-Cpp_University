#ifndef PASAZER_BIZNESOWY_H
#define PASAZER_BIZNESOWY_H

#include "IPasazer.h"

class PasazerBiznesowy: public IPasazer
{
private:
    int _stanKonta;
public:
    PasazerBiznesowy(std::string imie, std::string nazwisko, std::string nrKartyKredytowej, int stanKonta): 
        IPasazer(imie, nazwisko, nrKartyKredytowej), _stanKonta(stanKonta){}

    void przedstawSie() const override ;
    
};




#endif
