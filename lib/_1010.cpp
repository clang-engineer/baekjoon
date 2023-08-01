#include "_1010.h"

namespace _1010 {
    Solution::Solution() {
        board.resize(30, std::vector<int>(30, 0));
        for (int i = 0; i < 30; ++i) {
            board[i][0] = 1;
            board[i][i] = 1;
        }
    }

    int Solution::GetCombination(int N, int M) {
        if (N < M) {
            std::swap(N, M);
        }

        if (board[N][M] != 0) {
            return board[N][M];
        }

        board[N][M] = GetCombination(N - 1, M - 1) + GetCombination(N - 1, M);
        return board[N][M];
    }
} // namespace _1010
