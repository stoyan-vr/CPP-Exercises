#include <iostream>
using namespace std;

void displayEven(int number) {
	int evenDigits = 0;
	while (number != 0) 
	{
		int r = number % 10;
		if (r % 2 == 0)
		  evenDigits = r + evenDigits * 10;
		number /= 10;
	}
	
	while (evenDigits != 0) {
		int r = evenDigits % 10;
		cout << r;
		evenDigits /= 10;
	}
}

int main()
{
	cout << "Enter an integer: "; 
	int n;
	cin >> n;
	cout << "The even digits are ";
	displayEven(n);
	
	return 0;
}