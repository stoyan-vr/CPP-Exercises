#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Enter a string: ";
	string s;
	getline(cin, s);
	
	for (int i = 0; i < s.length(); i++)
		if (s[i] == ' ')
			s[i] = '_';
		
	cout << s << endl;
	
	return 0;
}