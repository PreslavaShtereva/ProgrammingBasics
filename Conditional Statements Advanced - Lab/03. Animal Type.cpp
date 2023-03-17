#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	string text;
	getline(cin, text);

	if (text == "dog") {
		cout << "mammal";
	}
	else if (text == "crocodile") {
		cout << "reptile";
	}
	else if (text == "tortoise") {
		cout << "reptile";
	}
	else if (text == "snake") {
		cout << "reptile";
	}
	else{
		cout << "unknown";
	}
	
return 0;
}


