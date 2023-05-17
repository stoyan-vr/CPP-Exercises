#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

void bin2Octal(const char [], char []);
int bin2Dec(const char []);

int main()
{
	cout << "Enter a binary string: ";
	char binaryValue[80];
	cin >> binaryValue;
	
	char octalValue[80];
	
	bin2Octal(binaryValue, octalValue);
	
	cout << "The octal value is " << octalValue << endl;
	
	return 0;
}

void bin2Octal(const char binaryString[], char octalNumber[])
{
	itoa(bin2Dec(binaryString), octalNumber, 8);
}

int bin2Dec(const char binaryString[])
{
	int value = 0;
	for (int i = 0; i < strlen(binaryString); i++)
		value = value * 2 + (binaryString[i] - '0');
	
	return value;
}