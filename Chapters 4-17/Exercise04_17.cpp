#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Enter a string with five lowercase letters: ";
	string s;
	cin >> s;
	
	if (s.length() != 5)
    cout << "Incorect input" << endl;
  else if (s[0] == s[4] && s[1] == s[3])
    cout << s << " is a palindrome" << endl;
  else
    cout << s << " is not a palindrome" << endl;

  return 0;
}	