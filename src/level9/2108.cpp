#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <map>


int get_avg(std::vector<int>& vec) {
	return std::accumulate(vec.begin(), vec.end(), 0) / vec.size();
}

int get_max(std::vector<int>& vec) {
	return *std::max_element(vec.begin(), vec.end());
}

int get_min(std::vector<int>& vec) {
	return *std::min_element(vec.begin(), vec.end());
}

int get_median(std::vector<int>& vec) {
	std::sort(vec.begin(), vec.end());
	return vec[vec.size() / 2];
}

void printMap(std::map<int, int> sampleMap)
{
	std::map<int, int>::iterator itr;
    for (itr = sampleMap.begin();
        itr != sampleMap.end();
        ++itr) {
		std::cout << itr->first
            << " = " << itr->second << ", ";
    }
	std::cout << std::endl;
}

int main()
{
	int total_num;

	std::cin >> total_num;

	std::vector<int> vec;

	for (int i = 0; i < total_num; i++)
	{
		int num;
		std::cin >> num;
		vec.push_back(num);
	}
	
	int max = vec[0];
	int min = vec[0];
	std::map<int, int> counter;
	for (auto iter = vec.begin(); iter != vec.end(); iter++)
	{
		if (*iter > max)
			max = *iter;
		if (*iter < min)
			min = *iter;

		if (counter.find(*iter) == counter.end())
			counter[*iter] = 1;
		else
			counter[*iter]++;
	}

	printMap(counter);

    return 0;
}
