#include <iostream>
#include "bruteForceFindMax.tcc"
#include "findMaxSubarray.tcc"

int main() {
    int A[] = {1, -2, 3, 4, 5, -16};
    bruteForceFindMax(A);

    int B[] = {13, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7};
    // int B[] = {2, -1, 3, 4, -5};
    ret ans = findMaximumSubarray(B, 0, (sizeof(B) / sizeof(int)) - 1);
    std::cout << "Buy: " << ans.low << " Sell: " << ans.high << " For: " << ans.sum << '\n';

    return 0;
}
