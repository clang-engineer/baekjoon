#include <iostream>
#include "_18352.h"
#include <vector>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    long N, M, K, X;

    std::cin >> N >> M >> K >> X;

    std::vector<std::pair<int, int>> edges(M);

    for (int i = 0; i < M; i++) {
        std::cin >> edges[i].first >> edges[i].second;
    }


    _18352::Solution solution(N, edges);

    std::vector<int> result = solution.getBFSDistance(X);

    std::vector<int> answer;

    for (int i = 0; i < N; i++) {
        if (result[i] == K) {
            answer.push_back(i + 1);
        }
    }

    if (!answer.empty()) {
        std::sort(answer.begin(), answer.end());
        for (int i = 0; i < answer.size(); i++) {
            std::cout << answer[i] << "\n";
        }
    } else if (answer.empty()) {
        std::cout << -1 << "\n";
    }

    return 0;
}

