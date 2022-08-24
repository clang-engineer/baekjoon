#include <iostream>
#include <cmath>

bool is_prime(int num);

int main()
{
	while (1)
	{
		int num;
		std::cin >> num;

		if (num == 0)
		{
			break;
		}

		int count = 0;

		for (int i = num + 1; i <= 2 * num; i++)
		{
			if (is_prime(i))
			{
				count += 1;
			}
		}

		std::cout << count << "\n";
	}
    return 0;
}

bool is_prime(int num)
{
	if (num <= 1)
	{
		return false;
	}

	if (num == 2 || num == 3)
	{
		return true;
	}

	if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0)
	{
		return false;
	}

	bool is_prime = true;
	for (int i = 2; i <= std::sqrt(num); i++)
	{
		if (num % i == 0)
		{
			is_prime = false;
			break;
		}
	}

	return is_prime;
}
