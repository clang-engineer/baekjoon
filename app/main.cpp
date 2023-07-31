#include <iostream>

#include "../include/_4134.h"

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    long long N;

    std::cin >> N;


    _4134::Solution solution;
    for (long long i = 0; i < N; i++) {
        long long num;
        std::cin >> num;
        std::cout << solution.GetNextDecimal(num) << '\n';
    }
    return 0;
}

