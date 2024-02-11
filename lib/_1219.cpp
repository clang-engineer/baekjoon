//
// Created by zero on 2024/02/11.
//

#include "_1219.h"

namespace _1219 {
    std::vector<long> GetDistances(
            std::vector<edge> &edges,
            std::vector<long> &city_money,
            int node_count,
            int start_node
    ) {
        std::vector<long> distances = std::vector<long>(node_count + 1, LONG_MIN);

        distances[start_node] = city_money[start_node];

        for (int i = 0; i <= node_count + 50; i++) {
            for (edge e: edges) {
                int start = std::get<0>(e);
                int end = std::get<1>(e);
                int price = std::get<2>(e);

                if (distances[start] == LONG_MIN) {
                    continue;
                } else if (distances[start] == LONG_MAX) {
                    distances[end] = LONG_MAX;
                } else if (distances[end] < distances[start] + city_money[end] - price) {
                    distances[end] = distances[start] + city_money[end] - price;

                    if (i >= node_count) {
                        distances[end] = LONG_MAX;
                    }
                }
            }
        }

        return distances;
    }
}