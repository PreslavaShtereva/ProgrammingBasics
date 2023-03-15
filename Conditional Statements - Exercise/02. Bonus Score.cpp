#include <iostream>
using namespace std;

int main()
{
	int a;
	double bonus;
	cin >> a;
  
	if (a <= 100) 
	{
		bonus = 5;
	}
	else if (a <= 1000) 
	{
		bonus = 0.2 * a;
	}
	else 
	{
		bonus = 0.1 * a;
	}
	if (a % 2 == 0) 
	{
		bonus += 1;
	}
	else if (a % 10 == 5)
	{
		bonus += 2;
	}
  
	cout << bonus <<"\n";
	cout << a + bonus;

return 0;
}


