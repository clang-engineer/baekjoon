#include <iostream>

using namespace std;

int main()
{
	int num;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		int A, B;
		cin >> A;
		cin >> B;

		cout << "CASE #" << i + 1 << ": " << A + B << endl;
	}
    return 0;
}

