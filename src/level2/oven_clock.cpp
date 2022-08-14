#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int hour, minute, duration;

	cin >> hour;
	cin >> minute;
	cin >> duration;

	int result_hour, result_minute;

	if ((minute + duration) >= 60) {
		int gap_hour = (minute + duration) / 60;

		if ((hour + gap_hour) >= 24) 
		{
			result_hour = hour + gap_hour - 24;
		}
		else 
		{
			result_hour = hour + gap_hour;
		}

		result_minute = minute + duration - gap_hour * 60;
		
	}
	else
	{
		result_hour = hour;
		result_minute = minute + duration;
	}

	cout << result_hour << " " << result_minute << endl;

    return 0;
}
