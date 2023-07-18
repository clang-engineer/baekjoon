#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

#include "_1620.h"

int main() {
    int N, M;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::cin >> N >> M;

    std::unordered_map<std::string, int> m;
    std::vector<std::string> v;

    for (int i = 0; i < N; i++) {
        std::string s;
        std::cin >> s;
        m[s] = i;
        v.push_back(s);
    }

    _1620::Solution solution(m, v);

    for (int i = 0; i < M; i++) {
        std::string s;
        std::cin >> s;
        std::cout << solution.FindMatch(s) << '\n';
    }
}

