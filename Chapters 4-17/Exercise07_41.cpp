#include <iostream>
#include <cstdlib>
using namespace std;

void itoaUse(int value, char s[], int radix)
{
	itoa(value, s, radix);
}

int main()
{
	cout << "Enter a decimal nonnegative integer: ";
	int value;
	cin >> value;
	
	cout << "Enter a radix (8 or 16): ";
	int radix;
	cin >> radix;
	
	char s[80];
	
	itoaUse(value, s, radix);
	
	cout << s << endl;
	
	return 0;
}