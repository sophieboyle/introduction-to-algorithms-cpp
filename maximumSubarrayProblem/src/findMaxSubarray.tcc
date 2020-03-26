//
// Created by soppy on 26/03/2020.
//

#ifndef MAXIMUMSUBARRAYPROBLEM_FINDMAXSUBARRAY_TCC
#define MAXIMUMSUBARRAYPROBLEM_FINDMAXSUBARRAY_TCC

#include <cstddef>
#include <limits>

/**
 * A struct containing the properties of a subarray.
 */
struct ret{
    int low; // The lowest index of the subarray
    int high; // The highest index of the subarray
    int sum; // The sum of all the elements in the subarray
};

/**
 * Finds the subarray with the largest sum of elements
 * which crosses the midpoint. This is done by finding
 * the largest subarray on the leftside of the midpoint,
 * and the largest subarray on the rightside of the midpoint,
 * resulting in the partitions being put together being the
 * largest subarray crossing the midpoint. Has a running
 * time of O(n), where n is the elements high - low + 1,
 * i.e. the length of the partition passed in.
 *
 * @tparam n The length of the array
 * @param A The array to find the max subarray of
 * @param low The lowest index of the partition
 * @param mid The middle index of the partition
 * @param high The highest index of the partition
 * @return
 */
template <size_t n>
ret findMaxCrossingSubarray(int (&A)[n], int low, int mid, int high){
    // Variables tracking the left of the partition
    int leftSum{std::numeric_limits<int>::lowest()};
    int sum{0};
    int maxLeft{mid}; // Maintains the max lower index of the partition
    // Keep extending the left-half of the partition until the sum does not increase
    for (int i{mid}; i >= low; --i){
        sum += A[i];
        if (sum > leftSum){
            leftSum = sum;
            maxLeft = i;
        }
    }
    // Variables tracking the right of the partition
    int rightSum{std::numeric_limits<int>::lowest()};
    sum = 0;
    int maxRight{mid + 1};
    // Keep extending the right-half of the partition until the sum does not increase
    for (int i{mid + 1}; i <= high; ++i){
        sum += A[i];
        if (sum > rightSum){
            rightSum = sum;
            maxRight = i;
        }
    }
    // Return the details of the partition
    return {maxLeft, maxRight, leftSum + rightSum};
}

/**
 * Finds the subarray with the largest sum of elements.
 *
 * @tparam n Length of the array
 * @param A Array to find the subarray of
 * @param low Lowest index of the partition
 * @param high Highest index of the partition
 * @return
 */
template <size_t n>
ret findMaximumSubarray(int (&A)[n], int low, int high){
    // Base case: the partition consists on 1 element
    if (low == high){
        return {low, high, A[low]};
    } else {
        int mid{(low + high) / 2};
        // Divide: Find the maximum partitions of each possible section
        ret left = findMaximumSubarray(A, low, mid);
        ret right = findMaximumSubarray(A, mid + 1, high);
        // Merge
        ret cross = findMaxCrossingSubarray(A, low, mid, high);
        // Return the maximum partition
        if ((left.sum >= right.sum) && (left.sum >= cross.sum)){
            return left;
        } else if ((right.sum >= left.sum) && (right.sum >= cross.sum)){
            return right;
        } else {
            return cross;
        }
    }
}

#endif //MAXIMUMSUBARRAYPROBLEM_FINDMAXSUBARRAY_TCC
