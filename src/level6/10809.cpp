#include <iostream>
#include <vector>

int main()
{
	std::string keyword;
	std::cin >> keyword;

	const std::string albet{"abcdefghijklmnopqrstuvwxyz"};

	for (int i = 0; i < albet.length(); i++)
	{
		int pos = keyword.find(albet[i]);

		std::cout << pos << " ";
	}

	std::cout << std::endl;

	return 0;
}

