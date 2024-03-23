#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, m;
    std::cin >> n >> m;

    std::vector<int> a(n, 0);

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end());

    int count = 0;
    int i = 0;
    int j = n - 1;

    while (i < j) {
        if (a[i] + a[j] < m) {
            i++;
        } else if (a[i] + a[j] > m) {
            j--;
        } else {
            count++;
            i++;
            j--;
        }
    }

    std::cout << count << std::endl;
}