#include <iostream>
#include <set>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::set<std::string> set = {};

    int N;

    std::cin >> N;

    int result = 0;

    for (int i = 0; i < N; i++) {
        std::string input_a, input_b;

        std::cin >> input_a >> input_b;

        if (set.find(input_a) != set.end() && set.find(input_b) != set.end()) {
            continue;
        } else if (set.find(input_a) != set.end() || set.find(input_b) != set.end()) {
            result++;
            set.insert(input_a);
            set.insert(input_b);
            continue;
        } else if (input_a == "ChongChong" || input_b == "ChongChong") {
            result++;
            set.insert(input_a);
            set.insert(input_b);
            continue;
        }
    }

    std::cout << result + 1 << '\n';

    return 0;
}

