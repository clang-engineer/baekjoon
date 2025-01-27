//
// Created by zero on 2023/07/10.
//

#include "baekjoon/_2720.h"
#include <vector>

namespace baekjoon_2720 {
    std::vector<int> Solution::GetChange() {
        std::vector<int> result(4, 0);

        for (int i = 0; i < 4; i++) {
            result[i] = total_payment / coins[i].value;
            total_payment -= result[i] * coins[i].value;
        }

        return result;
    }
}

