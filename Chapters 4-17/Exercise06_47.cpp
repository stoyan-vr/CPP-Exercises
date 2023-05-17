#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int getNumber(char upperCaseLetter)
{
	if (upperCaseLetter == 'S')
		return 7;
	else if (upperCaseLetter == 'T' || upperCaseLetter == 'U'
      	|| upperCaseLetter == 'V')
		return 8;
	else if (upperCaseLetter == 'W' || upperCaseLetter == 'X'
      	|| upperCaseLetter == 'Y' || upperCaseLetter == 'Z')
		return 9;
	else
	  return (upperCaseLetter - 'A') / 3 + 2;
}

int main()
{
	cout << "Enter a string: ";
	string s;
	cin >> s;
	
	for (int i = 0; i < s.length(); i++)
		if (isalpha(s.at(i)))
			cout << getNumber(toupper(s.at(i)));
		else
			cout << s.at(i);
	
	return 0;
}