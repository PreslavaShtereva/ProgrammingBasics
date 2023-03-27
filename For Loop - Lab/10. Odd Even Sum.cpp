#include<iostream>
#include<climits>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	int even = 0;
	int odd = 0;

	for (int i = 1; i <= n; i++) {
		int num;
		cin >> num;

		if (i % 2 == 0) {
			even += num;
	}
		else {
			odd += num;
		}
	}
  
	int diff = abs(odd - even);
  
	if (diff == 0) {
		cout << "Yes"<<'\n' << "Sum = " << odd;
	}
	else {
		cout << "No" << '\n' << "Diff = " << diff;
	}

return 0;
}
