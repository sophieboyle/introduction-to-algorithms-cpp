//
// Created by soppy on 27/03/2020.
//

#ifndef ARRAYMULTIPLICATION_RECMATRIXMULT_H
#define ARRAYMULTIPLICATION_RECMATRIXMULT_H

#include "matrix.h"

struct subSection{
    Matrix A;
    Matrix B;
    Matrix C;
    Matrix D;
};

Matrix recSqrMatrixMult(Matrix &A, Matrix &B);
subSection partition(Matrix &M);

#endif //ARRAYMULTIPLICATION_RECMATRIXMULT_H
