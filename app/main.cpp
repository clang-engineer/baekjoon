#include <iostream>
#include <vector>
#include <algorithm>

int CountPartialSummarized(const std::vector<int> &a);

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<int> a(n, 0);

    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end());

    std::cout << CountPartialSummarized(a) << std::endl;
}

int CountPartialSummarized(const std::vector<int> &a) {
    int n = a.size();
    int result = 0;

    for (int i = 0; i < n; i++) {
        long find = a[i];
        int l = 0;
        int r = n - 1;

        while (l < r) {
            long sum = a[l] + a[r];
            if (sum == find) {
                if (l != i && r != i) {
                    result++;
                    break;
                } else if (l == i) {
                    l++;
                } else if (r == i) {
                    r--;
                }
            } else if (sum < find) {
                l++;
            } else {
                r--;
            }
        }
    }

    return result;
}
