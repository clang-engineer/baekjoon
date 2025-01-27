#include "baekjoon/_1934.h"

namespace baekjoon_1934 {
    Solution::Solution(int A_, int B_) : A(A_), B(B_) {}

    int Solution::GetAnswer() {
        int a = A, b = B;
        while (b != 0) {
            int r = a % b;
            a = b;
            b = r;
        }
        return A * B / a;
    }
}