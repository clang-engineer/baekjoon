#include <iostream>
#include <vector>
#include <algorithm>

struct compare {
	bool operator()(const std::pair<int, std::string> &a, const std::pair<int, std::string> &b) {
		if (a.first == b.first) {
			return false;
		}
		return a.first < b.first;
	}
};

int main()
{
	int total_count;
	std::cin >> total_count;

	std::vector<std::pair<int, std::string>> vec;

	while (total_count > 0) {
		int age;
		std::string name;
		std::cin >> age >> name;

		vec.push_back(std::make_pair(age, name));

		total_count--;
	}


	std::stable_sort(vec.begin(), vec.end(), compare());

	for (auto &v : vec) {
		std::cout << v.first << " " << v.second << "\n";
	}

	return 0;
}
