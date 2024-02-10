#include <iostream>
#include <vector>
#include <limits.h>

#include "_1753.h"

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int node_count, edge_count, start_node;

    std::vector<std::vector<_1753::edge>> graph;

    std::cin >> node_count >> edge_count >> start_node;

    graph.resize(node_count + 1);

    for (int i = 0; i < edge_count; i++) {
        int u, v, w;
        std::cin >> u >> v >> w;
        graph[u].push_back({v, w});
    }

    std::vector<int> result = _1753::GetDijkstraDistance(node_count, start_node, graph);

    for (int i = 1; i <= node_count; i++) {
        if (result[i] == INT_MAX) {
            std::cout << "INF\n";
        } else {
            std::cout << result[i] << "\n";
        }
    }

}

