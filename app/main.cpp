#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, M;
    std::cin >> N;

    std::vector<int> vec1(N);

    for (int i = 0; i < N; ++i) {
        std::cin >> vec1[i];
    }

    std::sort(vec1.begin(), vec1.end());

    std::cin >> M;

    std::vector<int> vec2(M);

    for (int i = 0; i < M; ++i) {
        std::cin >> vec2[i];
    }

    for (int i = 0; i < M; ++i) {
        int left = 0;
        int right = N - 1;
        int mid = 0;
        bool found = false;
        while (left <= right) {
            mid = (left + right) / 2;
            if (vec1[mid] == vec2[i]) {
                found = true;
                break;
            } else if (vec1[mid] < vec2[i]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        std::cout << found << '\n';
    }



    return 0;
}

