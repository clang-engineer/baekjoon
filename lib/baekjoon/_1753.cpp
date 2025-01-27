//
// Created by zero on 2024/02/10.
//
#include <vector>
#include <queue>

#include "baekjoon/_1753.h"
#include <climits>

namespace baekjoon_1753 {
    std::vector<int> GetDijkstraDistance(
            int node_count,
            int start_node,
            std::vector<std::vector<edge>> &graph) {
        std::priority_queue<edge, std::vector<edge>, std::greater<edge>> pq;

        std::vector<int> distance;
        distance.resize(node_count + 1);
        std::fill(distance.begin(), distance.end(), INT_MAX);

        std::vector<bool> visited;
        visited.resize(node_count + 1);
        std::fill(visited.begin(), visited.end(), false);

        pq.push(std::make_pair(0, start_node));
        distance[start_node] = 0;

        while (!pq.empty()) {
            edge current = pq.top();
            pq.pop();

            int current_node = current.second;
            if (visited[current_node]) continue;

            visited[current_node] = true;

            for (auto &next: graph[current_node]) {
                int next_node = next.first;
                int next_weight = next.second;

                if (distance[next_node] > distance[current_node] + next_weight) {
                    distance[next_node] = distance[current_node] + next_weight;
                    pq.push(std::make_pair(distance[next_node], next_node));
                }
            }
        }
        return distance;
    }

}