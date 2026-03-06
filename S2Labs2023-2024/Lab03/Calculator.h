#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <functional>


class Calculator
{
private:
    int _value;
public:
    Calculator(int x): _value(x)
    {

    }
    

    void operator=(int x)
    {
        _value=x;
    }

    int operator++(int)
    {
        int temp=_value;
        _value++;
        return temp;
    }

    int operator--()
    {
        --_value;
        return _value;
    }

    int operator*(int x)
    {
        _value*=2;
        return _value;
    }


    int operator()()
    {
        return _value;
    }

    friend int operator*(int x, Calculator &c);

    int operator()(std::function<int(int)> f)
    {
        return f(_value);
    }

    int operator()(std::function<int(int,int)> f, int x)
    {
        _value=f(_value,x);
        return _value;
    }
};

int operator*(int x, Calculator &c)
{
    c._value*=x;
    return c._value;
}



#endif
