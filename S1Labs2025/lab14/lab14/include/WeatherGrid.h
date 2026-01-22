#ifndef WEATHER_GRID_H
#define WEATHER_GRID_H

#include <iostream>
#include <vector>

class WeatherGrid{
friend std::ostream &operator<<(std::ostream &os, WeatherGrid const &grid);
private:
    std::vector<std::vector<int>> _grid;
public:
    WeatherGrid(int rows, int cols);
    WeatherGrid();
    int& operator()(int row, int col);
    std::vector<int>& operator[](int row);
    WeatherGrid& operator=(const WeatherGrid& other);
    WeatherGrid operator+(const WeatherGrid& other);
    WeatherGrid operator-(const WeatherGrid& other);
    WeatherGrid operator*(const WeatherGrid& other);
    WeatherGrid& operator--();
    WeatherGrid& operator++();
    WeatherGrid operator--(int);
    WeatherGrid operator++(int);
};

std::ostream &operator<<(std::ostream &os, WeatherGrid const &grid);

#endif
