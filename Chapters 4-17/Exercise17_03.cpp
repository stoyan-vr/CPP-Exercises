#include <iostream>

using namespace std;

int gcd(int, int);

int main()
{
	cout << "Enter two integers: ";
	int n1, n2;
	cin >> n1 >> n2;
	
	cout << "The greatest common divisor for " << n1 << 
	  " and " << n2 << " is " << gcd(n1, n2) << endl;
		
	return 0;
}

int gcd(int m, int n) 
{
	if (m % n == 0)
		return n;
	else
		return gcd(n, m % n);
}