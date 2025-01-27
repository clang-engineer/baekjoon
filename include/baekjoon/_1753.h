//
// Created by zero on 2024/02/10.
//

#ifndef BAEKJOON_1753_H
#define BAEKJOON_1753_H

#include <vector>

namespace baekjoon_1753 {
    typedef std::pair<int, int> edge;

    std::vector<int> GetDijkstraDistance(int node_count, int start, std::vector<std::vector<edge>> &graph);
}

#endif //BAEKJOON_1753_H
