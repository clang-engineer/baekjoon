#include "_13241.h"

#include <iostream>

int main() {
    long long A, B;
    std::cin >> A >> B;
    _13241::Solution solution(A, B);
    std::cout << solution.GetAnswer() << '\n';

    return 0;
}

