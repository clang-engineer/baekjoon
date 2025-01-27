//
// Created by zero on 2024/02/07.
//

#ifndef BAEKJOON__1043_H
#define BAEKJOON__1043_H

#include <vector>

namespace baekjoon_1043 {
    extern std::vector<int> parent;
    extern std::vector<int> trueP;
    extern std::vector<std::vector<int>> party;
    extern int result;

    void unionfunc(int a, int b);

    int find(int a);
}


#endif //BAEKJOON__1043_H
