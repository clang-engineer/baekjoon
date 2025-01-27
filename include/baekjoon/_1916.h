//
// Created by zero on 2024/02/10.
//

#ifndef BAEKJOON__1916_H
#define BAEKJOON__1916_H

#include <vector>

namespace baekjoon_1916 {
    typedef std::pair<int, int> edge;

    int dijkstra(int start, int end, int node_count, std::vector<std::vector<edge>> &graph);
}

#endif //BAEKJOON__1916_H
