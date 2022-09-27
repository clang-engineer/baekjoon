#include <iostream>
#include <vector>
#include <set>

int main()
{
	int total_count;
	std::cin >> total_count;


	std::vector<int> vec;

	while (total_count > 0)
	{
		int num;
		std::cin >> num;

		vec.push_back(num);

		--total_count;
	}


	std::vector<int> result;

	std::set<int> set(vec.begin(), vec.end());

	for (auto iter = vec.begin(); iter != vec.end(); ++iter)
	{
		int smaller_count = 0;
		for (auto iter_set = set.begin(); iter_set != set.end(); ++iter_set)
		{
			if (*iter > *iter_set)
			{
				++smaller_count;
			}
		}
		result.push_back(smaller_count);
	}

	for (auto iter = result.begin(); iter != result.end(); ++iter)
	{
		std::cout << *iter << " ";
	}

	std::cout << "\n";

	return 0;
}

