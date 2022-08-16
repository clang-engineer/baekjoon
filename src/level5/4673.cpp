#include <iostream>
#include <vector>
#include <algorithm>

int get_sum_of_digits(int num);

int main()
{
	int total_num = 10000;

	std::vector<int> vec;

	for (int i = 1; i <= total_num; i++)
	{
		vec.push_back(i);
	}

	for (int i = 1; i <= total_num; i++)
	{
		int have_to_remove_num = get_sum_of_digits(i);
		vec.erase(std::remove(vec.begin(), vec.end(), have_to_remove_num), vec.end());
	}

	for (auto iter = vec.begin(); iter != vec.end(); iter++)
		std::cout << *iter << std::endl;

    return 0;
}

int get_sum_of_digits(int number)
{
	int sum = number;

	while (number != 0)
	{
		sum = sum + number % 10;
		number = number / 10;
	}

	return sum;
}
