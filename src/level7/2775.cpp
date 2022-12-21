#include <iostream>
#include <vector>

class Solution {
	private: 
		int getMemberOfRoom(int k, int n) {
			if (k == 0) {
				return n;
			}
			int sum = 0;
			for (int i = 1; i <= n; i++) {
				sum += getMemberOfRoom(k - 1, i);
			}
			return sum;
		}
	public:
		int answer(int k, int n) {
			return getMemberOfRoom(k, n);
		}

};

int main()
{
	int T;

	std::cin >> T;

	while (T--) {
		int k, n;
		std::cin >> k >> n;
		Solution s;
		std::cout << s.answer(k, n) << std::endl;
	}

    return 0;
}

