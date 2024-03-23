#include <iostream>
#include <vector>
#include <stack>

std::vector<int> GetNextGreaterElement(const std::vector<int> &arr) {
    std::vector<int> answer(arr.size(), 0);
    std::stack<int> stack;
    stack.push(0);

    for (int i = 1; i < arr.size(); i++) {
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

    return answer;
}

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

    std::vector<int> answer = GetNextGreaterElement(arr);
    for (int i = 0; i < n; i++) {
        std::cout << answer[i] << ' ';
    }
}