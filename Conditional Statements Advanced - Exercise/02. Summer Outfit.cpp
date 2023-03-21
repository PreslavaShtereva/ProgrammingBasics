#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	int degree;
	string text;
	cin >> degree >> text;
	string shoes, outfit;
	if (text == "Morning") {
		if (degree >= 10 && degree <= 18) {
			shoes = "Sneakers";
			outfit = "Sweatshirt";
		}
		if (degree >18 && degree <= 24) {
			shoes = "Moccasins";
			outfit = "Shirt";
		}
		if (degree >= 25) {
			shoes = "Sandals";
			outfit = "T-Shirt";
		}
	}
	if (text == "Afternoon") {
		if (degree >= 10 && degree <= 18) {
			shoes = "Moccasins";
			outfit = "Shirt";
		}
		if (degree > 18 && degree <= 24) {
			shoes = "Sandals";
			outfit = "T-Shirt";
		}
		if (degree >= 25) {
			shoes = "Barefoot";
			outfit = "Swim Suit";
		}
	}
	if (text == "Evening") {
		if (degree >= 10 && degree <= 18) {
			shoes = "Moccasins";
			outfit = "Shirt";
		}
		if (degree > 18 && degree <= 24) {
			shoes = "Moccasins";
			outfit = "Shirt";
		}
		if (degree >= 25) {
			shoes = "Moccasins";
			outfit = "Shirt";
		}
	}
	cout << "It's " << degree << " degrees, get your " << outfit << " and " << shoes << ".";
	
return 0;
}


