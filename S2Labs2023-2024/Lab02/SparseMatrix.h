#ifndef SPARSE_MATRIX_H
#define SPARSE_MATRIX_H

#include <vector>
#include <iostream>

class SparseMatrix
{
private:
    int _ROWS;
    int _COLS;
    std::vector<std::vector<int*>> _mat;
public:
    SparseMatrix(int ROWS, int COLS);
    SparseMatrix(const SparseMatrix& other);
    SparseMatrix(SparseMatrix&& other);
    ~SparseMatrix();

    void insert(int idX,int idY,int* value);
    void reset(int idX,int idY);
    std::vector<int*>& operator[](int x);

    friend std::ostream& operator<<(std::ostream& os,const SparseMatrix& matrix);
};




#endif
