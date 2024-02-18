//
// Created by zero on 2024/02/18.
//

#include <iostream>
#include <vector>

#include "_1197.h"

namespace _1197 {
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
}
