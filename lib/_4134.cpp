#include "../include/_4134.h"

namespace _4134 {
    Solution::Solution() {
    };

    bool Solution::IsPrime(long long num) {
        if (num <= 1)
            return false;

        if (num == 2 || num == 3)
            return true;

        if (num % 2 == 0 || num % 3 == 0)
            return false;

        for (long long i = 5; i * i <= num; ++i)
        {
            if (num % i == 0 || num % (i + 2) == 0)
                return false;
        }

        return true;
    };

    long long Solution::GetNextDecimal(long long num) {
        long long i = num;
        while (true) {
            if (IsPrime(i))
                return i;
            i++;
        }
    };

} // namespace _4134
