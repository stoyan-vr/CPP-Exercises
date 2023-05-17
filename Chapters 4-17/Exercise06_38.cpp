#include <iostream>
#include <string>
using namespace std;

string dec2Octal(int decimal)
{
	string result;
	while (decimal != 0)
	{
		int r = decimal % 8;
		result = static_cast<char>(r + '0') + result;
		decimal /= 8;
	}
	
	return result;
}
int main()
{
	cout << "Enter a decimal integer: ";
	int n;
	cin >> n;
	
	cout << "The octal equivalent is " << dec2Octal(n) << endl;
	
	return 0;
}