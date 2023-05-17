#include <iostream>
#include <string>
using namespace std;

// Return this number if it is a single digit, otherwise,
// return the sum of the two digits
int getDigit(int number)
{
	return number < 10 ? number : number / 10 + number % 10;
}

// Return sum of odd-place digits in the card number
int sumOfOddPlace(const string& cardNumber)
{
	int sum = 0;
	for (int i = cardNumber.size() - 1; i >= 0; i -= 2)
  {
		sum += (cardNumber[i] - '0');
	}
	return sum;
}

// Return true if substr is the prefix for cardNumber
bool startsWith(const string& cardNumber, const string& substr)
{
	if (substr.size() == 2)
		return substr[0] == cardNumber[0] && substr[1] == cardNumber[1];
	return substr[0] == cardNumber[0];
}

// Get the result from Step 2
int sumOfDoubleEvenPlace(const string& cardNumber)
{
	int sum = 0;
	for (int i = cardNumber.length() - 2; i >= 0; i -= 2)
		sum += getDigit((cardNumber[i] - '0') * 2);
	
	return sum;
}


// Return true if the card number is valid
bool isValid(const string& cardNumber)
{
	if (cardNumber.size() < 13 || cardNumber.size() > 16) 
		return false;
	
  if (!startsWith(cardNumber, "4") && !startsWith(cardNumber, "5") &&
	    !startsWith(cardNumber, "7") && !startsWith(cardNumber, "37"))
		return false;
		
	if ((sumOfDoubleEvenPlace(cardNumber) + sumOfOddPlace(cardNumber)) % 10 != 0) 
		return false;
	
	return true;
}

int main()
{
	cout << "Enter a credit card number as an integer: ";
	string cardNumber;
	cin >> cardNumber;
	
	cout << cardNumber << " is " << (isValid(cardNumber) ? "valid" : "invalid") << endl;
	
	return 0;
}