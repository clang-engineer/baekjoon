#include <iostream>
#include <vector>
#include "_1037.h"

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::vector<long long> vec;

    int N;
    std::cin >> N;

    for (int i = 0; i < N; i++) {
        long long num;
        std::cin >> num;
        vec.push_back(num);
    }


    _1037::Solution solution(vec);
    std::cout << solution.solution() << '\n';



    return 0;
}

