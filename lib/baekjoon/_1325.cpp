#include "baekjoon/_1325.h"

#include <queue>


namespace baekjoon_1325 {
    long N;
    std::vector<std::vector<int>> A;
    std::vector<int> answer;
    std::vector<bool> visited;

    void BFS(int index) {
        std::queue<int> queue;
        queue.push(index);
        visited[index] = true;

        while (!queue.empty()) {
            int now_node = queue.front();
            queue.pop();

            for (int i: A[now_node]) {
                if (!visited[i]) {
                    visited[i] = true;
                    answer[i]++;
                    queue.push(i);
                }
            }
        }
    }

    std::vector<int> GetResult() {
        for (int i = 1; i <= N; i++) {
            std::fill(visited.begin(), visited.end(), false);
            BFS(i);
        }

        int max = 0;

        for (int i = 0; i < N + 1; i++) {
            max = std::max(max, answer[i]);
        }

        std::vector<int> result = {};

        for (int i = 0; i < N + 1; i++) {
            if (answer[i] == max) {
                result.push_back(i);
            }
        }


        return result;
    }
}
