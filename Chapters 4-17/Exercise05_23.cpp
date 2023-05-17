#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	cout << "Loan Amount: ";
	double amount;
	cin >> amount;
	cout << "Number of Years: ";
	int numberOfYears;
	cin >> numberOfYears;
 
	cout << "Interest Rate\tMonthly Payment\tTotal Payemnt" << endl;
	for (double interestRate = 5; interestRate <= 8; interestRate += 0.125) {
		double monthlyInterestRate = interestRate / 1200;
	  double monthlyPayment = amount * monthlyInterestRate / 
	    (1 - 1 / pow(1 + monthlyInterestRate, numberOfYears * 12));
	  double totalPayment = monthlyPayment * numberOfYears * 12;
		cout << fixed << setprecision(3) << setw(13) << left << interestRate << "\t" << setprecision(2) << setw(10) <<
  		monthlyPayment << "\t" << totalPayment << endl;
	}
	
	return 0;
}