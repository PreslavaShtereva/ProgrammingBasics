#include <iostream>
using namespace std;

int main()
{
	string name;
	int numberProject;
	int hours;
	cin >> name;
	cin >> numberProject;
	hours = numberProject * 3;
	cout << "The architect " << name << " will need " << hours << " hours to complete " << numberProject << " project/s.";

	return 0;
}


