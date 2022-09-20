#include <iostream>
#include <vector>
#include <algorithm>

bool compare(const std::pair<int, int> &a, const std::pair<int, int> &b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	return a.second < b.second;
}

int main()
{
	int total_num;

	std::cin >> total_num;

	std::vector<std::pair<int, int>> vec;
	while (total_num > 0) {
		int first, second;
		std::cin >> first >> second;
		vec.push_back(std::make_pair(first, second));
		total_num--;
	}

	std::sort(vec.begin(), vec.end(), compare);

	for (auto it = vec.begin(); it != vec.end(); it++){
		std::cout << it->first << " " << it->second << "\n";
	}

	return 0;
}

