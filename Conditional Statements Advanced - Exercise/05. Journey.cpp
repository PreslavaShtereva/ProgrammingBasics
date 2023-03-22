#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	double budget, need_money;
	string season, destination, kind_holiday;
	cin >> budget >> season;

	if (budget <= 100) {
		destination = "Bulgaria";
		if (season == "summer") {
			need_money = budget*0.3;
			kind_holiday = "Camp";
		}
		else if (season == "winter") {
			need_money =budget* 0.7;
			kind_holiday = "Hotel";
		}
	}
	else if (budget <= 1000) {
		destination = "Balkans";
		if (season == "summer") {
			need_money = budget * 0.4;
			kind_holiday = "Camp";
		}
		else if (season == "winter") {
			need_money = budget * 0.8;
			kind_holiday = "Hotel";
		}
	}
	else {
		destination = "Europe";
		need_money = budget * 0.9;
		kind_holiday = "Hotel";
	}
	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "Somewhere in " << destination << "\n" << kind_holiday << " - " << need_money;
  
return 0;
}


