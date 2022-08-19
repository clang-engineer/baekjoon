#include <iostream>
#include <vector>

int get_word_freq(std::string &find_str, std::string &origin_str);

int main()
{
	std::vector<std::string> vec = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

	std::string input;
	std::cin >> input;

	int count = 0;

	for (int i = 0; i < input.size() - 1; i++)
	{
		std::string target_string = input.substr(i, 2);
		if (std::find(vec.begin(), vec.end(), target_string) != vec.end())
		{
			count++;
		}
	}

	for (int i = 0; i < input.size() - 2; i++)
	{
		std::string target_string_len2 = input.substr(i, 3);
		std::string target_string_len3 = input.substr(i, 3);
		if ( std::find(vec.begin(), vec.end(), target_string_len2) == vec.end() &&
				std::find(vec.begin(), vec.end(), target_string_len3) != vec.end())
		{
			count++;
		}

	}

	for (auto iter = vec.begin(); iter != vec.end(); iter++)
	{
		int word_freq = get_word_freq(*iter, input);

		for (int i = 0; i < word_freq; i++)
		{
			int index = input.find(*iter);
			if (index != std::string::npos)
			{
				input.replace(input.find(*iter), (*iter).size(), "0");
			}
		}
	}

	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] != '0')
		{
			count++;
		}
	}

	std::cout << count << std::endl;

	return 0;
}

int get_word_freq(std::string &find_str, std::string &origin_str)
{
	int find_str_len = find_str.size();
	int origin_str_len = origin_str.size();
	int result = 0;

	for (int i = 0; i <= origin_str_len - find_str_len; i++)
	{
		int j;
		for (j = 0; j < find_str_len; j++)
			if (origin_str[i+j] != find_str[j])
				break;

		if (j == find_str_len) 
		{
			result++;
		}
	}
	return result;
}
