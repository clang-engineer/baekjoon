#include <iostream>
#include <vector>
#include <set>
#include <map>

class Solution {
	public:
		void answer(std::vector<int>& vec) {
			std::map<int, int> map;
			for (auto iter = vec.begin(); iter != vec.end(); ++iter) {
				int smallerNum = 0;
				std::set<int> smallerSet; 
				if (map.find(*iter) != map.end()) {
					std::cout << map[*iter] << " ";
					continue;
				}
				for (auto iter2 = vec.begin(); iter2 != vec.end(); ++iter2) {
					if (*iter > *iter2) {
						if (smallerSet.find(*iter2) == smallerSet.end()) {
							smallerSet.insert(*iter2);
							smallerNum++;
						}
					}
				}
				map[*iter] = smallerNum;
				std::cout << smallerNum << " ";
			}

			std::cout << std::endl;
		}
};

int main()
{
/*
 *    std::vector<int> vec1 = {2, 4, -10, 4, -9};
 *    Solution s;
 *    s.answer(vec1);
 *
 *    std::vector<int> vec2 = {1000, 999, 1000, 999, 1000, 999};
 *    s.answer(vec2);
 */

	int n;
	std::cin >> n;
	std::vector<int> vec;
	for (int i = 0; i < n; ++i) {
		int num;
		std::cin >> num;
		vec.push_back(num);
	}

	Solution s;
	s.answer(vec);
	return 0;
}

