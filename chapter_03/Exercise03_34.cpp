#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the initial deposit amount: ";
	double amount;
	cin >> amount;
	cout << "Enter annual percentage yield: ";
	double annualInterestRate;
	cin >> annualInterestRate;
	cout << "Enter maturity period (number of months): ";
	double numberOfMonths;
	cin >> numberOfMonths;
	
	double monthlyInterestRate = annualInterestRate / 1200;
	
	cout << "Month CD Value" << endl;
	double currentValue = 
	for (int i = 0; i < numberOfMonths; i++)
		cout << 