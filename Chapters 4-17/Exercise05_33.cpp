#include <iostream>
#include <iomanip>
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

	for (int i = 0; i < numberOfMonths; i++) 
	{
		amount += amount * monthlyInterestRate;
		cout << left << setw(6) << (i + 1) << fixed << setprecision(2) << amount << endl;
	}
	
	return 0;
}