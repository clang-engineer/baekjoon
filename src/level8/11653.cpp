#include <iostream>
#include <vector>
#include <cmath>

bool is_prime(int num);

int main()
{
	int num;

	std::cin >> num;
	
	if (num == 1)
	{
		return 0;
	}

	while (num != 0)
	{
		if (is_prime(num))
		{
			std::cout << num << std::endl;
			break;
		}

		for (int i = 2; i < num; i++)
		{
			if(num % i == 0)
			{
				std::cout << i << std::endl;
				num = num / i;
				break;
			}
		}
	}
	return 0;
}


bool is_prime(int num)
{
	if (num == 2 || num == 3)
	{
		return true;
	}

	bool is_prime = true;
	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			is_prime = false;
		}
	}

	return is_prime;
};
