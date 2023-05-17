#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a character: ";
	char ch;
	cin >> ch;
	
	cout << "The ASCII code for the character is " << static_cast<int>(ch) << endl;
	
	return 0;
}