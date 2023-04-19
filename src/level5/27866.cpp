#include <iostream>
#include <string>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::string str;
	int pos;

	std::cin >> str;
	std::cin >> pos;

	std::cout << str[pos - 1] << std::endl;

	return 0;
}

