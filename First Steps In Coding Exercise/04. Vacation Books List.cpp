#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int pages;
	int pagesPerHour;
	int days;
	cin >> pages;
	cin >> pagesPerHour;
	cin >> days;
	cout << (pages / pagesPerHour) / days;

return 0;
}


