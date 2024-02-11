#include <iostream>
#include <vector>
#include <limits.h>
#include <tuple>

#include "_1219.h"

using namespace _1219;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int node_count, start_node, end_node, edge_count;
    std::cin >> node_count >> start_node >> end_node >> edge_count;

    std::vector<edge> edges;
    for (int i = 0; i < edge_count; i++) {
        int from, to, price;
        std::cin >> from >> to >> price;
        edges.push_back({from, to, price});
    }

    std::vector<long> city_money;
    for (int i = 0; i < node_count; i++) {
        long money;
        std::cin >> money;
        city_money.push_back(money);
    }

    std::vector<long> distances = GetDistances(edges, city_money, node_count, start_node);

    if (distances[end_node] == LONG_MAX) {
        std::cout << "Gee";
    } else if (distances[end_node] == LONG_MIN) {
        std::cout << "gg";
    } else {
        std::cout << distances[end_node];
    }
}

