#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	int budget;
	string season;
	int fishman;
	double rent = 0.0;

	cin >> budget >> season >> fishman;
	if (season == "Spring") {
		 rent = 3000;
	}
	else if (season == "Summer" || season == "Autumn") {
		 rent = 4200;
	}
	else if (season == "Winter") {
		 rent = 2600;
	}

	if (fishman <= 6) {
		rent -= rent * 0.1;
	}
	else if (fishman >=7 && fishman<=11) {
		rent -= rent * 0.15;
	}
	else if (fishman >12) {
		rent -= rent * 0.25;
	}

	if (fishman % 2 == 0 && season!="Autumn") {
		 rent = rent - (rent * 0.05);
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	
	if (budget < rent) {
		cout << "Not enough money! You need " << rent - budget << " leva.";
	}
	else {
		cout << "Yes! You have " << budget - rent << " leva left.";
	}

return 0;
}


