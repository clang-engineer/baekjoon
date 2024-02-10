#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>

typedef std::pair<int, int> edge;

int dijkstra(int start, int end, int node_count, std::vector<std::vector<edge>> &graph);

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
    int result = dijkstra(start_node, end_node,
                          node_count, graph);
    std::cout << result << '\n';
}

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
