#ifndef PASAZER_PREMIUM_ECONOMY_H
#define PASAZER_PREMIUM_ECONOMY_H

#include "IPasazer.h"

class PasazerPremiumEconomy: public IPasazer
{
private:
    bool _czyVip;
public:
    PasazerPremiumEconomy(std::string imie, std::string nazwisko, std::string nrKartyKredytowej, bool czyVip): 
        IPasazer(imie, nazwisko, nrKartyKredytowej), _czyVip(czyVip){}

    void przedstawSie() const override;
};




#endif
