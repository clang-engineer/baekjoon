#include <iostream>
#include <vector>
#include <cmath>

bool is_prime(int num);

int main()
{
	int M, N;

	std::cin >> M >> N;

	for (int i = M; i <= N; i++)
	{
		if (is_prime(i))
		{
			std::cout << i << "\n";
		}
	}
    return 0;
}

bool is_prime(int num)
{
	if (num < 2)
	{
		return false;
	}

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
			break;
		}
	}

	return is_prime;
};
