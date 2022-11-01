#include <iostream>
#include <vector>
#include <cstring>


int recursion(const char *s, int l, int r, int& count){
	count = count + 1;
	if(l >= r) return 1;
	else if(s[l] != s[r]) return 0;
	else return recursion(s, l+1, r-1, count);
}

std::pair<int, int> isPalindrome(const char *s){
	int count = 0;
	int result = recursion(s, 0, strlen(s)-1, count);
	return std::pair<int, int>(result, count);
}

int main()
{
	int total_count; 
	std::cin >> total_count;

	std::vector<std::string> vec;

	for (int i = 0; i < total_count; i++)
	{
		char s[100];
		std::cin >> s;
		vec.push_back(s);
	}

	for (int i = 0; i < total_count; i++)
	{
		std::pair<int, int> result = isPalindrome(vec[i].c_str());
		std::cout << result.first << " " << result.second << std::endl;
	}

	return 0;
}

