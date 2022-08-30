#include <iostream>
#include <vector>
#include <cmath>
#include <set>


bool is_prime(int num);
std::set<std::pair<int, int>> get_prime_factors(int num);
std::pair<int, int> find_min_gap_pair_in_set(std::set<std::pair<int, int>> set);

int main()
{
	int count;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		int num;
		std::cin >> num;

		std::set<std::pair<int, int>> prime_factors = get_prime_factors(num);

		std::pair<int, int> result = find_min_gap_pair_in_set(prime_factors);
		std::cout << result.first << " " << result.second << std::endl;
	}

	return 0;
}

bool is_prime(int num)
{
	if (num == 1)
	{
		return false;
	}

	for (int i = 2; i <= std::sqrt(num); i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}

	return true; 
}

std::set<std::pair<int, int>> get_prime_factors(int num)
{
	std::set<std::pair<int, int>> prime_factors;
	for (int i = 2; i <= num; i++)
	{
		if (is_prime(i) && is_prime(num - i))
		{
			prime_factors.insert(std::make_pair(i, num - i));
		}
	}
	return prime_factors;
}

std::pair<int, int> find_min_gap_pair_in_set(std::set<std::pair<int, int>> set)
{
	std::pair<int, int> min_gap_pair = *set.begin();
	for (auto it = set.begin(); it != set.end(); ++it)
	{
		if (abs(it->first - it->second) < abs(min_gap_pair.first - min_gap_pair.second))
		{
			min_gap_pair = *it;
		}
	}
	return min_gap_pair;
}
