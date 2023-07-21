#include "_2458.h"

#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N;

    std::cin >> N;

    std::vector<int> vec;
    for (int i = 0; i < N; i++) {
        int tmp;
        std::cin >> tmp;
        vec.push_back(tmp);
    }

    _2458::Solution solution(vec);

    std::cout << solution.GetAnswer() << '\n';

    return 0;
}

