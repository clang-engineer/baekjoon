#include <iostream>
#include <vector>

#include "_2720.h"

int main() {

    int N;

    std::cin >> N;

    for (int i = 0; i < N; i++) {
        float total_payment;
        std::cin >> total_payment;

        _2720::Solution s(total_payment);
        std::vector<int> result = s.GetChange();

        std::cout << result[0] << " " << result[1] << " " << result[2] << " " << result[3] << std::endl;
    }

    return 0;
}

