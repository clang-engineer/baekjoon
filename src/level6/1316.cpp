#include <iostream>
#include <vector>
#include <algorithm>

bool is_group_word(std::string& word);

int main()
{
	int total_num;
	std::cin >> total_num;

	std::vector<std::string> vec;
	for (int i = 0; i < total_num; i++)
	{
		std::string input;
		std::cin >> input;
		vec.push_back(input);
	}

	int count = 0; 
	for (auto iter = vec.begin(); iter != vec.end(); iter++)
	{
		if (is_group_word(*iter))
		{
			count++;
		}
	}

	std::cout << count << std::endl;

	return 0;
}

bool is_group_word(std::string& word)
{
	std::vector<char> visited;

	char start = word[0];
	visited.push_back(start);
	for (int i = 1; i < word.length(); i++)
	{
		if (start != word[i]) 
		{
			if (find(visited.begin(), visited.end(), word[i]) != visited.end())
			{
				return false;
			}
			else
			{
				start = word[i];
				visited.push_back(word[i]);
			}
		}
	}


	return true;
}

