#include <iostream>
#include <cstring>
using namespace std;

int countLetters(const char s[])
{
	int count = 0;
	for (int i = 0; i < strlen(s); i++)
		if (isalpha(s[i]))
			count++;
		
	return count;
}

int main()
{
	cout << "Enter a string: ";
	char s[80];
	cin.getline(s, 80);
	
	cout << "The number of letters in " << s << " is " << countLetters(s);
	
	return 0;
}