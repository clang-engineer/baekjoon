//
// Created by zero on 2024/02/07.
//

#ifndef BAEKJOON__1717_H
#define BAEKJOON__1717_H

#include <vector>

namespace baekjoon_1717 {
    extern std::vector<int> parent;

    void unionfunc(int a, int b);

    int find(int a);

    bool checkSame(int a, int b);
}

#endif //BAEKJOON__1717_H
