#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	int examHour;
	int examMin;
	int comeHour;
	int comeMin;

	cin >> examHour >> examMin >> comeHour >> comeMin;
	int examInMin = (examHour * 60) + examMin;
	int comeInMin = (comeHour * 60) + comeMin;

	int difference = comeInMin - examInMin;

	if (difference<=0  && difference>=-30)
	{
		cout << "On time ";
		int onTimeHour = abs(difference) / 60;
		int onTimeMin = abs(difference) % 60;
		if (onTimeHour == 0 && onTimeMin == 0) {
			return 0;
		}
		if (onTimeHour <= 0) {
			cout << onTimeMin << " minutes before the start";
		}

		else {
			if (onTimeMin < 10) {
				cout << onTimeHour << ":0" << onTimeMin << " hours before the start";
			}
			else {
				cout << onTimeHour << ":" << onTimeMin << " hours before the start";
			}
		}
	}
  
	else if (difference >= 1) {
		cout << "Late ";

		int lateHour = difference / 60;
		int lateMin = difference % 60;

		if (lateHour <= 0) {
			cout << lateMin << " minutes after the start";
		}

		else {
			if (lateMin < 10) {
				cout << lateHour << ":0" << lateMin << " hours after the start";
			}
			else {
				cout << lateHour << ":" << lateMin << " hours after the start";
			}
		}
	}
  
	else if (difference < -30) {

		cout << "Early ";
		int earlyHour = abs(difference) / 60;
		int earlyMinutes = abs(difference) % 60;

		if (earlyHour <= 0) {
			cout << earlyMinutes << " minutes before the start";
		}

		else {
			if (earlyMinutes < 10) {
				cout << earlyHour << ":0" << earlyMinutes << " hours before the start";
			}
			else {
				cout << earlyHour << ":" << earlyMinutes << " hours before the start";  
			}
		}
	}

return 0;
}


