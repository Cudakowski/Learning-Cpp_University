#ifndef I_KSIOZKA_H
#define I_KSIOZKA_H

#include <string>

class IKsiazka
{
private:
    std::string tytul;
    std::string autor;
    int id;
    std::string gatunek;
    int sumaOcen;
    int ileOcen;
public:
    IKsiazka(std::string _tytul,std::string _autor,int _id,std::string _gatunek):
        tytul(_tytul), autor(_autor), id(_id), gatunek(_gatunek) 
        {
            sumaOcen=0;
            ileOcen=0;
        }
    std::string getTytul(){return tytul;}
    std::string getAutor(){return autor;}
    std::string getGatunek(){return gatunek;}
    bool czySaOceny(){return ileOcen!=0;}

    double getSrednia(){return 1.0*sumaOcen/ileOcen;}

    void addRating(int r)
    {
        ileOcen++;
        sumaOcen+=r;
    }
};




#endif
