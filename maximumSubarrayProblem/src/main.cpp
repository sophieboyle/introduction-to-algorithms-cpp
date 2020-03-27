#include <iostream>
#include "bruteForceFindMax.tcc"
#include "findMaxSubarray.tcc"
#include "returnStruct.h"
#include "kadane.tcc"

int main() {
    int A[] = {1, -2, 3, 4, 5, -16};
    bruteForceFindMax(A);

    int B[] = {13, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7};
    ret ans = findMaximumSubarray(B, 0, (sizeof(B) / sizeof(int)) - 1);
    std::cout << "Buy: " << ans.low << " Sell: " << ans.high << " For: " << ans.sum << '\n';

    ret kadaneAns = kadane(A);
    std::cout << "Kadane says.. Buy: " << kadaneAns.low << " Sell: " << kadaneAns.high << " For: " << kadaneAns.sum << '\n';

    return 0;
}
