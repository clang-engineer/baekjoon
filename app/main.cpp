#include <iostream>
#include <queue>

#include "_1197.h"

using namespace _1197;


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int node_count, edge_count;
    std::cin >> node_count >> edge_count;

    std::vector<Edge> edges;
    for (int i = 0; i < edge_count; i++) {
        int src, dest, weight;
        std::cin >> src >> dest >> weight;
        edges.push_back({src, dest, weight});
    }

    int mst_total_weight = GetMSTWeight(node_count, edges);

    std::cout << mst_total_weight << '\n';

    return 0;
}

