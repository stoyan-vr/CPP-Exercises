#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a letter: ";
	char letter;
	cin >> letter;
	
	if (!isalpha(letter)) {
		cout << letter << " is an invalid input" << endl;
		exit(1);
	}
	
	char ch = toupper(letter);
	int n;
	if (ch == 'A' || ch == 'B' || ch == 'C')
		n = 2;
	else if (ch == 'D' || ch == 'E' || ch == 'F')
		n = 3;
	else if (ch == 'G' || ch == 'H' || ch == 'I')
		n = 4;
	else if (ch == 'J' || ch == 'K' || ch == 'L')
		n = 5;
	else if (ch == 'M' || ch == 'N' || ch == 'O')
		n = 6;
	else if (ch == 'P' || ch == 'Q' || ch == 'R' || ch == 'S')
		n = 7;
	else if (ch == 'T' || ch == 'U' || ch == 'V')
		n = 8;
	else
		n = 9;
	
	cout << "The corresponding number is " << n << endl;
	
	return 0;
}