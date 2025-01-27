#include "baekjoon/2501.h"

namespace baekjoon_2501 {
Solution::Solution(int n) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);
        }
    }
};

int Solution::GetKthFactor(int k) {
    int size = static_cast<int>(factors.size());
    if (size < k) {
        return 0;
    }

    return factors[k - 1];
};
}