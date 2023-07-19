#include "_13909.h"
#include <math.h>

namespace _13909 {
    Solution::Solution(int N_) : N(N_) {
    }

    int Solution::GetOpenMirrorNumber() {
        return (int) sqrt(N);
    }
}