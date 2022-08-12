#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int  a, b;

	cin >> a;
	cin >> b;

	double result = (double) a / (double) b;
	cout << fixed << setprecision(20);
	cout << result << endl;

	return 0;
}
