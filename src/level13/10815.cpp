#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int total_card;

	std::cin >> total_card;
	std::vector<int> card(total_card);

	for (int i = 0; i < total_card; i++)
	{
		std::cin >> card[i];
	}

	std::sort(card.begin(), card.end());


	int total_user_card;
	std::cin >> total_user_card;
	std::vector<int> user_card(total_user_card);

	for (int i = 0; i < total_user_card; i++)
	{
		std::cin >> user_card[i];
	}

	for (int i = 0; i < total_user_card; i++)
	{
		std::binary_search(card.begin(), card.end(), user_card[i]) ? std::cout << "1 " : std::cout << "0 ";
	}
	std::cout << "\n";

	return 0;
}
