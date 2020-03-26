#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

/*
 * @brief Sorts the given array using a selection sort.
 * Selection sort works via:
 * For each i in A, finding the minimum from the partition
 * A[i...size-1] and swapping it into the position of A[i].
 * @param int A[]: The array to be sorted
 * @param int size: The size of the array
 */
void selectionSort(int A[], int size);

#endif