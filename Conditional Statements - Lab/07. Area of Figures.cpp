#include <iostream>
using namespace std;
double pi = 3.14159265359;

int main()
{
	string a;
	cin >> a;

	if (a == "square") {
		double x;
		cin >> x;
		cout.setf(ios::fixed);
		cout.precision(3);
		cout << x * x;
	}
	else if (a == "rectangle") {
		double x, y;
		cin >> x >> y;
		cout.setf(ios::fixed);
		cout.precision(3);
		cout << x * y;
	}
	else if (a == "circle") {
		double x;
		cin >> x;
		cout.setf(ios::fixed);
		cout.precision(3);
		cout << x*x * pi;
	}
	else if (a == "triangle") {
		double x, y;
		cin >> x >> y;
		cout.setf(ios::fixed);
		cout.precision(3);
		cout << (x * y) / 2;
	}
  
	return 0;
}


