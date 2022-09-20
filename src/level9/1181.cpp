#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

struct compare {
	bool operator()(const std::string &a, const std::string &b) {
		if (a.size() == b.size()) {
			return a < b;
		}
		return a.size() < b.size();
	}
};

int main()
{
	int total_count;
	std::cin >> total_count;

	std::set<std::string> set;
	while (total_count > 0) {
		std::string input;
		std::cin >> input;

		set.insert(input);

		total_count--;
	}

	std::vector<std::string> vec(set.begin(), set.end());
	std::sort(vec.begin(), vec.end(), compare());

	for (auto &str : vec) {
		std::cout << str << std::endl;
	}
	
    return 0;
}

