#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, m;
    std::cin >> n >> m;
    std::vector<long> s(n, 0);
    std::vector<long> c(m, 0);
    long answer = 0;

    std::cin >> s[0];

    for (int i = 1; i < n; i++) {
        int temp;
        std::cin >> temp;
        s[i] = s[i - 1] + temp;
    }

    for (int i = 0; i < n; i++) {
        int remainder = s[i] % m;

        if (remainder == 0) {
            answer++;
        }

        c[remainder]++;
    }

    for (int i = 0; i < m; i++) {
        if (c[i] > 1) {
            answer += c[i] * (c[i] - 1) / 2;
        }
    }

    std::cout << answer << std::endl;
}