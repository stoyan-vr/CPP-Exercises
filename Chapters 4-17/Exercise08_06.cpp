#include <iostream>
using namespace std;

double computeTax(int, double);

int main()
{
	cout << "(0-single filer, 1-married jointly or qualifying widow(er),\n"
       << "2-married separately, 3-head of household)\n"
       << "Enter the filing status: ";
	int status;
	cin >> status;
  cout << "Enter the taxable income: ";
	double income;
	cin >> income;
	
	cout << "Tax is " << computeTax(status, income) << endl;
	
	return 0;
}

double computeTax(int status, double income)
{
	double rates[] = {0.10, 0.15, 0.25, 0.28, 0.33, 0.36};
	int brackets[4][5] =
     {{8350, 33950, 82250, 171550, 372950},  // Single filer
      {16700, 67900, 137050, 20885, 372950}, // Married jointly
                                             // or qualifying
                                             // widow(er)
      {8350, 33950, 68525, 104425, 186475},  // Married separately
      {11950, 45500, 117450, 190200, 372950} // Head of household
     };
	double tax = 0; // tax to be computed
	
	if (income <= brackets[status][0])
		return income * rates[0];
	else
		tax = brackets[status][0] * rates[0];
	
	for (int i = 1; i < 5; i++)
	{
		if (income <= brackets[status][i])
			return (income - brackets[status][i - 1]) * rates[i] + tax;
		else
			tax += (brackets[status][i] - brackets[status][i - 1]) * rates[i];
	}
	
	if (income > brackets[status][4])
		tax += (income - brackets[status][4]) * rates[5];
	
	return tax;
}