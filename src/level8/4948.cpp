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

		int max_num = 2 * num;
		bool* prime_arr = new bool[max_num];

		for (int i = 2; i <= max_num; i++)
		{
			prime_arr[i] = true;
		}

		for (int j = 2; j <= max_num / 2; j++)
		{
			prime_arr[j * 2] = false;
		}

		for (int j = 2; j <= max_num / 3; j++)
		{
			prime_arr[j * 3] = false;
		}

		for (int j = 2; j <= max_num / 5; j++)
		{
			prime_arr[j * 5] = false;
		}

		for (int j = 2; j <= max_num / 7; j++)
		{
			prime_arr[j * 7] = false;
		}

		for (int i = num + 1; i <= max_num; i++)
		{
			if (!prime_arr[i]) {
				continue;
			}
			if (is_prime(i))
			{
				count += 1;
				continue;
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

	if (num == 2 || num == 3 || num == 5 || num == 7)
	{
		return true;
	}

	if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0)
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
