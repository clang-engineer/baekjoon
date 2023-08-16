#include <iostream>
#include <stack>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N;
    std::cin >> N;

    std::vector<int> vec(N);
    std::stack<int> stack;

    for (int i = 1; i <= N; ++i) {
        std::cin >> vec[i - 1];
    }

    int current = 1;

    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == current) {
            current++;
        } else {
            while (!stack.empty() && stack.top() == current) {
                stack.pop();
                current++;
            }
            stack.push(vec[i]);
        }
    }

    while (!stack.empty()) {
        if (stack.top() == current) {
            stack.pop();
            current++;
        } else {
            std::cout << "Sad" << '\n';
            return 0;
        }
    }

    std::cout << "Nice" << '\n';

    return 0;
}

