#include <iostream>

using namespace std;

int main()
{
	int num;

	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		int A, B;
		cin >> A;
		cin >> B;

		cout << "Case #" << i + 1 << ": " << A << " + " << B << " = " << A + B << endl;
	}
    return 0;
}

