void selectionSort(int A[], int size){
    int minIndex;
    // Iterate over all elements
    for (int i{0}; i < size - 1; ++i){
        minIndex = i;
        // Find the smallest of the remaining partition
        for (int j{i}; j < size; ++j){
            if (A[j] < A[minIndex]){
                minIndex = j;
            }
        }
        // Swap element at position i with minimum
        int temp = A[i];
        A[i] = A[minIndex];
        A[minIndex] = temp; 
    }
}