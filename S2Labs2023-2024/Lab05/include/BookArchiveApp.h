#ifndef BOOK_ARCHIVE_H
#define BOOK_ARCHIVE_H

#include "IKsiazka.h"
#include "User.h"
#include <string>
#include <vector>
#include <algorithm>

class BookArchiveApp
{
private:
    std::vector<IKsiazka *> baza;
public:
    void addMaterialToBase(IKsiazka * k)
    {
        baza.push_back(k);
    }
    void putOnBookshelf(std::string tytul, User& user, std::string status)
    {
        bool found=false;
        for (IKsiazka *i : baza)
        {
            if(i->getTytul()==tytul)
            {
                found=true;
                break;
            }
        }

        if(!found)
        {
            std::cout<<"Przepraszamy - w naszej bazie nie ma książki pod tytułem \""<<tytul<<"\".\n";
            return;
        }

        user.addBook(tytul,status);
    }

    void rateBook(std::string tytul, User user, int ocena)
    {
        if(!user.czyPrzeczytal(tytul))
        {
            std::cout<<"Przepraszamy - nie można ocenić książki, której się nie przeczytało.\n";
            return;
        }

        for (auto &&i : baza)
        {
            if(i->getTytul()==tytul)
            {
                i->addRating(ocena);
            }
        }
        
    }

    //- Batman, Bob Kane, Superbohaterowie, Średnia ocena: 5.0
    void displayAllBooks()
    {
        std::sort(baza.begin(),baza.end(),[](IKsiazka * a,IKsiazka * b){return a->getTytul()<b->getTytul();});
        for (auto &&i : baza)
        {
            if(i->czySaOceny())
            {
                std::cout<<"- "<<i->getTytul()<<", "<<i->getAutor()<<", "<<i->getGatunek()<<", Średnia ocena: "<<i->getSrednia()<<'\n';
            }
            else
            {
                std::cout<<"- "<<i->getTytul()<<", "<<i->getAutor()<<", "<<i->getGatunek()<<", Brak ocen\n";
            }
        }
        
    }
};




#endif
