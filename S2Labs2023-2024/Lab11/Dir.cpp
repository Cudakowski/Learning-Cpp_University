#include "Dir.h"

std::string RelativePaths(Dir*a, Dir*b,std::string delim);

Dir::Dir(std::string name): _name{name}, _type{"DIR"}, _up{nullptr}, _depth{} {}
Dir::Dir(std::string name, std::string type): _name{name}, _type{type}, _up{nullptr}, _depth{} {}

Dir& Dir::operator+=(Dir* a)
{
    _tab.push_back(a);
    a->_depth=_depth+1;
    a->_up=this;
    return *this;
}

void Dir::add(Dir* a)
{
    _tab.push_back(a);
    a->_depth=_depth+1;
    a->_up=this;
}

Dir* Dir::findDir(std::string name)
{
    for (auto &&i : _tab)
    {
        if(i->_name==name)
            return i;
        Dir* temp = i->findDir(name);
        if (temp)
            return temp;
    }
    return nullptr;
}

void Dir::listDirs(int x)
{
    
    std::cout<<listDirsInner(x)<<"\n";
}

std::string Dir::listDirsInner(int x)
{   
    std::string temp="";
    temp+=_name;
    temp+=" ";
    if(x>0)
    {
        for (auto &&i : _tab)
        {
            if(i->_type=="DIR")
                temp+=i->listDirsInner(x-1);
        }
    }
    return temp;
}

Dir* Dir::root()
{
    Dir* temp=this;
    while(temp->_up)
    {
        temp=temp->_up;
    }
    return temp;
}

std::ostream& operator<<(std::ostream &os,Dir &a)
{
    os<<a._name<<" ("<<a._type<<")";
    if(a._type=="SOFTLINK")
    {
        os<<" -> "<<RelativePaths(a.root(),a._tab[0]," ")<<"\n";
        
    }
    else
    {
        os<<"\n";
        for (auto &&i : a._tab)
        {
            //i->_depth=a._depth+1;
            for (int j = 0; j < i->_depth; j++)
                os<<"  ";
            
            os<<*i;
        }
    }
    
    
    return os;
}

void ShowRelativePaths(Dir*a, Dir*b)
{
    std::cout<<RelativePaths(a,b,"/")<<"\n";
}

std::string RelativePaths(Dir*a, Dir*b,std::string delim)
{
    std::string temp="";
    if(a==b)
        return a->_name;
    for (auto &&i : a->_tab)
    {
        temp= RelativePaths(i,b,delim);
        if(temp!="")
        {
            return a->_name+delim + temp;
        }
    }

    return "";
}
