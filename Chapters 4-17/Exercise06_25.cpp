#include <iostream>
#include <iomanip>
using namespace std;

bool isPrime(int n) 
{
	for (int d = 2; d <= n / 2; d++)
		if (n % d == 0)
			return false;
		
	return true;
}

int sumOfDigits(int n)
{
	int sum = 0;
	while (n != 0) 
	{
		sum += n % 10;
		n /= 10;
	}
	
	return sum;
}

int main()
{
	cout << "Prime Number\tSum of its digits" << endl;
	int count = 0;
	int number = 2;
	while (count < 25)
	{
		if (isPrime(number) && isPrime(sumOfDigits(number))) {
			cout << number << "\t" << sumOfDigits(number) << endl;
		  count++;
		}
		
		number++;
	}
	
	return 0;
}