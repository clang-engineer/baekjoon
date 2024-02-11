#include <iostream>
#include <vector>
#include <tuple>
#include <limits.h>

typedef std::tuple<int, int, int> edge;

bool HasNegativeCircle(std::vector<long> &distances, std::vector<edge> &edges);

std::vector<long> GetDistances(int node_count, std::vector<edge> &edges);

std::vector<edge > StdCinEdges(int edge_count);

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

bool HasNegativeCircle(std::vector<long> &distances, std::vector<edge> &edges) {
    bool has_negative_cycle = false;

    for (int i = 0; i < edges.size(); i++) {
        edge e = edges[i];
        int start = std::get<0>(e);
        int end = std::get<1>(e);
        int time = std::get<2>(e);

        if (distances[start] != LONG_MAX && distances[start] + time < distances[end]) {
            has_negative_cycle = true;
            break;
        }
    }

    return has_negative_cycle;
}


std::vector<long> GetDistances(int node_count, std::vector<edge> &edges) {
    std::vector<long> distances = std::vector<long>(node_count + 1, LONG_MAX);
    distances[1] = 0;

    for (int i = 1; i < node_count; i++) {
        for (int j = 0; j < edges.size(); j++) {
            edge e = edges[j];
            int start = std::get<0>(e);
            int end = std::get<1>(e);
            int time = std::get<2>(e);

            if (distances[start] != LONG_MAX && distances[start] + time < distances[end]) {
                distances[end] = distances[start] + time;
            }
        }
    }

    return distances;
}

std::vector<edge > StdCinEdges(int edge_count) {
    std::vector<edge> edges;

    for (int i = 0; i < edge_count; i++) {
        int start, end, time;
        std::cin >> start >> end >> time;
        edges.push_back(std::make_tuple(start, end, time));
    }

    return edges;
}