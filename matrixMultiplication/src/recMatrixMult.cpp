//
// Created by soppy on 27/03/2020.
//

#include "recMatrixMult.h"

Matrix recSqrMatrixMult(Matrix &A, Matrix &B){
    // Create new matrice to return
    Matrix C(A.getRows(), B.getCols(), 0);
    // Base case: matrice consists of one element
    if ((A.getRows() == 1) && (B.getCols() == 1)){
        C(0, 0) = A(0, 0) * B(0, 0);
    } else {
        // partition here
    }
}

subSection partition(Matrix &M){

}