#include <iostream>
using namespace std;

// Function prototypes
int cubeOfDigits(int);
void isArmstrong(int, int);

int main()
{
	cout << "Enter an integer: ";
	int n;
	cin >> n;
	
	int sum = cubeOfDigits(n);
	isArmstrong(sum, n);
	
	return 0;
}

// Return the sum of the cubes of the digits in an integer,
// i.e., cubeOfDigits(131) returns 1^3 + 3^3 + 1^3 = 29
int cubeOfDigits(int number) 
{
	int sum = 0;
	while (number != 0)
	{
		int r = number % 10;
		sum += r * r * r;
		number /= 10;
	}
	
	return sum;
}

// Displays if integer is an Armstrong integer
void isArmstrong(int sum, int number) 
{
	if (sum == number)
		cout << number << " is an Armstrong integer" << endl;
	else
		cout << number << " is not an Armstrong integer" << endl;
}