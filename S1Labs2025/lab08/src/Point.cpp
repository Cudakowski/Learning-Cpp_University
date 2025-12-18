#include "Point.h"

int Point::mode=0;
int Point::ySum=0;
int Point::xSum=0;


Point::Point()
{
    name="?";
    x=0;
    y=0;
}


Point::Point(std::string str)
{
    name=str;
    x=0;
    y=0;
}


Point::Point(std::string str, int a)
{
    name=str;
    x=a;
    y=0;

    xSum+=a;
}


Point::Point(std::string str, int a, int b)
{
    name=str;
    x=a;
    y=b;

    xSum+=a;
    ySum+=b;
}


void Point::Presentation()
{
    if(mode==1)
    {
        std::cout<<"Punkt:  "<<name<<'('<<x<<','<<y<<")\n";
    }
    else
    {   
        std::cout<<"Punkt:  Nazwa = "<<name<<", Wspolrzedna X = "<<x<<", Wspolrzedna Y = "<<y<<'\n';
    }
}


void Point::SetName(std::string str)
{
    name=str;
}

void Point::SetX(int a)
{
    xSum+=a;
    xSum-=x;
    x=a;
}

void Point::SetY(int a)
{
    ySum+=a;
    ySum-=y;
    y=a;
}

void Point::SetPresentationMode(int a)
{
    mode=a;
}
int Point::GetX()
{
    return x;
}
int Point::GetY()
{
    return y;
}

void Point::GetStatistics()
{
    std::cout<< "\nSuma wspolrzednych x wszystkich punktow: "<<xSum<<"\n"
                "Suma wspolrzednych y wszystkich punktow: "<<ySum<<"\n\n";
}

Point::~Point()
{
    //xSum-=x;
    //ySum-=y;// A=(B=C)
}

Point& Point::operator=(const Point& p)
{
    this->x=p.x;
    this->y=p.y;
    this->name=p.name;
    xSum+=x;
    ySum+=y;
    return *this;
}
