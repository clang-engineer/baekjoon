//
// Created by zero on 2024/02/10.
//

#include <vector>
#include <queue>

#include "_1916.h"

namespace _1916 {
    int dijkstra(int start, int end, int node_count, std::vector<std::vector<edge>> &graph) {
        std::vector<int> distance = std::vector<int>(node_count + 1, INT_MAX);
        std::vector<bool> visited = std::vector<bool>(node_count + 1, false);

        std::priority_queue<edge, std::vector<edge>, std::greater<edge>> pq;

        pq.push({0, start});
        distance[start] = 0;

        while (!pq.empty()) {
            edge current = pq.top();
            pq.pop();
            int current_node = current.second;

            if (!visited[current_node]) {
                visited[current_node] = true;
                for (edge n: graph[current_node]) {
                    if (!visited[n.first] && distance[n.first] > distance[current_node] + n.second) {
                        distance[n.first] = distance[current_node] + n.second;
                        pq.push({distance[n.first], n.first});
                    }
                }
            }
        }

        return distance[end];
    }

}