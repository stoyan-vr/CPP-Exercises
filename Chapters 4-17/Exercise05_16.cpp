#include <iostream>
using namespace std;

int main()
{
	// Prompt the user to enter two integers
	cout << "Enter the first integer: ";
	int n1;
	cin >> n1;
	
	cout << "Enter the second integer: ";
	int n2;
	cin >> n2;
	
	int d = n1 < n2 ? n1 : n2;
	
	while (d >= 1) 
	{
		if (n1 % d == 0 && n2 % d == 0) 
		  break;
		d--;
	}
	
	cout << "The greatest common divisor for " << n1 << " and " 
	  << n2 << " is " << d << endl;
	
	return 0;
}