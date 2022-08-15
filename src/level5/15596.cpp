#include <iostream>
#include <vector>

int sum_of_vec(std::vector<int> &a)
{
	int sum = 0;
	for (int i = 0; i < a.size(); i++)
	{
		sum += a[i];
	}
	return sum;
}

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

