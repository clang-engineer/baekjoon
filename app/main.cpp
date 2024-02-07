#include <iostream>
#include <vector>

#include "_1717.h"

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N, M;
    std::cin >> N >> M;
    _1717::parent.resize(N + 1);

    for (int i = 0; i <= N; i++) {
        _1717::parent[i] = i;
    }

    for (int i = 0; i < M; i++) {
        int question, a, b;
        std::cin >> question >> a >> b;

        if (question == 0) {
            _1717::unionfunc(a, b);
        } else {
            if (_1717::checkSame(a, b)) {
                std::cout << "YES" << '\n';
            } else {
                std::cout << "NO" << '\n';
            }
        }
    }
}

