#include <iostream>
#include <cstdlib>
using namespace std;

void itoaUse(int value, char s[], int radix)
{
	itoa(value, s, radix);
}

int main()
{
	cout << "Enter a decimal non negative integer: ";
	int value;
	cin >> value;
	
	char s[64];
	itoaUse(value, s, 2);
	
	cout << "The binary value is " << s << endl;
	
	return 0;
}