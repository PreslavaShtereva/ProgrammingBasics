#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	int day;
	string room;
	string review;
	double all=0;

	cin >> day;
	getline(cin >> ws, room);
	getline(cin, review);

	int sleep = day - 1;

	if (room == "room for one person") {
		all=18 * sleep;
	}
	else if (room == "apartment") {
		if (sleep < 10) {
			all=((25 * sleep) - (25 * sleep * 0.3));
		}
		else if (sleep >= 10 && sleep <= 15) {
			all=((25 * sleep) - (25 * sleep * 0.35));
		}
		else if (sleep > 15) {
			all=((25 * sleep) - (25 * sleep * 0.5));
		}
	}
	else if (room == "president apartment") {
		if (sleep < 10) {
			all=((35 * sleep) - (35 * sleep * 0.1));
		}
		else if (sleep >= 10 && sleep <= 15) {
			all=((35 * sleep) - (35 * sleep * 0.15));
		}
		else if (day > 15) {
			all=((35 * sleep) - (35 * sleep * 0.2));
		}
	}

	if (review == "positive") {
		all += all*0.25;
	}
	else if(review == "negative"){
		all -= all*0.1;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << all;

return 0;
}


