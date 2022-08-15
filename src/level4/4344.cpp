#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
	int count;
	
	cin >> count;

	vector<double> result;

	for (int i = 0; i < count; i++)
	{
		int arr_size;
		cin >> arr_size;

		vector<int> vec;
		for (int j = 0; j < arr_size; j++)
		{
			int input;
			cin >> input;
			vec.push_back(input);
		}

		int sum = accumulate(vec.begin(), vec.end(), 0);

		double avg = (double) sum / (double) arr_size;

		int num_of_opper = count_if(vec.begin(), vec.end(), [avg](int elem) {
				return elem > avg;
				});

		double temp = ((double) num_of_opper / (double) vec.size()) * 100;
		result.push_back(temp);
	}

	cout << fixed;
	cout.precision(3);
	for (auto iter = result.begin(); iter != result.end(); iter++)
		cout << *iter << "%" << endl;

    return 0;
}

