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

    int FindParent(std::vector<int> &parent, int node);

    void Union(std::vector<int> &parent, int a, int b);

    int GetMSTWeight(int node_count, std::vector<Edge> &edges);
}

#endif //BAEKJOON__1197_H
