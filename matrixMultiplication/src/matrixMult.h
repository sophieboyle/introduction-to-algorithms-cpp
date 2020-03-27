//
// Created by soppy on 27/03/2020.
//

#ifndef ARRAYMULTIPLICATION_MATRIXMULT_H
#define ARRAYMULTIPLICATION_MATRIXMULT_H

#include <iostream>
#include <vector>

class Matrix {
public:
    Matrix(unsigned, unsigned, int);
    Matrix operator+(Matrix &);
    int& operator()(const unsigned &, const unsigned &);
    void print() const;
    unsigned getRows() const;
    unsigned getCols() const;
private:
    unsigned m_rowSize; // Maintains rowsize of the matrix
    unsigned m_colSize; // Maintains column size of the matrix
    std::vector<std::vector<int> > m_matrix; // Maintains contents of the matrix
};

#endif //ARRAYMULTIPLICATION_MATRIXMULT_H
