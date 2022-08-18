#include <iostream>
#include <vector>
#include <sstream>


std::vector<std::string> split(std::string input, char delimiter);

int main()
{
	std::string target_str;

	int count = 0;
	std::getline(std::cin, target_str);

	std::vector<std::string> result = split(target_str, ' ');

	for (int i=0; i < result.size(); i++){
		count++;
	}

	std::cout << count << std::endl;

	return 0;
}

std::vector<std::string> split(std::string input, char delimiter) {
	std::vector<std::string> vec;
	std::stringstream ss(input);
	std::string temp;

	while (getline(ss, temp, delimiter)) {
		vec.push_back(temp);
	}

	return vec;
}
