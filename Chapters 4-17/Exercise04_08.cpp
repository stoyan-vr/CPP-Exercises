#include <iostream>
using namespace std;

int main()
{
	cout << "Enter an ASCII code: ";
	int value;
	cin >> value;
	
	cout << "The character is " << static_cast<char>(value) << endl;
	
	return 0;
}