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
		bool* prime_arr = new bool[max_num + 1];

		for (int i = 2; i <= max_num; i++)
		{
			prime_arr[i] = true;
		    if (i * 2 <= max_num) prime_arr[i * 2] = false;
		    if (i * 3 <= max_num) prime_arr[i * 3] = false;
		    if (i * 4 <= max_num) prime_arr[i * 4] = false;
		    if (i * 5 <= max_num) prime_arr[i * 5] = false;
		    if (i * 6 <= max_num) prime_arr[i * 6] = false;
		    if (i * 7 <= max_num) prime_arr[i * 7] = false;
		    if (i * 11 <= max_num) prime_arr[i * 11] = false;
		    if (i * 13 <= max_num) prime_arr[i * 13] = false;
		    if (i * 17 <= max_num) prime_arr[i * 17] = false;
		    if (i * 19 <= max_num) prime_arr[i * 19] = false;
		    if (i * 23 <= max_num) prime_arr[i * 23] = false;
		}

		for (int i = num + 1; i <= max_num; i++)
		{
			if (!prime_arr[i]) {
				continue;
			} else {
				if (is_prime(i))
				{
					count += 1;
					continue;
				}
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
