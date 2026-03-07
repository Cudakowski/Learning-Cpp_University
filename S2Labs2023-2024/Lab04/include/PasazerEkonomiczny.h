#ifndef PASAZER_EKONOMICZNY_H
#define PASAZER_EKONOMICZNY_H

#include "IPasazer.h"

class PasazerEkonomiczny : public IPasazer
{
private:
    /* data */
public:
    PasazerEkonomiczny(std::string imie, std::string nazwisko, std::string nrKartyKredytowej) : 
        IPasazer(imie, nazwisko, nrKartyKredytowej){}

    void przedstawSie() const override;

};




#endif
