//
// Created by zero on 2024/02/11.
//

#ifndef BAEKJOON__1219_H
#define BAEKJOON__1219_H

#include <vector>

namespace baekjoon_1219 {
    typedef std::tuple<int, int, int> edge;

    std::vector<long> GetDistances(
            std::vector<edge> &edges,
            std::vector<long> &city_money,
            int node_count,
            int start_node
    );

}

#endif //BAEKJOON__1219_H
