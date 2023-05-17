#include <iostream>
#include <cstring>
using namespace std;

int count(const char s[], char a)
{
	int count = 0;
  for (int i = 0; i < strlen(s); i++)
		if (s[i] == a)
			count++;
		
	return count;
}

int main()
{
	cout << "Enter a string: ";
	char s[80];
	cin.getline(s, 80);
	
	cout << "Enter a character: ";
	char ch;
	cin >> ch;
	
	cout << ch << " appears in " << s << " " << count(s, ch) << " times" << endl;
	
	return 0;
}