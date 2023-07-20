#ifndef BAEKJOON__1735_H
#define BAEKJOON__1735_H


#include <string>

namespace _1735 {
    class Solution {
    private:
        int a_child, a_parent, b_child, b_parent;
        int GetGCD(int a, int b);
    public:
        Solution(int a_child_, int a_parent_, int b_child_, int b_parent_);
        std::string GetAnswer();
    };
};


#endif
