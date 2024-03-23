#include <iostream>
#include <vector>

#include "_17298.h"

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<int> arr(n, 0);

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::vector<int> answer = _17298::GetNextGreaterElement(arr);
    for (int i = 0; i < n; i++) {
        std::cout << answer[i] << ' ';
    }
}