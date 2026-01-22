#include "WeatherGrid.h"

WeatherGrid::WeatherGrid()
{

}


WeatherGrid::WeatherGrid(int rows, int cols)
{
    _grid = std::vector<std::vector<int>>(rows,std::vector<int>(cols));
}



WeatherGrid& WeatherGrid::operator=(const WeatherGrid& other)
{
    _grid=other._grid;
    return *this;
}


WeatherGrid WeatherGrid::operator+(const WeatherGrid& other)
{
    WeatherGrid x;
    x=*this;

    for(int i{}; i<x._grid.size(); ++i)
    {
        for(int j{}; j<x._grid[0].size(); ++j)
        {
            x._grid[i][j]+=other._grid[i][j];
        }
        
    }

    return x;
}

WeatherGrid WeatherGrid::operator-(const WeatherGrid& other)
{
    WeatherGrid x;
    x=*this;

    for(int i{}; i<x._grid.size(); ++i)
    {
        for(int j{}; j<x._grid[0].size(); ++j)
        {
            x._grid[i][j]-=other._grid[i][j];
        }
        
    }

    return x;
}


WeatherGrid WeatherGrid::operator*(const WeatherGrid& other)
{
    WeatherGrid x(this->_grid.size(),this->_grid[0].size());
    //x=*this;

    for(int i{}; i<x._grid.size(); ++i)
    {
        for(int j{}; j<x._grid[0].size(); ++j)
        {
            //x._grid[i][j]*=other._grid[i][j];
            for(int k{}; k < x._grid.size(); ++k)
            {
                x._grid[i][j]+=_grid[i][k]*other._grid[k][j];
                //std::cout<<x._grid[i][j]<<' '<<_grid[i][k]<<' '<<other._grid[k][j]<<" \n";
            }
        }
        
    }

    return x;
}

WeatherGrid& WeatherGrid::operator--()//pre
{
    for(int i{}; i<_grid.size(); ++i)
    {
        for(int j{}; j<_grid[0].size(); ++j)
        {
            --_grid[i][j];
        }
    }
    return *this;
}

WeatherGrid& WeatherGrid::operator++()//pre
{
    for(int i{}; i<_grid.size(); ++i)
    {
        for(int j{}; j<_grid[0].size(); ++j)
        {
            ++_grid[i][j];
        }
    }
    return *this;
}

WeatherGrid  WeatherGrid::operator--(int)//post
{
    WeatherGrid x; 
    x = *this;
    for(int i{}; i<_grid.size(); ++i)
    {
        for(int j{}; j<_grid[0].size(); ++j)
        {
            --_grid[i][j];
        }
    }
    return x;
}

WeatherGrid  WeatherGrid::operator++(int)//post
{
    WeatherGrid x; 
    x = *this;
    for(int i{}; i<_grid.size(); ++i)
    {
        for(int j{}; j<_grid[0].size(); ++j)
        {
            ++_grid[i][j];
        }
    }
    return x;
}



//cols = x
//rows = y

int& WeatherGrid::operator()(int row, int col)
{
    return _grid[row][col];
}


std::vector<int>& WeatherGrid::operator[](int row)
{
    return  _grid[row];
}


//    1    2
//    3    4
std::ostream &operator<<(std::ostream &os, WeatherGrid const &grid)
{
    for(int i{}; i<grid._grid.size(); ++i)
    {
        for(int j{}; j<grid._grid[0].size(); ++j)
        {
            os << "    "<<grid._grid[i][j];
        }
        os << '\n';
    }

    return os;
}
