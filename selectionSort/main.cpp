#include <iostream>
#include "selectionSort.h"

void testSel(){
    int A[] = {5, 2, 4, 6, 1, 3};
    selectionSort(A, sizeof(A)/sizeof(A[0]));
    for (int i{0}; i < sizeof(A)/sizeof(A[0]); ++i){
        std::cout << A[i] << " ";
    }
}