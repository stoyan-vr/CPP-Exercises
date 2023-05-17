#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Enter the first string: ";
	string s1;
	getline(cin, s1);
	cout << "Enter the second string: ";
	string s2;
	getline(cin, s2);
	
	cout << "\"" << s1 << "\" length " << s1.length() << 
	  " last character " << s1.at(s1.length() - 1) << endl;
	cout << "\"" << s2 << "\" length " << s2.length() << 
	  " last character " << s2.at(s2.length() - 1) << endl;
		
	return 0;
}