#include <iostream>
#include <vector>
#include <map>

#include "_1764.h"

int main() {
    int N, M;

    std::cin >> N >> M;

    std::vector<std::string> heard;
    std::vector<std::string> seen;

    for (int i = 0; i < N; ++i) {
        std::string s;
        std::cin >> s;
        heard.push_back(s);
    }

    for (int i = 0; i < M; ++i) {
        std::string s;
        std::cin >> s;
        seen.push_back(s);
    }

    _1764::Solution solution(std::move(heard), std::move(seen));

    std::vector<std::string> result = solution.GetResult();

    std::cout << result.size() << std::endl;
    for (const auto &r : result) {
        std::cout << r << std::endl;
    }
}

