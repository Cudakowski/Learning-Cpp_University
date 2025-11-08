#include "Point.h"

Point::Point()
{   
    std::cout<< "\nWywolanie konstruktora Point...\n";
    //this->name="";
}

Point::Point(std::string newName)
{   
    std::cout<< "\nWywolanie konstruktora Point...\n";
    this->name=newName;
}

Point::Point(std::string newName,double x, double y)
{   
    std::cout<< "\nWywolanie konstruktora Point...\n";
    this->name=newName;
    this->X=x;
    this->Y=y;
}

Point::~Point()
{
    std::cout<< "\nWywolanie destruktora Point...\n";
}

void Point::Presentation(void)
{
std::cout << "\n### Prezentacja punktu ###"
             "\nNazwa: "<< this->name <<
             "\nWspolrzedna X: "<< this->X <<
             "\nWspolrzedna Y: "<< this->Y <<'\n';
}

void Point::SetName(std::string newName)
{
    this->name=newName;
}

void Point::SetX(double x)
{
    this->X=x;
}

void Point::SetY(double y)
{
    this->Y=y;
}

std::string Point::GetName(void)
{
    return this->name;
}


double Point::GetX(void)
{
    return this->X;
}

double Point::GetY(void)
{
    return this->Y;
}