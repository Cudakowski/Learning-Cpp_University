#include "TemperatureStats.h"


TemperatureStats::TemperatureStats():    
    _count(0),
    _sum(0),
    _max(INT_MIN),
    _min(INT_MAX),
    _mean(0)
{

}


void TemperatureStats::operator()(int x)
{
    ++_count;
    _sum+=x;
    if(_max<x)
        _max=x;
    if(_min>x)
        _min=x;
    _mean=1.0*_sum/_count;
}



//Count: 20, Sum: 92, Min: 0, Max: 9, Mean: 4.6
std::ostream &operator<<(std::ostream &os, TemperatureStats const &stats)
{
    return os << "Count: "<<stats._count<<", Sum: "<<stats._sum<<", Min: "<<stats._min<<", Max: "<<stats._max<<", Mean: "<<stats._mean<< '\n';
}
