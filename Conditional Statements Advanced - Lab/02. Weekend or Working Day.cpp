#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	string day;
	getline(cin, day);

	if (day == "Monday") {
		cout << "Working day";
	}

	else if (day == "Tuesday") {
		cout << "Working day";
	}

	else if (day == "Wednesday") {
		cout << "Working day";
	}

	else if (day == "Thursday") {
		cout << "Working day";
	}

	else if (day == "Friday") {
		cout << "Working day";
	}

	else if (day == "Saturday") {
		cout << "Weekend";
	}

	else if (day == "Sunday") {
		cout << "Weekend";
	}
	else {
		cout << "Error";
	}
	
return 0;
}


