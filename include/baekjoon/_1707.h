//
// Created by zero on 2024/02/06.
//

#ifndef BAEKJOON__1707_H
#define BAEKJOON__1707_H

#include <vector>
#include <string>

namespace baekjoon_1707 {
    void DFS(int node);

    extern long V, E;
    extern std::vector<std::vector<int>> A;
    extern std::vector<bool> visited;
    extern std::vector<int> check;
    extern bool IsEven;

    std::string GetResult();
}

#endif //BAEKJOON__1707_H
