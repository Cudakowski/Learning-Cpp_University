#ifndef USER_H
#define USER_H

#include <string>
#include <vector>

class User
{
private:
    std::string name;
    std::vector<std::string> chcePrzeczytac;
    std::vector<std::string> przeczytane;
public:
    User(std::string _name): name(_name){}
    std::string getName(){return name;}
    void displayPersonalBookshelf()
    {
        std::cout<<"Chcę przeczytać:\n";
        for (auto &&i : chcePrzeczytac)
        {
            std::cout<<"- "<<i<<'\n';
        }
        
        std::cout<<"Przeczytałem:\n";
        for (auto &&i : przeczytane)
        {
            std::cout<<"- "<<i<<'\n';
        }

    }

    void addBook(std::string tytul, std::string status)
    {
        if(status=="Chcę przeczytać")
        {
            chcePrzeczytac.push_back(tytul);
        }
        else
        {
            przeczytane.push_back(tytul);
        }
    }

    bool czyPrzeczytal(std::string tytul)
    {
        for (auto &&i : przeczytane)
        {
            if(i==tytul)
                return true;
        }
        return false;
        
    }

    
};



#endif
