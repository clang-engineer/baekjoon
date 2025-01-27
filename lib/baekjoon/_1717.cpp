//
// Created by zero on 2024/02/07.
//

#include "baekjoon/_1717.h"

namespace baekjoon_1717 {
    std::vector<int> parent;

    void unionfunc(int a, int b) {
        a = find(a);
        b = find(b);

        if (a != b) {
            parent[b] = a;
        }
    }

    int find(int a) {
        if (a == parent[a]) {
            return a;
        }

        return parent[a] = find(parent[a]);
    }

    bool checkSame(int a, int b) {
        a = find(a);
        b = find(b);

        if (a == b) {
            return true;
        }

        return false;
    }

}
