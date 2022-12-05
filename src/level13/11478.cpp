#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
	public:
		void get_subset_of_string(std::string& s) {
			std::vector<std::string> v;
			for (int i = 0; i < s.size(); i++) {
				for (int j = i + 1; j <= s.size(); j++) {
					v.push_back(s.substr(i, j - i));
				}
			}

			std::sort(v.begin(), v.end());
			v.erase(std::unique(v.begin(), v.end()), v.end());
			std::cout << v.size() << std::endl;
		}
};

int main()
{
	std::string input;

	std::cin >> input;

	Solution solution;
	solution.get_subset_of_string(input);

	return 0;
}

