#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Enter investment amount: ";
	double investmentAmount;
	cin >> investmentAmount;
	cout << "Enter annual interest rate in percentage: ";
	double annualInterestRate;
	cin >> annualInterestRate;
	cout << "Enter number of years: ";
	double numberOfYears;
	cin >> numberOfYears;
	
	double futureInvestmentValue = investmentAmount * 
	  pow(1 + annualInterestRate / 1200, numberOfYears * 12);
		
	cout << "Accumulated value is $" << futureInvestmentValue;
	
	return 0;
}