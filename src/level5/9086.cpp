#include <iostream>
#include <string>

int main()
{
	int N;
	std::cin >> N;

	for (int i = 0; i < N; i++) {
		std::string str;
		std::cin >> str;

		std::cout << *str.begin() << *(str.end() - 1) << std::endl;
	}

	return 0;
}

