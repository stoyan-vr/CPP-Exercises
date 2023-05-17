#include <iostream>
using namespace std;

int octal2Dec(const string& octalNumber)
{
	int decimalValue = 0;
	for (int i = 0; i < octalNumber.size(); i++)
		decimalValue = decimalValue * 8 + (octalNumber[i] - '0');
	
	return decimalValue;
}

int main()
{
	cout << "Enter an octal number: ";
	string octal;
	cin >> octal;
	
	cout << "The decimal is " << octal2Dec(octal) << endl;
	
	return 0;
}