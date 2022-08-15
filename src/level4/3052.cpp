#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
	vector<int> vec;
	vector<int> div_vec;

	for (int i = 0; i < 10; i++)
	{
		int input;
		cin >> input;

		vec.push_back(input);
	}

	for (auto iter = vec.begin(); iter != vec.end(); iter++)
	{
		div_vec.push_back(*iter % 42);
	}

	set<int> result(div_vec.begin(), div_vec.end());

	cout << result.size() << endl;

    return 0;
}

