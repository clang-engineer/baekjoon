#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N;

    std::cin >> N;

    std::unordered_map<std::string, std::string> input;

    for (int i = 0; i < N; i++) {
        std::string name, status;
        std::cin >> name >> status;

        if (status == "enter") {
            input[name] = status;
        } else {
            input.erase(name);
        }
    }


    std::vector<std::string> result;
    for (const auto &i: input) {
        result.push_back(i.first);
    }

    std::sort(result.begin(), result.end(), std::greater<std::string>());

    for (const auto &i: result) {
        std::cout << i << "\n";
    }
}

