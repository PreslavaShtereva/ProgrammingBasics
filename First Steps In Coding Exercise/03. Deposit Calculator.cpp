#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double depositSum;
	int month;
	double procent;
	cin >> depositSum;
	cin >> month;
	cin >> procent;
	cout << depositSum + month * ((depositSum * (procent/100)) / 12);

return 0;
}


