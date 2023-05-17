#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Enter a string: ";
	string s;
	getline(cin, s);
	
	for (int i = 0; i < s.length() / 2; i++) {
		char ch = s[i];
		s[i] = s[s.length() - 1 - i];
		s[s.length() - 1 - i] = ch;
	}
	
	cout << "The reversed string is " << s << endl;
	
	return 0;
}