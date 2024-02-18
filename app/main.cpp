#include <iostream>
#include <queue>

typedef struct Edge {
    int src, dest, weight;

    bool operator>(const Edge &e) const {
        return weight > e.weight;
    }
} Edge;

int find_parent(std::vector<int> &parent, int node);

void munion(std::vector<int> &parent, int a, int b);

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int node_count, edge_count;
    std::cin >> node_count >> edge_count;

    std::vector<int> parent(node_count + 1);
    for (int i = 0; i <= node_count; i++) {
        parent[i] = i;
    }

    std::priority_queue<Edge, std::vector<Edge>, std::greater<Edge>> pq;
    for (int i = 0; i < edge_count; i++) {
        int src, dest, weight;
        std::cin >> src >> dest >> weight;
        pq.push({src, dest, weight});
    }

    int use_edge_count = 0;
    int total_weight = 0;

    while (use_edge_count < node_count - 1) {
        Edge e = pq.top();
        pq.pop();

        if (find_parent(parent, e.src) != find_parent(parent, e.dest)) {
            munion(parent, e.src, e.dest);
            total_weight += e.weight;
            use_edge_count++;
        }
    }

    std::cout << total_weight << '\n';


    return 0;
}

int find_parent(std::vector<int> &parent, int node) {
    if (parent[node] == node) {
        return node;
    }
    return parent[node] = find_parent(parent, parent[node]);
}

void munion(std::vector<int> &parent, int a, int b) {
    a = find_parent(parent, a);
    b = find_parent(parent, b);

    if (a != b) {
        parent[b] = a;
    }
}
