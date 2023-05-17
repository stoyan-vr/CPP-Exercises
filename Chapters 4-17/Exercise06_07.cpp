#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double futureInvestmentValue(double investmentAmount, 
  double monthlyInterestRate, int years) 
{
	return investmentAmount * pow(1 + monthlyInterestRate, years * 12);	
}

int main()
{
  cout << "The amount investd: ";
  double amount;
  cin >> amount;
  
  cout << "Annual interest rate: ";
	double annualInterestRate;
	cin >> annualInterestRate;
	
	cout << "Years\tFuture Value" << endl;
	for (int i = 1; i <= 30; i++) 
		cout << i << "\t" << fixed << setprecision(2) << 
	    futureInvestmentValue(amount, annualInterestRate / 1200, i) 
			<< endl;
			
	return 0;
}