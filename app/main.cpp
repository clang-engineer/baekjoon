#include <iostream>
#include <vector>
#include <queue>

#include "_1916.h"

typedef _1916::edge edge;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int node_count, edge_count;
    std::cin >> node_count >> edge_count;

    std::vector<std::vector<edge>> graph(node_count + 1);
    std::priority_queue<edge, std::vector<edge>, std::greater<edge>> pq;

    for (int i = 0; i < edge_count; i++) {
        int from, to, weight;
        std::cin >> from >> to >> weight;
        graph[from].push_back({to, weight});
    }

    int start_node, end_node;
    std::cin >> start_node >> end_node;
    int result = _1916::dijkstra(start_node, end_node,
                          node_count, graph);
    std::cout << result << '\n';
}

