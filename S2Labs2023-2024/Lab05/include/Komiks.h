#ifndef KOMIKS_H
#define KOMIKS_H

#include <string>
#include "IKsiazka.h"

class Komiks: public IKsiazka
{
private:
    
public:
    Komiks(std::string _tytul,std::string _autor,int _id,std::string _gatunek): 
        IKsiazka(_tytul,_autor,_id,_gatunek) {}
};




#endif
