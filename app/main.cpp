#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    std::cin >> n;

    int count = 1;
    int start_index = 1;
    int end_index = 1;
    int sum = 1;

    while (end_index != n) {
        if (sum == n){
            count++;
            end_index++;
            sum += end_index;
        } else if (sum > n) {
            sum -= start_index;
            start_index++;
        } else {
            end_index++;
            sum += end_index;
        }
    }

    std::cout << count << std::endl;
}