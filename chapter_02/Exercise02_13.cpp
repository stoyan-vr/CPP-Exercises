#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the monthly saving amount: ";
	double amount;
	cin >> amount;
	
	double monthlyInterestRate = 5.0 / 1200;
	
	// After the first month
	double savingAmount = amount * (1 + monthlyInterestRate);
	
	// After the second month
	savingAmount = (amount + savingAmount) * (1 + monthlyInterestRate);
	
	// After the third month
	savingAmount = (amount + savingAmount) * (1 + monthlyInterestRate);
	
	// After the fourth month
	savingAmount = (amount + savingAmount) * (1 + monthlyInterestRate);
	
	// After the fifth month
	savingAmount = (amount + savingAmount) * (1 + monthlyInterestRate);
	
	// After the sixth month
	savingAmount = (amount + savingAmount) * (1 + monthlyInterestRate);
	
	cout << "After the sixth month, the account value is $" 
	  << savingAmount << endl;
		
	return 0;
}