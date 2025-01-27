#include <vector>

namespace baekjoon_10828 {
    class Solution {
    private:
        std::vector<int> stack;
    public:
        Solution(int N);
        void Push(int X);
        int Pop();
        int Size();
        int Empty();
        int Top();
    };
}