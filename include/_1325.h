#ifndef BAEKJOON__1325_H
#define BAEKJOON__1325_H

#include <vector>
#include <string>

namespace _1325 {
    void BFS(int node);
    extern long N;
    extern std::vector<std::vector<int>> A;
    extern std::vector<int> answer;
    extern std::vector<bool> visited;

    std::vector<int> GetResult();
}

#endif //BAEKJOON__1325_H
