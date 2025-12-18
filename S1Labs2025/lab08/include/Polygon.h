#ifndef POLYGON_H
#define POLYGON_H

#include "Point.h"

#include <string>
#include <iostream>

class Polygon{
private:
    Point *pointTab;
    int n;
    std::string name;
    static int mode;
public:
    Polygon();
    ~Polygon();
    Polygon(std::string str);
    Polygon(std::string str,Point p1,Point p2,Point p3);
    Polygon(std::string str,Point p1,Point p2,Point p3,Point p4);
    Polygon(std::string str,int a, Point *p);
    void Presentation();
    void SetName(std::string str);
    Point* GetVertices();
    void SetPresentationMode(int a);
    void SetNewVertices(int a, Point *p);
    void SetVertice(int i, std::string str, int a, int b);




};




#endif
