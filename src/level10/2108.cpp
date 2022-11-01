#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <map>
#include <cmath>

int get_median(std::vector<int> &v) {
	std::sort(v.begin(), v.end());
	return v[v.size() / 2];
}

int get_average(std::vector<int> &v) {
	int parent = std::accumulate(v.begin(), v.end(), 0);
	int child = v.size();

	return std::round((double)parent / child);
}

int get_range(std::vector<int> &v) {
	return *std::max_element(v.begin(), v.end()) - *std::min_element(v.begin(), v.end());
}

std::map<int, int> get_mode(std::vector<int> &v) {
	std::map<int, int> m;
	for (auto &i : v) {
		if (m.find(i) == m.end()) {
			m[i] = 1;
		} else {
			m[i]++;
		}
	}
	return m;
}

int get_max_mode(std::map<int, int> &m) {
	int max = 0;
	for (auto &i : m) {
		if (i.second > max) {
			max = i.second;
		}
	}
	return max;
}

int get_max_mode_elem(std::map<int, int> &m) {
	int result;
	int max = 0;
	for (auto &i : m) {
		if (i.second > max) {
			max = i.second;
			result = i.first;
		}
	}
	return result;
}

int get_max_node_count_in_map_by_value(std::map<int, int> &m, int value) {
	int count = 0;
	for (auto &i : m) {
		if (i.second == value) {
			count++;
		}
	}
	return count;
}

int get_second_smallest_in_mode(std::map<int, int> &m) {
	std::vector<int> temp;

	for (auto &i : m) {
		if (i.second == get_max_mode(m)) {
			temp.push_back(i.first);
		}
	}

	std::sort(temp.begin(), temp.end());


	return temp[1];
}

int main()
{
	int total_num;
	std::cin >> total_num;

	std::vector<int> vec;
	while (total_num > 0) 
	{
		int i;
		std::cin >> i;

		vec.push_back(i);
		total_num--;
	}

	std::cout << get_average(vec) << std::endl;
	std::cout << get_median(vec) << std::endl;
	std::map<int, int> mode = get_mode(vec);

	if (vec.size() == 1) {
		std::cout << vec[0] << std::endl;
	} 
	else if (get_max_node_count_in_map_by_value(mode, get_max_mode(mode)) == 1) {
		std::cout << get_max_mode_elem(mode) << std::endl;
	} else {
		std::cout << get_second_smallest_in_mode(mode) << std::endl;
	}

	std::cout << get_range(vec) << std::endl;

	return 0;
}
