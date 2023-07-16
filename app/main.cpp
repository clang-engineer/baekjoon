#include <iostream>
#include <vector>
#include <map>

#include "_7785.h"

int main() {
    int n;
    std::cin >> n;

    std::map<std::string, std::string> input;
    for (int i = 0; i < n; ++i) {
        std::string name, status;
        std::cin >> name >> status;
        input[name] = status;
    }

    _7785::Solution solution(input);
    std::vector<std::string> result = solution.GetResult();
    for (const auto &i : result) {
        std::cout << i << "\n";
    }

    return 0;
}

