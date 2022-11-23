#include <iostream>
#include <unordered_set>

class Solution {
	public:
		int getDiffCountOfTwoSet(std::unordered_set<int> &set1, std::unordered_set<int> &set2) {
			int count = 0;

			for (auto it = set1.begin(); it != set1.end(); it++) {
				if (set2.find(*it) == set2.end()) {
					count++;
				}
			}

			for (auto it = set2.begin(); it != set2.end(); it++) {
				if (set1.find(*it) == set1.end()) {
					count++;
				}
			}

			return count;
		}
};

int main()
{
	int N, M;
	std::cin >> N >> M;

	std::unordered_set<int> set1, set2;

	while (N--)
	{
		int num;
		std::cin >> num;

		set1.insert(num);
	}

	while (M--)
	{
		int num;
		std::cin >> num;

		set2.insert(num);
	}

	Solution solution;
	std::cout << solution.getDiffCountOfTwoSet(set1, set2) << std::endl;

	return 0;
}

