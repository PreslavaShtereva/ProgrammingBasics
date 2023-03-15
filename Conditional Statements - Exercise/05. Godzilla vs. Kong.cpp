#include <iostream>
using namespace std;

int main()
{
	double budget;
	int statist;
	double price_clothes;
	cin >> budget >> statist >> price_clothes;
	double decor = budget * 0.1;
	double sum_clothes = statist * price_clothes;
	if (statist > 150) 
	{
		sum_clothes -= sum_clothes * 0.1;
	}
	double all = decor + sum_clothes;
	double difference = budget - all;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (difference<0) {
		cout << "Not enough money!""\n" <<
			"Wingard needs " << abs(difference) << " leva more.";
	}
	else {
		cout << "Action!""\n" <<
			"Wingard starts filming with " << difference << " leva left.";
	}

return 0;
}


