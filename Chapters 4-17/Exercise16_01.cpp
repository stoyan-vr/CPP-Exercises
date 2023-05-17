#include <iostream>
#include <string>
#include <cctype>
#include <stdexcept>
using namespace std;

// Converts a hex number as a string to decimal
int hex2Dec(const string& hex);

// Converts a hex character to a decimal value
int hexCharToDecimal(char ch);

// Check if the hex string is valid
bool isValid(char);

int main()
{
  // Prompt the user to enter a hex number as a string
  cout << "Enter a hex number: ";
  string hex;
  cin >> hex;
  
	try 
	{
		int dec = hex2Dec(hex);
    cout << "The decimal value for hex number " << hex
      << " is " <<  dec << endl;
	}
	catch (invalid_argument& ex)
	{
		cout << ex.what() << endl;
	}
	
	cout << "Execution continues ..." << endl;

  return 0;
}

int hex2Dec(const string& hex)
{
  int decimalValue = 0;
  for (unsigned i = 0; i < hex.size(); i++)
	{
		if (!isValid(hex[i]))
			throw invalid_argument(hex + " is a not a hex string");
    decimalValue = decimalValue * 16 + hexCharToDecimal(hex[i]);
	}

  return decimalValue;
}

int hexCharToDecimal(char ch)
{
  ch = toupper(ch); // Change it to uppercase
  if (ch >= 'A' && ch <= 'F')
    return 10 + ch - 'A';
  else // ch is '0', '1', ..., or '9'
    return ch - '0';
}

bool isValid(char ch)
{
	return isdigit(ch) || toupper(ch) >= 'A' && toupper(ch) <= 'F';
}