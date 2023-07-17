#include "_19532.h"

namespace _19532 {
Solution::Solution(int a, int b, int c, int d, int e, int f) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->e = e;
    this->f = f;
}

int Solution::GetX() {
    return (c * e - b * f) / (a * e - b * d);
}

int Solution::GetY() {
    return (a * f - c * d) / (a * e - b * d);
}
}