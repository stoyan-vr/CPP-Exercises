#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& s)
{
	for (int i = 0; i < s.length() / 2; i++) 
		if (tolower(s[i]) != tolower(s[s.length() - i - 1]))
			return false;
		
	return true;
}

int main()
{
	cout << "Enter a string s: ";
	string s;
	cin >> s;

	cout << s  << " is " << (isPalindrome(s) ? "" : "not ") 
	     << "a palindrome" << endl;
			 
  return 0;
}