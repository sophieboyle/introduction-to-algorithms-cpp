#include "insertionSort.h"

void insertionSort(int A[], int size){
    int key;
    int i;
    // Iterate through unsorted partition
    for (int j{1}; j < size; j++){
        key = A[j];
        // Set i to point at the rightmost point of the
        // sorted partition
        i = j - 1;
        // Iterate leftwards through the sorted partition
        while ((i >= 0) && (A[i] > key)){
            // Shift element right-wards
            A[i + 1] = A[i];
            // Move to check next element (left-wards)
            --i;
        }
        // Place key in proper position
        A[i + 1] = key;
    }
}

void insertionSortDesc(int A[], int size){
    int key;
    int i;
    for (int j{1}; j < size; j++){
        key = A[j];
        i = j - 1;
        while ((i >= 0) && (A[i] < key)){
            A[i + 1] = A[i];
            --i;
        }
        A[i + 1] = key;
    }
}