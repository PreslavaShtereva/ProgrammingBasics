#include <iostream>
using namespace std;

int main()
{
	int hour;
	int min;
	cin >> hour >> min;
	min += 15;
	if (min >= 60) {
		min -= 60;
		hour++;
		if (hour >= 24) {
			hour = 0;
		}
		if (min < 10) {
			cout << hour << ":0" << min;
		}
		else {
			cout << hour << ":" << min;
		}
	}
	else {
		cout << hour << ":" << min;
	}
		
return 0;
}


