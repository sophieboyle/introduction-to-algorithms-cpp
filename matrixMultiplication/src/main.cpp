#include <iostream>
#include "matrix.h"

int main() {
    Matrix A(2, 2, 0);
    Matrix B(2, 2, 0);

    for (int i{0}; i < 2; i++){
        for (int j{0}; j < 2; j++){
            A(i, j) = 1;
            B(i, j) = 1;
        }
    }

    Matrix sum = A + B;
    sum.print();

    return 0;
}
