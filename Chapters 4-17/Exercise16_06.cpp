#include <iostream>
#include <stdexcept>
using namespace std;

class BinaryFormatException: public runtime_error
{
public:
  BinaryFormatException(char ch)
	  : runtime_error("Invalid character")
	{
		this->ch = ch;
	}
	
	char getChar()
	{
		return ch;
	}
	
private:
 char ch;
};

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
	{
		if (binaryString[i] != '0' && binaryString[i] != '1')
			throw BinaryFormatException(binaryString[i]);
		decimalValue = decimalValue * 2 + (binaryString[i] - '0');
	}
	
	return dec2Octal(decimalValue);
}

int main()
{
	cout << "Enter a binary string: ";
	string binaryValue;
	cin >> binaryValue;
	
	try 
	{
		string octal = bin2Octal(binaryValue);
	  cout << "The octal representation is " << octal << endl;
	}
	catch (BinaryFormatException ex)
	{
		cout << ex.what() << " " << ex.getChar() << endl;
	}
	
	cout << "Execution continues..." << endl;
	
	return 0;
}