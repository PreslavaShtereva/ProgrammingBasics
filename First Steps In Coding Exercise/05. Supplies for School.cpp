#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int pen;
	int markers;
	int liter;
	int percent;
	cin >> pen;
        cin >> markers;
	cin >> liter;
	cin >> percent;
	cout << (pen * 5.80 + markers * 7.20 + liter * 1.20) - ((pen * 5.80 + markers * 7.20 + liter * 1.20)*percent / 100);

return 0;
}


