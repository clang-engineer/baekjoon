#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<std::string> vec = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

	std::string input;
	std::cin >> input;

	int count = 0;

	for (int i = 0; i < input.length() - 2; i++)
	{
		if (input.length() < 3)
		{
			break;
		}
		std::string target_string = input.substr(i, 3);
		if (std::find(vec.begin(), vec.end(), target_string) != vec.end())
		{
			count++;
			input.replace(input.find(target_string), (target_string).length(), "0");
		}
	}


	for (int i = 0; i < input.length() - 1; i++)
	{
		if (input.length() < 2)
		{
			break;
		}
		std::string target_string = input.substr(i, 2);
		if (std::find(vec.begin(), vec.end(), target_string) != vec.end())
		{
			count++;
			input.replace(input.find(target_string), (target_string).length(), "0");
		}

	}

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] != '0')
		{
			count++;
		}
	}

	std::cout << count << std::endl;

	return 0;
}
