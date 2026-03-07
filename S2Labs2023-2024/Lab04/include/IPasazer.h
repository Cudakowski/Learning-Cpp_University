#ifndef I_PASAZER_H
#define I_PASAZER_H

#include <string>
#include <iostream>

class IPasazer
{
protected:
    std::string _imie;
    std::string _nazwisko;
    std::string _nrKartyKredytowej;
public:
    IPasazer(std::string imie, std::string nazwisko, std::string nrKartyKredytowej): 
        _imie(imie), _nazwisko(nazwisko), _nrKartyKredytowej(nrKartyKredytowej){}
    
    virtual void przedstawSie() const;

    std::string getNrKarty();

};





#endif
