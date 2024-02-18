//
// Created by zero on 2024/02/18.
//

#include <iostream>
#include <vector>
#include <queue>

#include "_1197.h"

namespace _1197 {
    int FindParent(std::vector<int> &parent, int node) {
        if (parent[node] == node) {
            return node;
        }
        return parent[node] = FindParent(parent, parent[node]);
    }

    void Union(std::vector<int> &parent, int a, int b) {
        a = FindParent(parent, a);
        b = FindParent(parent, b);

        if (a != b) {
            parent[b] = a;
        }
    }

    int GetMSTWeight(int node_count, std::vector<Edge> &edges) {
        std::vector<int> parent(node_count + 1);
        for (int i = 0; i <= node_count; i++) {
            parent[i] = i;
        }

        std::priority_queue<Edge, std::vector<Edge>, std::greater<Edge>> priority_queue;
        for (int i = 0; i < edges.size(); i++) {
            priority_queue.push(edges[i]);
        }

        int use_edge_count = 0;
        int total_weight = 0;

        while (use_edge_count < node_count - 1) {
            Edge e = priority_queue.top();
            priority_queue.pop();

            if (FindParent(parent, e.src) != FindParent(parent, e.dest)) {
                Union(parent, e.src, e.dest);
                total_weight += e.weight;
                use_edge_count++;
            }
        }

        return total_weight;
    }
}
