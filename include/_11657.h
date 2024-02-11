//
// Created by zero on 2024/02/11.
//

#ifndef BAEKJOON__11657_H
#define BAEKJOON__11657_H

#include <vector>

namespace _11657 {
    typedef std::tuple<int, int, int> edge;

    bool HasNegativeCircle(std::vector<long> &distances, std::vector<edge> &edges);

    std::vector<long> GetDistances(int node_count, std::vector<edge> &edges);

    std::vector<edge> StdCinEdges(int edge_count);
}

#endif //BAEKJOON__11657_H
