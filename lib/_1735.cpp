#include "_1735.h"

namespace _1735 {
    Solution::Solution(int a_child_, int a_parent_, int b_child_, int b_parent_) : a_child(a_child_),
                                                                                   a_parent(a_parent_),
                                                                                   b_child(b_child_),
                                                                                   b_parent(b_parent_) {

    }

    int Solution::GetGCD(int a, int b) {
        if (b == 0) {
            return a;
        }
        return GetGCD(b, a % b);
    }

    std::string Solution::GetAnswer() {
        int child = a_child * b_parent + b_child * a_parent;
        int parent = a_parent * b_parent;
        int gcd = GetGCD(child, parent);
        return std::to_string(child / gcd) + " " + std::to_string(parent / gcd);
    }


}