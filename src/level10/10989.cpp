#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int total_count;
	std::cin >> total_count;

	int array[10001] = {0};
	while (total_count > 0) {
		int num;
		std::cin >> num;

		array[num]++;
		--total_count;
	}

	for (int i = 0; i <= 10000; ++i) {
		for (int j = 0; j < array[i]; ++j) {
			std::cout << i << "\n";
		}
	}


	return 0;
}

