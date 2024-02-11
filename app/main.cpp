#include <iostream>
#include <vector>
#include <tuple>
#include <limits.h>

#include "_11657.h"

using namespace _11657;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int node_count, edge_count;
    std::cin >> node_count >> edge_count;

    std::vector<edge> edges = StdCinEdges(edge_count);

    std::vector<long> distances = GetDistances(node_count, edges);

    bool has_negative_cycle = HasNegativeCircle(distances, edges);

    if (has_negative_cycle) {
        std::cout << -1 << std::endl;
    } else {
        for (int i = 2; i <= node_count; i++) {
            if (distances[i] == LONG_MAX) {
                std::cout << -1 << std::endl;
            } else {
                std::cout << distances[i] << std::endl;
            }
        }
    }
}

