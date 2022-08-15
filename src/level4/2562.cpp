#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int num = 9;

	vector<int> vec;

	for (int i = 0; i < num; i++)
	{
		int input;
		cin >> input;
		vec.push_back(input);
	}

	int max = *max_element(vec.begin(), vec.end());
	int max_idx = max_element(vec.begin(), vec.end()) - vec.begin() + 1;

	cout << max << endl;
	cout << max_idx << endl;
    return 0;
}

