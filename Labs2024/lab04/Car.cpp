#include "Car.h"

#include <iostream>


double Car::GetTankCapacity()
{
    return this->TankCapacity;
}


void Car::Presentation(void)
{
    std::cout << "\n### Prezentacja ###\n"
                 "Identyfikator samochodu: "<< this->ID <<
                 "\nSamochod jest w"<< (this->State?"":"y") << "laczony\n"
                 "Pojemnosc baku wynosi "<< this->TankCapacity <<" litrow\n" 
                 "Srednie spalanie wynosi "<< this->Consumption <<" litrow / 100 km\n" 
                 "W baku jest "<< this->Fuel <<" litrow paliwa\n";
}

void Car::Drive(double x)
{
    std::cout<< "\n### Jazda ###\n";
    if(x<=0)
    {
        std::cout<< "BLAD: Niepoprawny dystans\n";
        return;
    }

    if (this->State==false)
    {
        std::cout<<"BLAD: Wlacz silnik\n";
        return;
    }

    double litry{this->Consumption*x/100.0};
    double drove{0};

    if(this->Fuel>=litry)
    {
        drove=x;
    }
    else
    {
        drove=this->Fuel*100/this->Consumption;
    }

    this->SetFuel(this->Fuel-litry);
    
    std::cout<<"Przejechales "<< drove <<" km\n";
    
}

void Car::Start(void)
{
    std::cout << "\n### Uruchomienie samochodu ###\n";
    if(this->Fuel<=0.0)
    {
        std::cout << "BLAD: Brak paliwa, zatankuj\n";
        return;
    }

    this->State=true;
    std::cout << "Silnik zostal wlaczony\n";
}

void Car::Refuel(double x)
{
    std::cout<<"\n### Tankowanie ###\n";

    if (this->State==true)
    {
        std::cout << "BLAD: Wylacz samochod przed tankowaniem\n";
        return;
    }

    if (x<=0)
    {
        std::cout << "BLAD: Niepoprawna ilosc paliwa do zatankowania\n";
        return;
    }

    double val{this->TankCapacity-this->Fuel};
    
    if(val>x)
    {
        val=x;
    }


    this->SetFuel(this->Fuel+x);

    std::cout<<"Zatankowales "<< val <<" litrow\n";
    
}

void Car::Stop(void)
{
    std::cout << "\n### Zatrzymanie samochodu ###\n";

    if(this->State==false)
    {
        std::cout << "BLAD: Silnik jest juz wylaczony\n";
        return;
    }

    this->State=false;
    std::cout << "Silnik zostal wylaczony\n";
}


void Car::SetID(int x)
{
    this->ID=x;
}

void Car::SetState(bool x)
{
    this->State=x;
}

void Car::SetTankCapacity(double x)
{
    this->TankCapacity=x;
}

void Car::SetConsumption(double x)
{
    this->Consumption=x;
}

void Car::SetFuel(double x)
{
    if(x<0)
    {
        this->Fuel=0;
    }
    else if (x>this->TankCapacity)
    {
        this->Fuel=this->TankCapacity;
    }
    else
    {
        this->Fuel=x;
    }
    
    
}