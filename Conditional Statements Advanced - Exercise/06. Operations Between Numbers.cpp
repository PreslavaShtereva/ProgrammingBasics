#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	int n1;
	int n2;
	char symbol;
	cin >> n1 >> n2 >> symbol;
	int result;
	double resultDouble;

  if (n2 == 0 && symbol) {
	cout << "Cannot divide " << n1 << " by zero";
	return 0;
	}

	if ((symbol == '+') || (symbol == '*') || (symbol == '-')) {

		if (symbol == '+') {

			result = n1 + n2;

		}
		else if (symbol == '*') {

			result = n1 * n2;

		}
		else if (symbol == '-') {

			result = n1 - n2;

		}

    if (result % 2 == 0) {
			cout << n1 << " " << symbol << " " << n2 << " = " << result << " - " << "even";
		}
		else {
			cout << n1 << " " << symbol << " " << n2 << " = " << result << " - " << "odd";
		}
	}


	else if (symbol == '/') 
	{
		resultDouble = (double)n1 / n2;

		cout.setf(ios::fixed);
		cout.precision(2);

		cout << n1 << " / " << n2 << " = " << resultDouble;
	}
	else if (symbol == '%') {
		result = n1 % n2;
		cout << n1 << " % " << n2 << " = " << n1 % n2;
	}

return 0;
}


