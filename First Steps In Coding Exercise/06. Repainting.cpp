#include <iostream>
using namespace std;

int main()
{
	int plastic;
	int paint;
	int liquid;
	int hours;
	cin >> plastic;
	cin >> paint;
	cin >> liquid;
	cin >> hours;
	double plasticPrice = (plastic + 2) * 1.50;
	double paintPrice = (paint + (paint * 0.1)) * 14.50;
	double liquidPrice = liquid * 5.00;
	double sum = plasticPrice + paintPrice + liquidPrice+0.40;
	double hoursP = (sum * 0.3) * hours;
	cout << sum + hoursP;
	
return 0;
}


