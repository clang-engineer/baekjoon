namespace baekjoon_17103 {
class Solution {
private:
  int target_num;
  int erastos[1000001] = {0};
public:
  Solution(int target_num);
  bool IsPrime(int n);
  int GetGoldBachPartitionNum();
};
} // namespace baekjoon_17103
