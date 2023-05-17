#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "Enter an amount: ";
	double amount;
	cin >> amount;
	cout << "Enter the annual interest rate: ";
	double annualInterestRate;
	cin >> annualInterestRate;
	cout << "Enter the number of months: ";
	int months;
	cin >> months;
	
	double monthlyInterestRate = annualInterestRate / 1200;
	
	double currentValue = 0;
	for (int i = 0; i < months; i++) 
		currentValue = (amount + currentValue) * (1 + monthlyInterestRate);
	
	cout << "After " << months << " the value is " 
	  << fixed << setprecision(2) << currentValue << endl;
	
	return 0;
}