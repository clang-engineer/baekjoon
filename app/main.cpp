#include <iostream>
#include <vector>

#include "_2563.h"

int main() {

    int N;

    std::cin >> N;

    std::vector<_2563::Coord> paper;

    for (int i = 0; i < N; i++) {
        int x, y;

        std::cin >> x >> y;

        _2563::Coord coord = {x, y};
        paper.push_back(coord);
    }

    _2563::Solution s(paper);
    std::cout << s.GetNonOverlapArea() << std::endl;

    return 0;
}

