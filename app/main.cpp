#include <iostream>
#include "_1325.h"

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    long N, M;
    std::cin >> N >> M;

    _1325::N = N;
    _1325::A.resize(N+1);
    _1325::answer.resize(N+1);
    _1325::visited.resize(N+1);

    for (int i = 0; i < M; i++) {
        int s, e;
        std::cin >> s >> e;
        _1325::A[s].push_back(e);
    }

    std::vector<int> result = _1325::GetResult();

    for (int i: result) {
        std::cout << i << " ";
    }

    return 0;
}

