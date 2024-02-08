#include <iostream>
#include <vector>
#include <queue>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N;
    std::cin >> N;
    std::vector<std::vector<int>> list(N + 1);
    std::vector<int> indegree(N + 1);
    std::vector<int> self_build(N + 1);

    for (int i = 1; i <= N; i++) {
        std::cin >> self_build[i];

        while (true) {
            int pre_temp;
            std::cin >> pre_temp;

            if (pre_temp == -1) {
                break;
            }

            list[pre_temp].push_back(i);
            indegree[i]++;
        }
    }

    std::queue<int> queue;

    for (int i = 1; i <= N; i++) {
        if (indegree[i] == 0) {
            queue.push(i);
        }
    }

    std::vector<int> result(N + 1);

    while (!queue.empty()) {
        int now = queue.front();
        queue.pop();

        for (int next: list[now]) {
            indegree[next]--;
            result[next] = std::max(result[next], result[now] + self_build[now]);
            if (indegree[next] == 0) {
                queue.push(next);
            }
        }
    }

    for (int i = 1; i <= N; i++) {
        std::cout << result[i] + self_build[i] << "\n";
    }

}