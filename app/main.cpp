#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>

typedef std::pair<int, int> edge;

std::vector<int> GetDijkstraDistance(int node_count, int start, std::vector<std::vector<edge>> &graph);

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int node_count, edge_count, start_node;

    std::vector<std::vector<edge>> graph;

    std::cin >> node_count >> edge_count >> start_node;

    graph.resize(node_count + 1);

    for (int i = 0; i < edge_count; i++) {
        int u, v, w;
        std::cin >> u >> v >> w;
        graph[u].push_back({v, w});
    }

    std::vector<int> result = GetDijkstraDistance(node_count, start_node, graph);

    for (int i = 1; i <= node_count; i++) {
        if (result[i] == INT_MAX) {
            std::cout << "INF\n";
        } else {
            std::cout << result[i] << "\n";
        }
    }

}

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
