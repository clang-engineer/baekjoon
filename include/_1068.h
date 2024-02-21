//
// Created by zero on 2024/02/21.
//

#ifndef BAEKJOON__1068_H
#define BAEKJOON__1068_H

#include <iostream>
#include <vector>

namespace _1068 {
    extern int N;
    extern std::vector<std::vector<int>> tree;
    extern int answer;
    extern int delete_node;
    extern std::vector<bool> visited;

    void DFS(int number);
}


#endif //BAEKJOON__1068_H
