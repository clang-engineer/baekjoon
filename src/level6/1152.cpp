#include <iostream>
#include <vector>
#include <sstream>


std::vector<std::string> split(std::string input, char delimiter);
void trim(std::string &s);
void ltrim(std::string &s);
void rtrim(std::string &s);

int main()
{
	std::string target_str;

	int count = 0;
	std::getline(std::cin, target_str);
	trim(target_str);

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

// trim from start (in place)
void ltrim(std::string &s) {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](unsigned char ch) {
        return !std::isspace(ch);
    }));
}

// trim from end (in place)
void rtrim(std::string &s) {
    s.erase(std::find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
        return !std::isspace(ch);
    }).base(), s.end());
}

// trim from both ends (in place)
void trim(std::string &s) {
    ltrim(s);
    rtrim(s);
}
