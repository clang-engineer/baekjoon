#include "2501.h"

namespace _2501 {
Solution::Solution(int n) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);
        }
    }
};

int Solution::GetKthFactor(int k) {
    if (factors.size() < k) {
        return 0;
    }

    return factors[k - 1];
};
}