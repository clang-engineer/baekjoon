#include <iostream>
#include <vector>
#include <tuple>
#include <limits.h>

typedef std::tuple<int, int, int> edge;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int node_count, edge_count;
    std::cin >> node_count >> edge_count;

    std::vector<long> distances = std::vector<long>(node_count + 1, LONG_MAX);
    std::vector<edge> edges;

    for (int i = 0; i < edge_count; i++) {
        int start, end, time;
        std::cin >> start >> end >> time;
        edges.push_back(std::make_tuple(start, end, time));
    }

    distances[1] = 0;

    for (int i = 1; i < node_count; i++) {
        for (int j = 0; j < edge_count; j++) {
            edge e = edges[j];
            int start = std::get<0>(e);
            int end = std::get<1>(e);
            int time = std::get<2>(e);

            if (distances[start] != LONG_MAX && distances[start] + time < distances[end]) {
                distances[end] = distances[start] + time;
            }
        }
    }

    bool has_negative_cycle = false;

    for (int i = 0; i < edge_count; i++) {
        edge e = edges[i];
        int start = std::get<0>(e);
        int end = std::get<1>(e);
        int time = std::get<2>(e);

        if (distances[start] != LONG_MAX && distances[start] + time < distances[end]) {
            has_negative_cycle = true;
            break;
        }
    }

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