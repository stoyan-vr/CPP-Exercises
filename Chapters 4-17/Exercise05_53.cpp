#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	cout << "Enter a string: ";
	string s;
	getline(cin, s);
	
	int numberOfVowels = 0;
	int numberOfConsonants = 0;
	
	for (int i = 0; i < s.size(); i++) 
	{
		char ch = toupper(s[i]);
		if (ch == 'A' || ch == 'E' || ch == 'I' ||
		    ch == 'O' || ch == 'U')
			numberOfVowels++;
		else if (isalpha(ch))
			numberOfConsonants++;
	}
	
	cout << "The number of vowels is " << numberOfVowels << endl;
	cout << "The number of consonants is " << numberOfConsonants << endl;
	
	return 0;
}