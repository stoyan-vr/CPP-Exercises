#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Enter s1: ";
	string s1;
	getline(cin, s1);
	cout << "Enter s2: ";
	string s2;
	getline(cin, s2);
	
	string prefix = "";
	int index = 0;
	while (s1[index] == s2[index])
		prefix += s1[index++];
	
	if (index > 0)
	  cout << "The common prefix is " << prefix << endl;
	else 
		cout << s1 << " and " << s2 << " have no common prefix" << endl;
	
	return 0;
}