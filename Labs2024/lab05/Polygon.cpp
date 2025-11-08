#include "Polygon.h"

Polygon::Polygon()
{   
    std::cout << "\nWywolanie konstruktora Polygon...\n";
    //name="";
    //pointCount=0;
    //points=nullptr;
}

Polygon::Polygon(std::string newName)
{   
    std::cout << "\nWywolanie konstruktora Polygon...\n";
    name=newName;
    //pointCount=0;
    //points=nullptr;
}
Polygon::Polygon(std::string newName,Point p1,Point p2,Point p3)
{   
    std::cout << "\nWywolanie konstruktora Polygon...\n";
    name=newName;
    pointCount=3;
    points= new Point [3];

    points[0]=p1;
    points[1]=p2;
    points[2]=p3;
}
Polygon::Polygon(std::string newName,Point p1,Point p2,Point p3,Point p4)
{   
    std::cout << "\nWywolanie konstruktora Polygon...\n";
    name=newName;
    pointCount=4;
    points= new Point [4];

    points[0]=p1;
    points[1]=p2;
    points[2]=p3;
    points[3]=p4;
}

Polygon::Polygon(std::string newName,size_t count,Point *newPoints)
{   
    std::cout << "\nWywolanie konstruktora Polygon...\n";
    name=newName;
    pointCount=count;
    points= new Point [count];

    for (size_t i = 0; i < count; i++)
    {
        points[i]=newPoints[i];
    }
}

Polygon::~Polygon()
{
    std::cout << "\nWywolanie destruktora Polygon...\n";
    if (pointCount>0)
        delete [] points;
}


void Polygon::Presentation(void)
{
std::cout<<"\n### Prezentacja wielokata ###\n"
           "Nazwa: "<< name <<
           "\nLiczba wierzcholkow: "<< pointCount <<'\n';
    for (size_t i = 0; i < pointCount; i++)
    {
        std::cout << "Wierzcholek - nazwa: "<< points[i].GetName()<<", X = "<< points[i].GetX()<<", Y = " << points[i].GetY() << '\n';
    }
    
}

void Polygon::SetName(std::string newName)
{
    name=newName;
}

Point * Polygon::GetVertices(void)
{
    return points;
}

void Polygon::SetVertice(size_t index, std::string newName, double X, double Y)
{
    if(index<=pointCount&&index>0)
    {
        points[index-1].SetName(newName);
        points[index-1].SetX(X);
        points[index-1].SetY(Y);
    }
    
}

void Polygon::SetNewVertices(size_t count,Point * pPoints)
{
    if(pointCount>0)
    {
        delete [] points;
    }
    points = new Point [count];
    pointCount=count;
    for (size_t i = 0; i < count; i++)
    {
        points[i]=pPoints[i];
    }
    
}