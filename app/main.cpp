#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>

typedef std::pair<int, int> edge;
static int V, E, K;
static std::vector<int> distance;
static std::vector<bool> visited;
static std::vector<std::vector<edge>> graph;

static std::priority_queue<edge, std::vector<edge>, std::greater<edge>> pq;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::cin >> V >> E >> K;

    distance.resize(V + 1);
    std::fill(distance.begin(), distance.end(), INT_MAX);

    visited.resize(V + 1);
    std::fill(visited.begin(), visited.end(), false);

    graph.resize(V + 1);

    for (int i = 0; i < E; i++) {
        int u, v, w;
        std::cin >> u >> v >> w;
        graph[u].push_back({v, w});
    }

    pq.push(std::make_pair(0, K));
    distance[K] = 0;

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

    for (int i = 1; i <= V; i++) {
        if (distance[i] == INT_MAX) {
            std::cout << "INF\n";
        } else {
            std::cout << distance[i] << "\n";
        }
    }

}