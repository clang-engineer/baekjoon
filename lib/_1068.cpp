//
// Created by zero on 2024/02/21.
//
#include "_1068.h"

namespace _1068 {
    int N;
    std::vector<std::vector<int>> tree;
    int answer = 0;
    int delete_node = 0;
    std::vector<bool> visited;

    void DFS(int number) {
        visited[number] = true;
        int node_count = 0;

        for (int i: tree[number]) {
            if (!visited[i] && i != delete_node) {
                node_count++;
                DFS(i);
            }
        }

        if (node_count == 0) {
            answer++;
        }
    }
}
