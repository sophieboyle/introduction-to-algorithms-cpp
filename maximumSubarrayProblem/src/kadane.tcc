//
// Created by soppy on 27/03/2020.
//

#ifndef MAXIMUMSUBARRAYPROBLEM_KADANE_TCC
#define MAXIMUMSUBARRAYPROBLEM_KADANE_TCC

#include <cstddef>
#include <limits>
#include "returnStruct.h"

/**
 * Uses kadane's algorithm to find the maximum subarray
 * in linear (O(n)) time.
 *
 * @tparam n The length of the array
 * @param A The array to find the subarray of
 * @return The lowest/highest index, and sum of the maximum subarray
 */
template <size_t n>
ret kadane(int (&A)[n]){
    // Track end indexes
    int maxRight{0};
    int maxLeft{0};
    int currLeft{0};
    // Track sums
    int maxSum{0};
    int currSum{0};
    // Traverse from left to right
    for (int i{0}; i < n - 1; ++i){
        currSum += A[i];
        // If this sum is greater than the maximum sum, set the max sum and index
        // pointers to be indicative of this partition
        if (currSum > maxSum){
            maxSum = currSum;
            maxLeft = currLeft;
            maxRight = i;
        }
        // If current sum is negative, set to the empty subarray (with a sum of 0)
        // Increment the tracking left index for the next iteration.
        if (currSum < 0){
            currSum = 0;
            currLeft = i + 1;
        }
    }
    // Return with maximum subarray details
    return {maxLeft, maxRight, maxSum};
}

#endif //MAXIMUMSUBARRAYPROBLEM_KADANE_TCC
