#include <iostream>
#include <vector>

#include "_9063.h"

int main() {

    int count;

    std::cin >> count;

    std::vector<std::pair<int, int>> coordinates;

    for (int i = 0; i < count; i++) {
        int x, y;
        std::cin >> x >> y;
        coordinates.push_back(std::make_pair(x, y));
    }

    if (count > 1) {
        _9063::Solution solution(coordinates);
        std::cout << solution.GetMaxWidth() << std::endl;
    }

    return 0;
}

