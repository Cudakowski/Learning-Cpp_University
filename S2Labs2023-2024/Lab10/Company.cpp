#include "Company.h"

Company::~Company()
{
    for (size_t i = 0; i <_tab.size(); i++)
    {
        delete _tab[i];
    }
}


void Company::addEmployee(std::string name, std::string position, int workHours, double hourlyPay)
{
    if(position=="Księgowa"||position=="Programista"||position=="Manager")
    {
        _tab.push_back(new Employee(name,position,workHours,hourlyPay));
        sortEmployees([](Employee *a,Employee *b){
            std::string nazwA=a->getName().substr(a->getName().find_first_of(' ')+1);
            std::string nazwB=b->getName().substr(b->getName().find_first_of(' ')+1);
            return nazwA<nazwB;
        });
    }
}


//
// Jan Kowalski - 5000.0 PLN
// Anna Wysocka - 4860.0 PLN
// Piotr Zieliński - 8000.0 PLN
//
void Company::displayEmployees()
{
    std::cout<<'\n';
    for (auto &&i : _tab)
    {
        std::cout<<i->getName()<<" - "<<i->getSalary() * i->getHours() <<" PLN\n";
    }
    std::cout<<'\n';
}

void Company::sortEmployees(std::function<bool(Employee* a, Employee* b)> fun)
{
    std::sort(_tab.begin(),_tab.end(),fun);
}

void Company::removeEmployees( std::function<bool(Employee* a)> fun)
{
    for (int i = _tab.size()-1; i >=0; i--)
    {
        if(fun(_tab[i]))
        {
            delete _tab[i];
            _tab.erase(_tab.begin()+i);
        }
    }
    
}
