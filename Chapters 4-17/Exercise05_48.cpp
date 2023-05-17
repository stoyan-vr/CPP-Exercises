#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Enter a string: ";
	string s;
	getline(cin, s);
	
	int count = 0;
	for (int i = 0; i < s.length(); i++)
		if (isupper(s[i]))
			count++;
		
	cout << "The number of uppercase letters is " << count << endl;
	
	return 0;
}