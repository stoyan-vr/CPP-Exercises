#include <iostream>
#include <string>
using namespace std;

void search(string& s, char& key)
{
	bool found = false;
	int i;
	for (i; i < s.size(); i++)
		if (s[i] == key) {
			found = true;
			break;
		}
		
	if (found)
		cout << key << " is found at index " << i << endl;
	else
		cout << key << " was not found in string " << s << endl;
}

int main()
{
	cout << "Enter a string: ";
	string s;
	getline(cin, s);
	
	cout << "Enter a character: ";
	char ch;
	cin >> ch;
	
	search(s, ch);
	
	return 0;
}