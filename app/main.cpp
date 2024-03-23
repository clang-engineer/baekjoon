#include <iostream>
#include <vector>
#include <stack>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<int> a(n, 0);
    std::vector<char> result_symbol;

    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    std::stack<int> waiting_stack;
    int num = 1;
    bool is_possible = true;

    for (int i = 0; i < a.size(); i++) {
        int su = a[i];

        if (su >= num) {
            while (su >= num) {
                waiting_stack.push(num++);
                result_symbol.push_back('+');
            }
            waiting_stack.pop();
            result_symbol.push_back('-');
        } else {
            int n = waiting_stack.top();
            waiting_stack.pop();
            if (n > su) {
                std::cout << "NO\n";
                is_possible = false;
                break;
            } else {
                result_symbol.push_back('-');
            }
        }
    }

    if (is_possible) {
        for (int i = 0; i < result_symbol.size(); i++) {
            std::cout << result_symbol[i] << '\n';
        }
    }

}
