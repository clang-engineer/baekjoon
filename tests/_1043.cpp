//
// Created by zero on 2024/02/07.
//

#include "_1043.h"
#include <gtest/gtest.h>
#include <vector>

namespace _1043 {
    namespace {
        TEST(_1043, case1) {
            int N = 4, M = 3, T = 0;

            parent.resize(N + 1);
            for (int i = 0; i <= N; i++) {
                parent[i] = i;
            }

            party.resize(M+1);
            party[0] = {1, 2};
            party[1] = {3};
            party[2] = {2, 3, 4};
            trueP.resize(T);

            for (int i = 0; i < M; i++) {
                int firstPeople = party[i][0];
                for (int j = 1; j < party[i].size(); j++) {
                    unionfunc(firstPeople, party[i][j]);
                }
            }

            for (int i = 0; i < M; i++) {
                bool isPossible = true;

                if (isPossible) {
                    result++;
                }
            }

            EXPECT_EQ(result, 3);
        }
    }
}