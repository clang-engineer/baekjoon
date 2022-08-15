#include <iostream>
#include <vector>

int sum_of_vec(std::vector<int>& vec);

int main()
{
	int input_num;
	std::cin >> input_num;

	std::vector<int> arr;

	for (int i = 0; i < input_num; i++)
	{
		int temp;
		std::cin >> temp;
		arr.push_back(temp);
	}

	int sum = sum_of_vec(arr);
	std::cout << sum << std::endl;

    return 0;
}

int sum_of_vec(std::vector<int> &vec)
{
	int sum = 0;
	for (auto iter = vec.begin(); iter != vec.end(); ++iter)
	{
		sum += *iter;
	}
	return sum;
}

