#include<iostream>
#include<climits>
using namespace std;

int main() {
	
	int age, toyPrice;
	double washingMachine;

	cin >> age >> washingMachine >> toyPrice;

	double money = 0;
	double moneyForBirthday=10;

	for (size_t i = 1; i <= age; i++)
	{
		if (i % 2 == 0) {
			money += moneyForBirthday;
			moneyForBirthday += 10;
			money -= 1;
		}
		else {
			money += toyPrice;
		}
	}
  
	double diff = money - washingMachine;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (diff >= 0) {
		cout << "Yes! " << diff << endl;
	}
	else {
		cout << "No! " << abs(diff) << endl;
	}

return 0;
}
