#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double budget;
	int n;
	int m;
	int p;
	cin >> budget >> n >> m >> p;
	double price_N = 250 * n;
	double price_M = (0.35 * price_N) * m;
	double price_P = (0.1 * price_N) * p;
	double sum = price_N + price_M + price_P;
  double difference = budget - sum;
  
	if (n > m) 
	{
		sum -= sum * 0.15;
  }
  
	cout.setf(ios::fixed);
	cout.precision(2);

	if (difference < 0) 
	{
		cout << "Not enough money! You need " << abs(difference) << " leva more!";
	}
	else 
	{
		cout << "You have " << difference<< " leva left!";
	}

return 0;
}


