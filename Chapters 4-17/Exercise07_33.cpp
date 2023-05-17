#include <iostream>
#include <cstring>
using namespace std;

int isPalindrome(const char s[])
{
	for (int i = 0; i < strlen(s) / 2; i++)
    if (s[i] != s[strlen(s) - i - 1])
		  return -1;
  
	return strlen(s);
}

int main()
{
	cout << "Enter a string: ";
	char s[20];
	cin >> s;
	
	cout << s << " is " << (isPalindrome(s) <  0 ? "not " : "")
	     << "a palindrome" << endl;
			 
	return 0;
}