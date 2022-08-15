#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>


using namespace std;

int main()
{
	int count;
	cin >> count;

	vector<double> vec;

	for (int i = 0; i < count; i++)
	{
		int input;
		cin >> input;

		vec.push_back(input);
	}

	int max = *max_element(vec.begin(), vec.end());

	for (auto iter = vec.begin(); iter != vec.end(); iter++)
	{
		*iter = (double) *iter / max * 100;
	}

	double avg = accumulate(vec.begin(), vec.end(), 0.0) / vec.size();

	cout << avg << endl;;

	return 0;
}

