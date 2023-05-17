#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string swapCase(const string& s)
{
	string result;
	for (int i = 0; i < s.length(); i++)
	  if (isupper(s[i]))
			result += tolower(s[i]);
		else
			result += toupper(s[i]);
		
	return result;
}

int main()
{
	cout << "Enter a string: ";
	string s;
	getline(cin, s);
	
	cout << "The new string is " << swapCase(s) << endl;
	
	return 0;
}