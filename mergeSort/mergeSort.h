#ifndef MERGESORT_H
#define MERGESORT_H

/*
 * @brief Sorts an array by merging two partitions of the array
 * Assumes that the partitions are sorted
 * @param int A[]: Array to sort
 * @param int p: Index of the beginning of the first partition
 * @param int q: Index of the end of the first partition
 * @param int r: End of the second partition
 */
void merge(int A[], int p, int q, int r);

/*
 * @brief Performs the merge sort using divide and conquer theory
 * Partition with recursion
 * @param int A[]: Array to sort
 * @param int p: Index to start at
 * @param int: r: Index of end
 */
void mergeSort(int A[], int p, int r);

/*
 * @brief Copies the contents of one array into another
 * @param int partition[]: New partition to copy elements into
 * @param int A[]: Contains elements to copy from
 * @param int p: Index to begin copying from
 * @param int n: Size of new partition
 */
void copyContents(int partition[], int A[], int p, int n);

#endif