#ifndef POINT_H
#define POINT_H

#include <string>
#include <iostream>


class Point{
private:
    int x;
    int y;
    std::string name;
    static int mode;
    static int xSum;
    static int ySum;
public:
    Point();
    ~Point();
    Point(std::string str);
    Point(std::string str, int a);
    Point(std::string str, int a, int b);
    void Presentation();
    void SetName(std::string str);
    void SetX(int a);
    void SetY(int a);
    void SetPresentationMode(int a);
    int GetX();
    int GetY();
    void GetStatistics();

    Point& operator=(const Point& p);


};


#endif
