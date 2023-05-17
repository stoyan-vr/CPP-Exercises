#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int getChecksum(const char s[])
{
	int sum = 0;
	for (int i = 0; i < 12; i++) 
	{
		int d = s[i] - '0';
		if (i % 2 == 0)
			sum += d;
		else
			sum += 3 * d;
	}
	
	return (10 - sum % 10) % 10;
}

int main()
{
	cout << "Enter the first 12 digits of an ISBN-13 as a string: ";
	char s[13];
	cin >> s;
	
	if (strlen(s) != 12)
	{
		cout << s << " is an invalid input" << endl;
		exit(1);
	}
	
	for (int i = 0; i < strlen(s); i++) 
	{
		if (!isdigit(s[i]))
		{
			cout << s << " is an invalid input" << endl;
		  exit(2);
		}
	}
	
	cout << "The ISBN-13 is " << s << getChecksum(s) << endl;
	
	return 0;
}