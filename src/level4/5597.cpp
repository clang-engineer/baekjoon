#include <iostream>
#include <vector>

int main()
{
	std::vector<bool> v(30, false);

	for (int i = 0; i < 28; i++) {
		int n;
		std::cin >> n;
		v[n - 1] = true;
	}

	for (int i = 0; i < 30; i++) {
		if (!v[i])
			std::cout << i + 1 << std::endl;
	}

    return 0;
}

