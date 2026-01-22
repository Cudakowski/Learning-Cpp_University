#include "TrendAnalyzer.h"


TrendAnalyzer::TrendAnalyzer() :
    _count(0),
    _equal(0),
    _inc(0),
    _dec(0)
{

}


void TrendAnalyzer::operator()(int a, int b)
{
    ++_count;
    if(a==b)
        ++_equal;
    else if (a<b)
        ++_inc;
    else
        ++_dec;
}


// Total pairs: 19
// Equal pairs: 2
// Increasing pairs: 10
// Decreasing pairs: 7
std::ostream &operator<<(std::ostream &os, TrendAnalyzer const &analyzer)
{
    return os << "Total pairs: "<<analyzer._count<<"\nEqual pairs: "<<analyzer._equal<<"\nIncreasing pairs: "<<analyzer._inc<<"\nDecreasing pairs: "<<analyzer._dec<<'\n';
}
