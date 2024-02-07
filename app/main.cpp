#include <iostream>
#include <vector>

#include "_1043.h"

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N, M, T;
    std::cin >> N >> M >> T;

    // init true parent
    _1043::trueP.resize(T);

    for (int i = 0; i < T; i++) {
        std::cin >> _1043::trueP[i];
    }


    // init party member
    _1043::party.resize(M);

    for (int i = 0; i < M; i++) {
        int party_size;
        std::cin >> party_size;

        for (int j = 0; j < party_size; j++) {
            int temp;
            std::cin >> temp;
            _1043::party[i].push_back(temp);
        }
    }


    // init origin parent
    _1043::parent.resize(N + 1);

    for (int i = 0; i <= N; i++) {
        _1043::parent[i] = i;
    }


    // union party
    for (int i = 0; i < M; i++) {
        int firstPeople = _1043::party[i][0];
        for (int j = 1; j < _1043::party[i].size(); j++) {
            _1043::unionfunc(firstPeople, _1043::party[i][j]);
        }
    }


    // check is possible
    for (int i = 0; i < M; i++) {
        bool isPossible = true;
        int cur = _1043::party[i][0];

        for (int j = 0; j < T; j++) {
            if (_1043::find(cur) == _1043::find(_1043::trueP[j])) {
                isPossible = false;
                break;
            }
        }

        if (isPossible) {
            _1043::result++;
        }
    }

    std::cout << _1043::result;
}


