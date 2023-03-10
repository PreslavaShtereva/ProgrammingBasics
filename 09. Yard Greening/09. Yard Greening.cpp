#include <iostream>
using namespace std;

int main()
{
	double meter;
	cin >> meter;
	cout << "The final price is: " << meter * 7.61 - (meter * 7.61 * 0.18) << " lv.";
	cout << " The discount is: " << (meter * 7.61) * 0.18 << " lv.";
	return 0;
}


