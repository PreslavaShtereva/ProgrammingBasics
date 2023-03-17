#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	string product;
	string city;
	double quantity;
	cin >> product >> city >> quantity;
	if (city == "Sofia") {
		if (product == "coffee") {
			cout << 0.50 * quantity;
		}
		if (product == "water") {
			cout << 0.80 * quantity;
		}
		if (product == "beer") {
			cout << 1.20 * quantity;
		}
		if (product == "sweets") {
			cout << 1.45 * quantity;
		}
		if (product == "peanuts") {
			cout << 1.60 * quantity;
		}
	}
	if (city == "Plovdiv") {
		if (product == "coffee") {
			cout << 0.40 * quantity;
		}
		if (product == "water") {
			cout << 0.70 * quantity;
		}
		if (product == "beer") {
			cout << 1.15 * quantity;
		}
		if (product == "sweets") {
			cout << 1.30 * quantity;
		}
		if (product == "peanuts") {
			cout << 1.50 * quantity;
		}
	}
	if (city == "Varna") {
		if (product == "coffee") {
			cout << 0.45 * quantity;
		}
		if (product == "water") {
			cout << 0.70 * quantity;
		}
		if (product == "beer") {
			cout << 1.10 * quantity;
		}
		if (product == "sweets") {
			cout << 1.35 * quantity;
		}
		if (product == "peanuts") {
			cout << 1.55 * quantity;
		}
	}

return 0;
}


