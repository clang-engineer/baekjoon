#include <iostream>
#include <vector>
#include "_2252.h"

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

    std::vector<int> result = _2252::GetTopologySort(A, indegree);

    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
}

