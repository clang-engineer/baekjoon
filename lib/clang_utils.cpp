//
// Created by planit on 2025-01-29.
//

#include "clang_utils.h"

namespace clang_utils {
    bool is_prime(int number) {
        if (number <= 1) {
            return false;
        };
        if (number == 2) {
            return true;
        }
        if (number % 2 == 0) {
            return false;
        }

        for (int i = 3; i * i <= number; i += 2) {
            if (number % i == 0) {
                return false;
            }
        }

        return true;
    }

}
