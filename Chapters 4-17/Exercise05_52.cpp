#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Enter a string: ";
	string s;
	getline(cin, s);
	
	for (int i = 1; i < s.length(); i += 2)
	  cout << s.at(i);
		
	return 0;
}