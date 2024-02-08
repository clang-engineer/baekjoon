//
// Created by zero on 2024/02/08.
//

#include "_2252.h"

#include <iostream>
#include <vector>
#include <queue>

namespace _2252 {
    std::vector<int> GetTopologySort(std::vector<std::vector<int>> &A, std::vector<int> &indegree) {
        std::vector<int> result;
        std::queue<int> queue;

        for (int i = 1; i < indegree.size(); i++) {
            if (indegree[i] == 0) {
                queue.push(i);
            }
        }

        while (!queue.empty()) {
            int front = queue.front();
            queue.pop();
            result.push_back(front);
            for (int i = 0; i < A[front].size(); i++) {
                int next = A[front][i];
                indegree[next]--;
                if (indegree[next] == 0) {
                    queue.push(next);
                }
            }
        }

        return result;
    }
}
