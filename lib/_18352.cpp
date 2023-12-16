#include <vector>
#include <queue>
#include "_18352.h"

namespace _18352 {

    Solution::Solution(int n, std::vector<std::pair<int, int>> edges) {
        this->n = n;
        this->visited = std::vector<int>(n + 1, -1);
        this->graph = std::vector<std::vector<int>>(n + 1, std::vector<int>());
        for (auto edge: edges) {
            int from = edge.first;
            int to = edge.second;
            this->graph[from].push_back(to);
        }
    }

    std::vector<int> Solution::getBFSDistance(int start) {
        std::vector<int> distance = std::vector<int>(this->n, -1);
        std::queue<int> q;
        q.push(start);
        distance[start - 1] = 0;

        while (!q.empty()) {
            int from = q.front();
            q.pop();
            for (int to: this->graph[from]) {
                if (distance[to - 1] == -1) {
                    distance[to - 1] = distance[from - 1] + 1;
                    q.push(to);
                }
            }
        }
        return distance;
    };
};