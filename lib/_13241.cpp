#include "_13241.h"

namespace _13241 {
    Solution::Solution(long long A_, long long B_) : A(A_), B(B_) {}

    long long Solution::GetAnswer() {
        long long a = A, b = B;
        while (b != 0) {
            long long r = a % b;
            a = b;
            b = r;
        }
        return A * B / a;
    }
}