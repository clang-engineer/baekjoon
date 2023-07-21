//
// Created by zero on 2023/07/21.
//
#include "_2458.h"

#include <vector>
#include <algorithm>

namespace _2458 {
    Solution::Solution(std::vector<int> vec_) : vec(std::move(vec_)) {}

    int Solution::GetGCD(int a, int b) {
        if (b == 0) {
            return a;
        }
        return GetGCD(b, a % b);
    }

    int Solution::GetAnswer() {
        std::vector<int> gap_vec;

        for (int i = 0; i < vec.size() - 1; i++) {
            gap_vec.push_back(std::abs(vec[i] - vec[i + 1]));
        }

        int gcd = gap_vec[0];

        for (int i = 1; i < gap_vec.size(); i++) {
            gcd = GetGCD(gcd, gap_vec[i]);
        }

        int answer = 0;

        for (int i = 0; i < gap_vec.size(); i++) {
            answer += gap_vec[i] / gcd - 1;
        }

        return answer;
    }
}