#ifndef KSIOZKA_H
#define KSIOZKA_H

#include <string>
#include "IKsiazka.h"

class Ksiazka: public IKsiazka
{
private:
    
public:
    Ksiazka(std::string _tytul,std::string _autor,int _id,std::string _gatunek): 
        IKsiazka(_tytul,_autor,_id,_gatunek) {}
};



#endif
