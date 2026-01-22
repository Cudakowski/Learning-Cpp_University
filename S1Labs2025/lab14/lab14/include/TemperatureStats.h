#ifndef TEMPERATURE_STATS_H
#define TEMPERATURE_STATS_H

#include <iostream>
#include <climits>

class TemperatureStats {
friend std::ostream &operator<<(std::ostream &os, TemperatureStats const &stats);
private:
    int _count;
    int _sum;
    int _max;
    int _min;
    double _mean;
public:
    TemperatureStats();
    void operator()(int x);
};


std::ostream &operator<<(std::ostream &os, TemperatureStats const &stats);

#endif
