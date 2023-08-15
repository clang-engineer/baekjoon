#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::unordered_map<std::string, int> map = {};
    std::vector<std::string> vec;

    int N, M;
    std::cin >> N >> M;

    for (int i = 0; i < N; i++) {
        std::string input;
        std::cin >> input;

        if (input.length() < M) continue;

        if (map.find(input) == map.end()) {
            vec.push_back(input);
            map[input] = 1;
        } else {
            map[input]++;
        }
    }


    std::sort(vec.begin(), vec.end(), [&map](const std::string &a, const std::string &b) {
        if (map.find(a)->second == map.find(b)->second) {
            if (a.size() == b.size()) {
                return a < b;
            } else {
                return a.size() > b.size();
            }
        } else {
            return map.find(a)->second > map.find(b)->second;
        }
    });


    for (auto it = vec.begin(); it != vec.end(); it++) {
        std::cout << *it << '\n';
    }


    return 0;
}

