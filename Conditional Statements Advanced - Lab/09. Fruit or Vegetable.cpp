#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	string text;
	cin >> text;
  
	if (text == "banana" || text == "apple" || text == "kiwi"
		|| text == "cherry" || text == "lemon" || text == "grapes") {
		cout << "fruit";
	}
	else if (text == "tomato" || text == "cucumber" || text == "pepper"
		|| text == "carrot") {
		cout << "vegetable";
	}
	else {
		cout << "unknown";
	}

return 0;
}


