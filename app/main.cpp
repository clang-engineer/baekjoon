#include "_1934.h"

#include <iostream>

int main() {
    int N;
    std::cin >> N;

    for (int i = 0; i < N; ++i) {
        int A, B;
        std::cin >> A >> B;
        _1934::Solution solution(A, B);
        std::cout << solution.GetAnswer() << '\n';
    }

    return 0;
}

