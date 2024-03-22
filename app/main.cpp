#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int su_no, quiz_no;
    std::cin >> su_no >> quiz_no;

    int s[100001] = {};

    for (int i = 1; i <= su_no; i++) {
        int temp;
        std::cin >> temp;
        s[i] = s[i - 1] + temp;
    }

    for (int i = 0; i < quiz_no; i++) {
        int a, b;
        std::cin >> a >> b;
        std::cout << s[b] - s[a - 1] << '\n';
    }
}