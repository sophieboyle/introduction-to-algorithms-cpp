#include <limits>
#include <iostream>
#include "mergeSort.h"

void merge(int A[], int p, int q, int r){
    // Length of partition A[p..q]
    int n1 = q - p + 1;
    // Length of partition A[q+1..r]
    int n2 = r - q;

    // Defining new partitions (+1 includes sentinels)
    int L[n1 + 1];
    int R[n2 + 1];

    copyContents(L, A, p, n1);
    copyContents(R, A, q + 1, n2);

    // Assigning sentinels
    L[n1] = std::numeric_limits<int>::max();
    L[n2] = std::numeric_limits<int>::max();


    // Initialising index trackers
    int i{0};
    int j{0};

    // Merge the partitions
    for (int k{p}; k <= r; ++k){
        if (L[i] <= R[j]){
            A[k] = L[i];
            ++i;
        } else {
            A[k] = R[j];
            ++j;
        }
    }
}

void mergeSort(int A[], int p, int r){
    // If there is more than one element in the partition
    if (p < r){
        // Find midpoint
        int q = (p + r) / 2;
        // Recursively call mergeSort on partitions
        mergeSort(A, p, q);
        mergeSort(A, q + 1, r);
        // Perform merge on the smallest partitions first,
        // going to the largest, sorted partition
        merge(A, p, q, r);
    }
}

void copyContents(int partition[], int A[], int p, int n){
    for (int i{0}; i < n; ++i){
        partition[i] = A[p + i];
    }
}