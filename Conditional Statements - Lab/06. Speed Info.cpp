#include <iostream>
using namespace std;

int main()
{

	double a;
	cin >> a;
	if (a <= 10)
		cout << "slow";
	else if (a <= 50)
		cout << "average";
	else if (a <= 150)
		cout << "fast";
	else if (a <= 1000)
		cout << "ultra fast";
	else
		cout << "extremely fast";
  
	return 0;
}


