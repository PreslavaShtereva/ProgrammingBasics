#include <iostream>
using namespace std;

int main()
{

	int lenght;
	int bright;
	int high;
	double percent;
	cin >> lenght;
	cin >> bright;
	cin >> high;
	cin >> percent;
	double liter = (lenght * bright * high);
	double capacity_liter = liter / 1000;
	double unused = capacity_liter * (percent / 100.0);
	double used = capacity_liter - unused;
	cout << used;

return 0;
}


