#include <iostream>
#include <vector>

class Solution {
	public:
		void get_sum_of_three(long long a, long long b, long long c) {
			std::cout << a + b + c << std::endl;
		}
};

int main()
{

	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	long long a,b,c;

	std::cin >> a >> b >> c;

	Solution s;
	s.get_sum_of_three(a, b, c);

}

