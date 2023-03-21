#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	string text;
	int rows, columns;
	cin >> text >> rows >> columns;
	double price = 0.0;
  
	if (text == "Premiere") {
		price = 12.00;
	}
	else if (text == "Normal") {
		price = 7.50;
	}
	else if (text == "Discount") {
		price = 5.00;
	}
	double sum = rows * columns * price;
  
	cout.setf(ios::fixed);
	cout.precision(2);
  
	cout << sum;

return 0;
}


