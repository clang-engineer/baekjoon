//
// Created by zero on 2024/02/07.
//

#include "baekjoon/_1043.h"
#include <vector>

namespace baekjoon_1043 {
    std::vector<int> parent;
    std::vector<int> trueP;
    std::vector<std::vector<int>> party;
    int result;

    void unionfunc(int a, int b) {
        a = find(a);
        b = find(b);

        if (a != b) {
            parent[b] = a;
        }
    }

    int find(int a) {
        if (parent[a] == a) {
            return a;
        }
        return parent[a] = find(parent[a]);
    }
}
