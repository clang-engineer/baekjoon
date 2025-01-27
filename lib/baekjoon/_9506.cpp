//
// Created by zero on 2023/07/11.
//

#include "baekjoon/_9506.h"
#include <string>
#include <vector>

namespace baekjoon_9506 {
    Solution::Solution(int target_num) {

        std::vector<int> divisors = {};

        int sum = 0;
        for (int i = 1; i < target_num; i++) {
            if (target_num % i == 0) {
                sum += i;
                divisors.push_back(i);
            }
        }

        if (sum == target_num) {
            result_string = std::to_string(target_num) + " = ";
            for (size_t i = 0; i < divisors.size(); i++) {
                result_string += std::to_string(divisors[i]);
                if (i != divisors.size() - 1) {
                    result_string += " + ";
                }
            }
        } else {
            result_string = std::to_string(target_num) + " is NOT perfect.";
        }
    }

    std::string Solution::GetResultString() {
        return result_string;
    }

}