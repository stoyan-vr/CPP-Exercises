#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a number between 0 and 1000: ";
	int number;
	cin >> number;
	
	int d1 = number % 10;
	number = number / 10;
	int d2 = number % 10;
	number = number / 10;
	int d3 = number;
	int sum = d1 + d2 + d3;
	
	cout << "The sum of the digits is " << sum << endl;
	
	return 0;
}