#include "Student.h"

void Student::Set(int i, int x)
{
    if(i<0||i>=_n)
        return;

    _grades[i]=x;
}
int Student::Get(int i)
{
    return _grades[i];
}


Student::Student(int * grades, int n,std::string name)
{
    _n=n;
    _name=name;
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
    _name=s._name;
    _name+="_copy";
    _grades=new int[_n];
    for(int i{};i<_n;i++)
        _grades[i]=s._grades[i];
}


//XXXXXXXXXXX

int * Student::GetGrades()
{
    return _grades;
}


std::string Student::GetName()
{
    return _name;
}

void Student::Copy(Student & s)
{
    if(&s==this)
        return;
    _name=s._name;
    _name+="_copy";
    _n=s._n;
    if(_grades)
        delete [] _grades;
    _grades=new int[_n];
    for(int i{};i<_n;i++)
        _grades[i]=s._grades[i];
}


Student::Student(Student&& s)
{
    _n=s._n;
    s._n=0;
    _name=s._name;
    s._name="";
    _grades=s._grades;
    s._grades=nullptr;
}

