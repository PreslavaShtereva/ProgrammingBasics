#include <iostream>
using namespace std;

int main()
{
	int chicken;
	int fish;
	int veg;
	cin >> chicken;
	cin >> fish;
	cin >> veg;
	double sum = chicken * 10.35 + fish * 12.40 + veg * 8.15;
	double dessert = 0.2 * sum;
	cout<<sum + dessert + 2.50;
	
return 0;
}


