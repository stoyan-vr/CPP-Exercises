#include <iostream>
#include <iomanip>
using namespace std;

int reversal(int n)
{
	int result = 0;
	while (n != 0) 
	{
		result = result * 10 + n % 10;
		n /= 10;
	}
	
	return result;
}

bool isPalindrome(int n) 
{
	return reversal(n) == n;
}

bool isEven(int n)
{
	return n % 2 == 0;
}

int main()
{
	int count = 0;
	int number = 1;
	while (count < 50) 
	{ 
		if (isPalindrome(number) && isEven(number))
			cout << setw(5) << number << (++count % 5 == 0 ? "\n" : "");
	  number++;
	}
	
	return 0;
}