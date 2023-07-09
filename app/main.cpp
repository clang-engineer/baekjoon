#include <iostream>

#include "_27323.h"

int main() {

    int a, b;

    std::cin >> a >> b;
    _27323::Rectangle r(a, b);
    std::cout << r.GetSize() << std::endl;

    return 0;
}

