#include <iostream>
#include "mergeSort.h"

void testMerge(){
    int A[] = {2, 6, 5, 3, 7, 1};
    // merge(A, 0, 2, 5);
    mergeSort(A, 0, 5);

    for (int i{0}; i < sizeof(A)/sizeof(A[0]); ++i){
        std::cout << A[i] << " ";
    }
}