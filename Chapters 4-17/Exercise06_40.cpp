#include <iostream>
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

string bin2Octal(const string& binaryString)
{
	int decimalValue = 0;
	for (int i = 0; i < binaryString.length(); i++)
		decimalValue = decimalValue * 2 + (binaryString[i] - '0');
	
	return dec2Octal(decimalValue);
}

int main()
{
	cout << "Enter a binary string: ";
	string binaryValue;
	cin >> binaryValue;
	
	cout << "The octal representation is " << bin2Octal(binaryValue) << endl;
	
	return 0;
}