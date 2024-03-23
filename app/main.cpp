#include <iostream>
#include <vector>
#include <stack>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<int> arr(n, 0);
    std::vector<int> answer(n, 0);

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::stack<int> stack;
    stack.push(0);

    for (int i = 1; i < n; i++) {
        while (!stack.empty() && arr[stack.top()] < arr[i]) {
            answer[stack.top()] = arr[i];
            stack.pop();
        }
        stack.push(i);
    }

    while (!stack.empty()) {
        answer[stack.top()] = -1;
        stack.pop();
    }

    for (int i = 0; i < n; i++) {
        std::cout << answer[i] << ' ';
    }
}