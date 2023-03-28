#include<iostream>
#include<climits>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	int num;

	int p1 = 0;
	int p2 = 0;
	int p3 = 0;
	int p4 = 0;
	int p5 = 0;

	for (size_t i = 0; i < n; i++) {
		cin >> num;
		if (num < 200) {
			p1++;
		}
		else if (num >= 200 && num <= 399) {
			p2++;
		}
		else if (num >= 400 && num <= 599) {
			p3++;
		}
		else if (num >= 600 && num <= 799) {
			p4++;
		}
		else {
			p5++;
		}
	}
  
	double p1Percentage = (double)p1 / n * 100.0;
	double p2Percentage = (double)p2 / n * 100.0;
	double p3Percentage = (double)p3 / n * 100.0;
	double p4Percentage = (double)p4 / n * 100.0;
	double p5Percentage = (double)p5 / n * 100.0;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << p1Percentage << '%' << '\n';
	cout << p2Percentage << '%' << '\n';
	cout << p3Percentage << '%' << '\n';
	cout << p4Percentage << '%' << '\n';
	cout << p5Percentage << '%' << '\n';

return 0;
}
