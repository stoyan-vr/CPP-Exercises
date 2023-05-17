#include <iostream>
#include <cmath>
#include <iomanip>
#include "Loan10_11.h"
using namespace std;

int main()
{
	// Enter yearly interest rate
	cout << "Enter yearly interest rate, for example 8.25: ";
	double annualInterestRate;
	cin >> annualInterestRate;
	
	// Obtain monthly interest rate
	double monthlyInterestRate = annualInterestRate / 1200;
	
	// Enter number of years
	cout << "Enter number of year as an integer, for example 5: ";
	int numberOfYears;
	cin >> numberOfYears;
	
	// Enter loan amount
	cout << "Enter loan amount, for example 120000.95: ";
	double loanAmount;
	cin >> loanAmount;
	
	// Calculate payment
	
	
	double monthlyPayment = Loan::getMonthlyPayment(annualInterestRate, numberOfYears, loanAmount);
	double totalPayment = Loan::getTotalPayment(annualInterestRate, numberOfYears, loanAmount);
	
	// Display results
	cout << "The monthly payment is " << fixed << setprecision(2) << monthlyPayment << endl <<
	  "The total payment is " << totalPayment << endl;
		
	return 0;
}