#include "Student.h"

void Student::Set(int i, int x)
{
    if(i<0||i>=_n)
        return;

    _grades[i]=x;
    //std::cout<<"kek\n";
}
int Student::Get(int i)
{
    return _grades[i];
}


Student::Student(int * grades, int n)
{
    _n=n;
    _grades=new int[n];
    for(int i{};i<n;i++)
        _grades[i]=grades[i];
}

Student::~Student()
{
    if(_grades)
        delete [] _grades;
}

Student::Student(const Student &s)
{
    _n=s._n;
    _grades=new int[_n];
    for(int i{};i<_n;i++)
        _grades[i]=s._grades[i];
}
