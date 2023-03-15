#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double record;
	double meter;
	double time;
	cin >> record >> meter >> time;
	double goal = meter * time;
	double against = floor(meter / 15) * 12.5;
	double all = goal + against;
	double difference = all - record;
	cout.setf(ios::fixed);
	cout.precision(2);

	if (record > all) {
		cout << "Yes, he succeeded! The new world record is " << all << " seconds.";
	}
	else {
		cout << "No, he failed! He was " << difference << " seconds slower.";
	}

return 0;
}


