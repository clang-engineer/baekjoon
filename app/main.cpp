#include <iostream>
#include <queue>

struct compare {
    bool operator()(int a, int b) {
        int first_abs = std::abs(a);
        int second_abs = std::abs(b);

        if (first_abs == second_abs) {
            return a > b;
        } else {
            return first_abs > second_abs;
        }
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::priority_queue<int, std::vector<int>, compare> pq;

    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;

        if (num == 0) {
            if (pq.empty()) {
                std::cout << 0 << '\n';
            } else {
                std::cout << pq.top() << '\n';
                pq.pop();
            }
        } else {
            pq.push(num);
        }
    }
}
