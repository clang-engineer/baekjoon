#include <iostream>
#include <vector>
#include <map>

#include "_10816.h"

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N;

    std::cin >> N;

    std::map<int, int> map;

    for (int i = 0; i < N; ++i) {
        int num;
        std::cin >> num;
        if (map.find(num) != map.end()) {
            map[num] += 1;
        } else {
            map[num] = 1;
        }
    }

    int M;

    std::cin >> M;

    std::vector<int> vec;

    for (int i = 0; i < M; ++i) {
        int num;
        std::cin >> num;
        vec.push_back(num);
    }

    _10816::Solution solution(map, vec);
    std::cout << solution.GetNumCountResult() << std::endl;


}

