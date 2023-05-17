#include <iostream>
using namespace std;

string octalChar2Bin(const char& ch, const int& index)
{
	int i = ch - '0';
	string s;
	while (s.length() < 3)
	{ 
    if (index == 0 && i == 0)
			break;
		int r = i % 2;
		s = static_cast<char>('0' + r) + s;
	  i /= 2;
	}
	
	return s;
}	

string octal2Binary(const string& octal)
{
	string s;
	for (int i = 0; i < octal.length(); i++)
		s += octalChar2Bin(octal[i], i);
	
	return s;		
}

int main()
{
	cout << "Enter an octal number: ";
	string octal;
	cin >> octal;
	
	cout << "The binary value is " << octal2Binary(octal);
	
	return 0;
}