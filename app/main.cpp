#include <iostream>
#include "_1707.h"

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    long N;
    std::cin >> N;

    for (int t = 0; t < N; t++) {
        long V, E;
        std::cin >> V >> E;

        _1707::V = V;
        _1707::E = E;

        _1707::A.resize(V + 1);
        _1707::visited.resize(V + 1);
        _1707::check.resize(V + 1);
        _1707::IsEven = true;

        for (int i = 0; i < E; i++) {
            int a, b;
            std::cin >> a >> b;

            _1707::A[a].push_back(b);
            _1707::A[b].push_back(a);
        }

        std::cout << _1707::GetResult() << '\n';

        for (int i = 0; i <= V; i++) {
            _1707::A[i].clear();
            _1707::visited[i] = false;
            _1707::check[i] = 0;
        }
    }

    return 0;
}

