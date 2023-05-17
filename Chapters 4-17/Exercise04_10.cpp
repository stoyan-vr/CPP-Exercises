#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a letter: ";
	char letter;
	cin >> letter;
	
	char ch = tolower(letter);
	
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		cout << letter << " is a vowel" << endl;
	else if (isalpha(ch))
		cout << letter << " is a consonant" << endl;
	else
		cout << letter << " is an invalid input" << endl;
	
	return 0;
}