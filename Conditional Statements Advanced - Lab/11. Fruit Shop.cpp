#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	string fruit;
	string day;
	double quantity;
	cin >> fruit >> day >> quantity;
	double price = 0.0;
  
	if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday") {
		if (fruit == "banana") {
			price=2.50;
		}
		if (fruit == "apple") {
			price = 1.20;
		}
		if (fruit == "orange") {
			price = 0.85;
		}
		if (fruit == "grapefruit") {
			price = 1.45;
		}
		if (fruit == "kiwi") {
			price = 2.70;
		}
		if (fruit == "pineapple") {
			price = 5.50;
		}
		if (fruit == "grapes") {
			price = 3.85;
		}
	}
	else if (day == "Saturday" || day == "Sunday") {
		if (fruit == "banana") {
			price = 2.70;
		}
		if (fruit == "apple") {
			price = 1.25;
		}
		if (fruit == "orange") {
			price = 0.90;
		}
		if (fruit == "grapefruit") {
			price = 1.60;
		}
		if (fruit == "kiwi") {
			price = 3.00;
		}
		if (fruit == "pineapple") {
			price = 5.60;
		}
		if (fruit == "grapes") {
			price = 4.20;
		}
	}
	if (price > 0) {
		cout.setf(ios::fixed);
		cout.precision(2);
		cout << price * quantity;
	}
	else {
		cout << "error";
	}

return 0;
}


