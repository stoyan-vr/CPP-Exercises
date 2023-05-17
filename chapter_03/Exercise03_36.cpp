#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a three-digit integer: ";
	int n;
	cin >> n;
	
	cout << n << " is " << (n % 10 == n / 100 ? "" : "not ") << "a palindrome" << endl;
	
	return 0;
}