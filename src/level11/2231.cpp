#include <iostream>
#include <vector>

int main()
{
	int N;
	std::cin >> N;

	int result = 0;
	for (int i = 0; i <= N; i++)
	{
		int sum = i;
		int tmp = i;

		while (tmp > 0) {
			sum += tmp % 10;
			tmp /= 10;
		}

		if (sum == N) {
			result = i;
			break;
		}
	}

	std::cout << result << std::endl;

    return 0;
}

