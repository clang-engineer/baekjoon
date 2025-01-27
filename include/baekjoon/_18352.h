//
// Created by zero on 2023/12/16.
//
#include <vector>

#ifndef BAEKJOON__18352_H
#define BAEKJOON__18352_H

namespace baekjoon_18352 {

    class Solution {
    private:
        int n;
        std::vector<int> visited;
        std::vector<std::vector<int>> graph;

    public:
        Solution(int n, std::vector<std::pair<int, int>> edges);
        std::vector<int> getBFSDistance(int start);
    };
};

#endif