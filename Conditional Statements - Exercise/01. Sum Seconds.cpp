#include <iostream>
using namespace std;
double pi = 3.14159265359;

int main()
{
	int timeFirst;
	int timeSecond;
	int timeThird;
	cin >> timeFirst;
	cin >> timeSecond;
	cin >> timeThird;
	int result = timeFirst + timeSecond + timeThird;
	int minutes = result / 60;
	int seconds = result % 60;
	if (seconds < 10)
		cout << minutes << ":0" << seconds;
	else
		cout << minutes << ":" << seconds;

return 0;
}


