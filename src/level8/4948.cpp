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

		for (int i = 2; i <= num; i++)
		{
			if (is_prime(i))
			{
				for (int j = i * 2; j <= max_num; j += i)
				{
					prime_arr[j] = true;
				}
			}
		}

		for (int i = num + 1; i <= max_num; i++)
		{
			if(!prime_arr[i])
			{
				count++;
			}
		}

		std::cout << count << "\n";
	}
	return 0;
}

bool is_prime(int num)
{
	for (int i = 2; i <= std::sqrt(num); i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}

	return true;
}
