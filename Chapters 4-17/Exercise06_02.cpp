#include <iostream>
using namespace std;

double averageDigits(long n) 
{
	double sum = 0;
	int count = 0;
	while (n != 0)
	{
		sum += n % 10;
		n /= 10;
		count++;
	}
	
	return sum / count;
}

int main()
{
	cout << "Enter an integer: ";
	long n;
	cin >> n;
	
	double average = averageDigits(n);
	
	cout << "The average of digits of " << n << " is " << average << endl;
	
	return 0;
}