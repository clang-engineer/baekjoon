//
// Created by zero on 2023/07/10.
//

#include "baekjoon/_2563.h"

namespace baekjoon_2563 {
    int Solution::GetNonOverlapArea() const {
        int result = 0;

        std::vector<std::vector<bool>> board(100, std::vector<bool>(100, false));
        for (const auto &coord: paper) {
            for (int i = coord.x; i < coord.x + 10; ++i) {
                for (int j = coord.y; j < coord.y + 10; ++j) {
                    if (!board[i][j]) {
                        board[i][j] = true;
                        result++;
                    }
                }
            }
        }

        return result;
    }
}
