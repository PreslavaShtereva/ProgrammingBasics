#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	int num;
	cin >> num;
	if (num >= -100 && num <= 100 && num != 0 ){
			cout << "Yes";
	}
	else {
		cout << "No";
	}

return 0;
}


