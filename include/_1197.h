//
// Created by zero on 2024/02/18.
//

#ifndef BAEKJOON__1197_H
#define BAEKJOON__1197_H

namespace _1197 {
    typedef struct Edge {
        int src, dest, weight;

        bool operator>(const Edge &e) const {
            return weight > e.weight;
        }
    } Edge;

    int find_parent(std::vector<int> &parent, int node);

    void munion(std::vector<int> &parent, int a, int b);
}

#endif //BAEKJOON__1197_H
