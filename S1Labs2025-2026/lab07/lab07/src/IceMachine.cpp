#include "IceMachine.h"

void IceMachine::SetID(int x)
{
    id=x;
}


void IceMachine::SetState(bool x)
{
    state=x;
}


void IceMachine::SetCapacity(double x)
{
    capacity=x;
}


void IceMachine::SetConsumption(double x)
{
    consumption=x;
}


void IceMachine::SetPowder(double x)
{
    powder=x;
}


void IceMachine::Presentation()
{
    std::cout << '\n';
    std::cout << "### Prezentacja ###\n"
    "Identyfikator maszyny do lodow wloskich: "<<id<<"\n"
    "Maszyna do lodow wloskich jest " <<(state?"wlaczona":"wylaczona")<<"\n"
    "Pojemnosc maszyny do lodow wloskich wynosi "<<capacity<<" kilogramy/kilogramow\n"
    "Srednia wydajnosc wynosi "<<consumption<<" kilogramow na 1 porcje\n"
    "W maszynie do lodow wloskich jest "<<powder<<" kilogramow proszku\n";
}


void IceMachine::Make(int x)
{
    std::cout << '\n';
    std::cout<<"### Robienie lodow ###\n";
    if(x<1)
    {
        std::cout<<"BLAD: Niepoprawna ilosc porcji\n";
        return;
    }
    if(!state)
    {
        std::cout<<"BLAD: Wlacz maszyne do lodow wloskich\n";
        return;
    }

    int made{};
    double subtracted{powder-consumption*x};
    if(subtracted<0.0)
    {
        made=static_cast<int>(powder/consumption);
        powder=0.0;
    }
    else
    {
        powder=subtracted;
        made=x;
    }
    
    
    std::cout<<"Zrobiles "<<made<<" porcji lodow\n";
}


void IceMachine::Start()
{
    std::cout << '\n';
    std::cout<<"### Uruchomienie maszyny do lodow wloskich ###\n";
    if(powder<=0.0)
    {
        std::cout<<"BLAD: Brak proszku, wsyp\n";
        return;
    }

    state=true;
    std::cout<<"Maszyna do lodow wloskich zostala wlaczona\n";
    
}


void IceMachine::Reload(double x)
{
    std::cout << '\n';
    std::cout<<"### Wsypywanie proszku ###\n";
    if(state)
    {
        std::cout<<"BLAD: Wylacz maszyne do lodow wloskich przed wsypaniem proszku\n";
        return;
    }
    if(x<=0.0)
    {
        std::cout<<"BLAD: Niepoprawna ilosc proszku do wsypania\n";
        return;
    }

    double empty{capacity-powder};
    double wsypane{};
    if(x>empty)
    {
        powder=capacity;
        wsypane=empty;
    }
    else
    {
        powder+=x;
        wsypane=x;
    }

    
    std::cout<<"Wsypales "<<wsypane<<" kilogram/kilogramow proszku\n";
}


void IceMachine::Stop()
{
    std::cout << '\n';
    std::cout<<"### Zatrzymanie maszyny do lodow wloskich ###\n";

    state=false;
    std::cout<<"Maszyna do lodow wloskich zostala wylaczona\n";
}
