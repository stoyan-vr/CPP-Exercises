#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	cout << "Enter two characters: ";
	string s;
	cin >> s;
	
	if (s.length() != 2) {
		cout << "Invalid input" << endl;
		exit(1);
	}
	
	string s1;
	if (s[0] == 'M') 
		s1 = "Mathematics";
	else if (s[0] == 'C')
		s1 = "Computer Science";
	else if (s[0] == 'I')
		s1 = "Information Technology";
	else {
		cout << "Invalid major code" << endl;
	  exit(1);
	}
	
	string s2;
	
	if (s[1] == '1')
		s2 = "Freshman";
	else if (s[1] == '2')
		s2 = "Sophomore";
	else if (s[1] == '3')
		s2 = "Junior";
	else if (s[1] == '4')
		s2 = "Senior";
	else {
		cout << "Invalid status code" << endl;
		exit(2);
	}
	
	cout << s1 << " " << s2 << endl;
	
	return 0;
}