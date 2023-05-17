#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Enter the first 12 digits of an ISBN-13 as a string: ";
	string s;
	getline(cin, s);
	
	if (s.size() != 12) 
	{
		cout << s << " is an invalid input" << endl;
		exit(1);
	}
	for (int i = 0; i < s.size(); i++) 
	{
		if (!isdigit(s[i]))
		{
			cout << s << " is an invalid input" << endl;
		  exit(2);
		}
	}
	
	int sum = 0;
	for (int i = 0; i < 12; i++) 
	{
		int d = s[i] - '0';
		if (i % 2 == 0)
			sum += d;
		else
			sum += 3 * d;
	}
	
	int checksum = 10 - sum % 10;
	
	cout << "The ISBN-13 is " << s << (checksum == 10 ? 0 : checksum) << endl;
	
	return 0;
}