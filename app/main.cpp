#include <iostream>

#include "_19532.h"

int main() {
    int a, b, c, d, e, f;
    std::cin >> a >> b >> c >> d >> e >> f;
    _19532::Solution solution(a, b, c, d, e, f);
    std::cout << solution.GetX() << " " << solution.GetY() << std::endl;
    return 0;


}

