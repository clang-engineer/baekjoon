#ifndef BAEKJOON_INCLUDE_2501_H_
#define BAEKJOON_INCLUDE_2501_H_

#include <vector>

namespace baekjoon_2501 {
class Solution {
 public:
  Solution(int n);
  int GetKthFactor(int k);
 private:
  std::vector<int> factors;
};

}

#endif //BAEKJOON_INCLUDE_2501_H_
