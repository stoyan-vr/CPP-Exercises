#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a loan amount: ";
	int amount;
	cin >> amount;
	
	if (amount < 10000 || amount > 50000) {
		cout << "Loan cannot be provided" << endl;
	  return 0;
	}
	
	cout << "The interest rate is ";
	if (amount <= 20000)
		cout << "15";
	else if (amount <= 30000)
		cout << "13.5";
	else if (amount <= 40000)
		cout << "12.5";
	else
		cout << "11.0";
	
	cout << "%" << endl;
	
	return 0;
}