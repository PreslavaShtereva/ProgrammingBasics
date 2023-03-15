#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	string text;
	int continues;
	int relax;
	getline(cin, text);
	cin  >> continues >> relax;

	double time_lunch = relax * 0.125;
	double time_relax = relax * 0.25;
	double other = relax - time_lunch - time_relax;

	if (other >= continues) 
	{
		double need = ceil(other - continues);
		cout << "You have enough time to watch "<< text << " and left with " << need << " minutes free time.";
	}
	else 
	{
		double need = ceil(continues - other);
		cout << "You don't have enough time to watch "<< text << ", you need " << need << " more minutes.";
	}

return 0;
}


