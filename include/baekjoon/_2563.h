//
// Created by zero on 2023/07/10.
//

#ifndef BAEKJOON__2563_H
#define BAEKJOON__2563_H

#include <vector>

namespace baekjoon_2563 {
    struct Coord {
        int x;
        int y;
    };

    class Solution {
    private:
        std::vector<Coord> paper;
    public:
        Solution(std::vector<Coord> paper) : paper(paper) {}

        int GetNonOverlapArea() const;
    };

}


#endif //BAEKJOON__2563_H
