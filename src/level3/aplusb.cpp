#include <iostream>
#include <vector>

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

		cout << A + B << endl;
	}
    return 0;
}

