#include <iostream>
#include <vector>
#include <queue>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    typedef std::vector<int> vi;
    int N, M;
    std::cin >> N >> M;

    std::vector<vi> A;
    vi indegree;

    A.resize(N + 1);
    indegree.resize(N + 1);

    for (int i = 0; i < M; i++) {
        int S, E;
        std::cin >> S >> E;
        A[S].push_back(E);
        indegree[E]++;
    }

    std::queue<int> queue;

    for (int i = 1; i <= N; i++) {
        if (indegree[i] == 0) {
            queue.push(i);
        }
    }

    while (!queue.empty()) {
        int front = queue.front();
        queue.pop();
        std::cout << front << " ";
        for (int i = 0; i < A[front].size(); i++) {
            int next = A[front][i];
            indegree[next]--;
            if (indegree[next] == 0) {
                queue.push(next);
            }
        }
    }


}