#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<std::string> vec = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

	std::string input;
	std::cin >> input;

	int count = 0;

	std::string replaced1 = input;

	for (int i = 0; i < input.length() - 2; i++)
	{
		std::string target_string = replaced1.substr(i, 3);
		if (std::find(vec.begin(), vec.end(), target_string) != vec.end())
		{
			count++;
			replaced1.replace(replaced1.find(target_string), (target_string).size(), "0");
		}
	}

	std::string replaced2 = replaced1;

	for (int i = 0; i < replaced1.length() - 1; i++)
	{
		std::string target_string = replaced2.substr(i, 2);
		if (std::find(vec.begin(), vec.end(), target_string) != vec.end())
		{
			count++;
			replaced2.replace(replaced2.find(target_string), (target_string).size(), "0");
		}

	}

	for (int i = 0; i < replaced2.size(); i++)
	{
		if (replaced2[i] != '0')
		{
			count++;
		}
	}

	std::cout << count << std::endl;

	return 0;
}
