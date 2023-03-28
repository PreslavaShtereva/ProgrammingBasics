#include<iostream>
#include<climits>
using namespace std;

int main() {

	int n, salary;
	cin >> n >> salary;
	string tabName;

	for (int i = 1; i <= n; i++)
	{
		cin >> tabName;

		if (tabName == "Facebook") {
			salary -= 150;
		}
		else if (tabName == "Instagram") {
			salary -= 100;
		}
		else if (tabName == "Reddit") {
			salary -= 50;
		}
	}
  
	if (salary <= 0) {
		cout << "You have lost your salary. " << endl;
	}
	else {
		cout<<salary;
	}

return 0;
}
