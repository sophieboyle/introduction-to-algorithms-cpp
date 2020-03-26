//
// Created by soppy on 26/03/2020.
//

#ifndef MAXIMUMSUBARRAYPROBLEM_BRUTEFORCEFINDMAX_H
#define MAXIMUMSUBARRAYPROBLEM_BRUTEFORCEFINDMAX_H

#include <cstddef>
#include <iostream>
#include <limits>

/**
 * A brute force method of finding the maximum subarray.
 * O(n^2) running time.
 *
 * @param A The array
 * @param len The length of the array
 * @return
 */
template <std::size_t n>
int bruteForceFindMax(int (&A)[n]){
    int max{std::numeric_limits<int>::lowest()};
    int buy{0};
    int sell{0};
    for (int i{0}; i < (n - 2); ++i){
        for (int j{i + 1}; j < (n - 1); ++j){
            if ((A[j] - A[i]) > max){
                max = (A[j] - A[i]);
                buy = i;
                sell = j;
            }
        }
    }
    std::cout << "Buy on day " << buy << " and sell on day " << sell << " for a profit of " << max << "\n";
    return max;
}

#endif //MAXIMUMSUBARRAYPROBLEM_BRUTEFORCEFINDMAX_H
