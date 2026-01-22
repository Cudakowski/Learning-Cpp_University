#ifndef TREND_ANALYZER_H
#define TREND_ANALYZER_H

#include <iostream>

class TrendAnalyzer{
friend std::ostream &operator<<(std::ostream &os, TrendAnalyzer const &analyzer);
private:
    int _count;
    int _equal;
    int _inc;
    int _dec;
public:
    TrendAnalyzer();
    void operator()(int a, int b);
};


std::ostream &operator<<(std::ostream &os, TrendAnalyzer const &analyzer);

#endif
