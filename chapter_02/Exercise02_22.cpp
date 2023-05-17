#include <iostream>
using namespace std;

int main()
{
	cout << "Enter balance and interest rate (e.g., 3 for 3%): ";
	double balance, interestRate;
	cin >> balance >> interestRate;
	
	double interest = balance * (interestRate / 1200);
	
	cout << "The interest is " << interest << endl;
	
	return 0;
}