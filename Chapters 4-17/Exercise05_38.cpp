#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a positive integer: ";
	int number;
	cin >> number;
	
  int value = number;	
	int reversal = 0;
	while (value != 0) 
	{
		reversal = reversal * 10 + value % 10;
		value /= 10;
	}
	
	cout << number << " is " << (reversal == number ? "" : "not ") 
	  << "a palindrome" << endl;
	
	return 0;
}