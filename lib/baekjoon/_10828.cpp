#include "baekjoon/_10828.h"

namespace baekjoon_10828 {
    Solution::Solution(int N) {
        this->stack.reserve(N);
    }

    void Solution::Push(int X) {
        this->stack.push_back(X);
    }

    int Solution::Pop() {
        if (this->stack.empty()) {
            return -1;
        }
        int result = this->stack.back();
        this->stack.pop_back();
        return result;
    }

    int Solution::Size() {
        return this->stack.size();
    }

    int Solution::Empty() {
        return this->stack.empty();
    }

    int Solution::Top() {
        if (this->stack.empty()) {
            return -1;
        }
        return this->stack.back();
    }
}