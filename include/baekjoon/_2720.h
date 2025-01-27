#ifndef BAEKJOON__2720_H
#define BAEKJOON__2720_H

#include <vector>
#include <string>


namespace baekjoon_2720 {
    struct Coin {
        std::string name;
        float value;
    };

    const Coin coins[4] = {
        {"QUARTER", 25},
        {"DIME", 10},
        {"NICKEL", 05},
        {"PENNY", 01}
    };

    class Solution {
    private:
        float total_payment;
    public:
        Solution(float total_payment) : total_payment(total_payment) {}
        std::vector<int> GetChange();
    };
}

#endif