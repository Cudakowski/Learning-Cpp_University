#include "Polygon.h"

int Polygon::mode=0;

Polygon::Polygon()
{
    pointTab=nullptr;
    n=0;
    name="?";
}

Polygon::Polygon(std::string str)
{
    pointTab=nullptr;
    n=0;
    name=str;
}
Polygon::Polygon(std::string str,Point p1,Point p2,Point p3)
{
    pointTab=new Point[3];
    pointTab[0]=p1;
    pointTab[1]=p2;
    pointTab[2]=p3;
    pointTab[0].SetName("?");
    pointTab[1].SetName("?");
    pointTab[2].SetName("?");
    n=3;
    name=str;
}
Polygon::Polygon(std::string str,Point p1,Point p2,Point p3,Point p4)
{
    pointTab=new Point[4];
    pointTab[0]=p1;
    pointTab[1]=p2;
    pointTab[2]=p3;
    pointTab[3]=p4;
    pointTab[0].SetName("?");
    pointTab[1].SetName("?");
    pointTab[2].SetName("?");
    pointTab[3].SetName("?");
    n=4;
    name=str;
}
Polygon::Polygon(std::string str,int a, Point *p)
{
    pointTab=new Point[a];
    for(int i{};i<a;i++)
    {
        pointTab[i]=p[i];
        pointTab[i].SetName("?");
    }
    
    n=a;
    name=str;
}
void Polygon::Presentation()
{
    if(mode)
    {
        std::cout<<"\nWielokat (nazwa, liczba wierzcholkow):  "<<name<<", "<<n<<'\n';
    }
    else
    {
    std::cout<<"\nWielokat:  Nazwa = "<<name<<", Liczba wierzcholkow = "<<n<<'\n';
    }
    
    for(int i{};i<n;i++)
    {
        pointTab[i].Presentation();
    }
    std::cout<<'\n';
}
void Polygon::SetName(std::string str)
{
    name=str;
}

Polygon::~Polygon()
{
    if(pointTab)
    {
        for (int i = 0; i < n; i++)
        {
            pointTab[i].SetX(0);
            pointTab[i].SetY(0);
        }
        
        delete [] pointTab;
    }
}

Point* Polygon::GetVertices()
{
    return pointTab;
}

void Polygon::SetPresentationMode(int a)
{
    mode=a;
}

void Polygon::SetNewVertices(int a, Point *p)
{
    n=a;
    if(pointTab)
    {
        delete [] pointTab;
    }

    pointTab=new Point[a];
    for(int i{};i<a;i++)
    {
        pointTab[i]=p[i];
        pointTab[i].SetName("?");
        pointTab[i].SetPresentationMode(1);
    }
}


void Polygon::SetVertice(int i, std::string str, int a, int b)
{
    if(i>0&&i<=n)
    {
        pointTab[i-1].SetX(a);
        pointTab[i-1].SetY(b);
        pointTab[i-1].SetName(str);
    }
    
}

