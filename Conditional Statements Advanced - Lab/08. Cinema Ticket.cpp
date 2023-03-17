#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	string day;
	cin >> day;
  
	if (day == "Monday" || day == "Tuesday" || day == "Friday") {
		cout << "12";
	}
	if (day == "Wednesday" || day == "Thursday") {
		cout << "14";
	}
	if (day == "Saturday" || day == "Sunday") {
		cout << "16";
	}

return 0;
}


