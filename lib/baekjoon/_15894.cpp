#include "baekjoon/_15894.h"

namespace baekjoon_15894 {
    Solution::Solution(long ractangle_count) {
        result += ractangle_count * 4;
    }

    long Solution::GetResult() const {
        return result;
    }
}