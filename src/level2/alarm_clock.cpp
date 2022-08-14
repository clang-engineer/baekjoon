#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int hour, minute;

	cin >> hour;
	cin >> minute;

	int result_hour, result_minute;

	if ((minute - 45) < 0)  
	{
		result_minute = 60 - (minute - 45) * -1;
		
		if (hour == 0)
		{
			result_hour = 23;
		}
		else
		{
			result_hour = hour - 1;
		}
	} 
	else
	{
		result_hour = hour;
		result_minute = minute - 45;
	}

	cout << result_hour << " " << result_minute << endl;
	
    return 0;
}

