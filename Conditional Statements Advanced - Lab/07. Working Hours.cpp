#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	int hour;
	string day;
	cin >> hour >> day;
  
	if (hour<10|| hour>18 || day=="Sunday"){
			cout << "closed";
	}
	else {
		  cout << "open";
	}

return 0;
}


