#include <iostream>
#include <vector>

bool is_prime(int num);

int main()
{
	int M, N;

	std::cin >> M >> N;

	std::vector<int> vec; 
	int sum, min = N;

	for (int i = M; i <= N; i++)
	{
		if (is_prime(i))
		{
			vec.push_back(i);
			if (i < min)
			{
				min = i;
			}
		}
	}

	if (vec.size() == 0)
	{
		std::cout << "-1" << std::endl;
	}
	else
	{
		for (auto elem : vec)
		{
			sum += elem;
		}

		std::cout << sum << std::endl;
		std::cout << min << std::endl;
	}
}

bool is_prime(int num)
{
	if (num == 0 || num == 1)
	{
		return false;
	}

	if (num == 2)
	{
		return true;
	}

	bool isprime = true;
	for (int i = 2; i <= num / 2 + 1; i++)
	{
		if (num % i == 0)
		{
			isprime = false;
			break;
		}
	}

	return isprime;
};

