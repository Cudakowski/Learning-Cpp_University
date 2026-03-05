#include "SparseMatrix.h"



SparseMatrix::SparseMatrix(int ROWS, int COLS): _ROWS(ROWS), _COLS(COLS)
{
    _mat=std::vector<std::vector<int*>>(_ROWS,std::vector<int*>(_COLS,nullptr));
}

SparseMatrix::SparseMatrix(const SparseMatrix& other): _ROWS(other._ROWS), _COLS(other._COLS)
{
    _mat=std::vector<std::vector<int*>>(_ROWS,std::vector<int*>(_COLS,nullptr));
    for (int i = 0; i < _ROWS; i++)
    {
        for (int j = 0; j < _COLS; j++)
        {
            if(other._mat[i][j])
                insert(i,j, new int(*other._mat[i][j]));
        }
        
    }

}

SparseMatrix::SparseMatrix(SparseMatrix&& other): _ROWS(other._ROWS), _COLS(other._COLS)
{
    _mat=std::move(other._mat);
    other._ROWS=0;
    other._COLS=0;
}

SparseMatrix::~SparseMatrix()
{
    for (int i = 0; i < _ROWS; i++)
    {
        for (int j = 0; j < _COLS; j++)
        {
            reset(j,i);
        }
        
    }
}

void SparseMatrix::insert(int idX,int idY,int* value)
{
    if(_mat[idY][idX])
        delete _mat[idY][idX];
    _mat[idY][idX]=value;
}

void SparseMatrix::reset(int idX,int idY)
{
    if(_mat[idY][idX])
    {
        delete _mat[idY][idX];
        _mat[idY][idX]=nullptr;
    }
}

std::vector<int*>& SparseMatrix::operator[](int x)
{
    return _mat[x];
}

std::ostream& operator<<(std::ostream& os,const SparseMatrix& matrix)
{
    for (int i = 0; i < matrix._ROWS; i++)
    {
        for (int j = 0; j < matrix._COLS; j++)
        {
            if(matrix._mat[i][j])
            {
                std::cout<<*matrix._mat[i][j]<<' ';
            }
            else
            {
                std::cout<<"0 ";
            }
            
        }
        std::cout<<'\n';
    }
    
    return os;
}
