#include <iostream>
#include <vector>

int main()
{
	int N;

	std::cin >> N;

	std::vector<int> vec;
	while (N > 0) {
		int v;
		std::cin >> v;
		vec.push_back(v);

		N--;
	}

	int find_num;
	std::cin >> find_num;

	int count = 0;
	for (auto v : vec) {
		if (v == find_num) {
			count++;
		}
	}

	std::cout << count << std::endl;
	
    return 0;
}

