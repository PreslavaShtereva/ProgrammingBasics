#include <iostream>
using namespace std;

int main()
{
	int yearPrice;
	cin >> yearPrice;
	double shoes = yearPrice -(yearPrice* 0.4);
	double jursey = shoes - (shoes * 0.2);
	double ball = 0.25 * jursey;
	double acces = 0.20 * ball;
	cout << yearPrice + shoes + jursey + ball + acces;
	
return 0;
}


