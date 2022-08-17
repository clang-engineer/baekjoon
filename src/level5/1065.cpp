#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

std::vector<int> get_digit_vec(int number);

int main()
{
	int target;
	int result = 0;

	std::cin >> target;

	for (int i = 1; i <= target; i++)
	{
		std::vector<int> digit_vec = get_digit_vec(i);

		std::set<int> gap_set;
		for (auto iter = digit_vec.begin(); iter != digit_vec.end() - 1; iter++)
		{
			gap_set.insert(*iter - *(iter + 1));
		}

		if (gap_set.size() == 0 || gap_set.size() == 1)
		{
			result += 1;
		}
	}

	std::cout << result << std::endl;

	return 0;
}

std::vector<int> get_digit_vec(int number)
{
	std::vector<int> vec;

	while (number != 0)
	{
		int digit = number % 10;
		vec.push_back(digit);

		number = number / 10;
	}

	std::reverse(vec.begin(), vec.end());

	return vec;
}

