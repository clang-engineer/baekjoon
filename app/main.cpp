#include <iostream>

#include "_18870.h"
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> input;
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        input.push_back(x);
    }

    _18870::Solution s(input);
    std::vector<int> result = s.GetResult();

    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    return 0;
}

