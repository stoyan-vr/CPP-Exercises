#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double computeTax(int status, double taxableIncome)
{
	switch (status)
	{
		case 0: return 8350 * 0.1 + (33950 - 8350) * 0.15 + (taxableIncome - 33950) * 0.25; 
		case 1: return 16700 * 0.1 + (taxableIncome - 16700) * 0.15;
		case 2: return 8350 * 0.1 + (33950 - 8350) * 0.15 + (taxableIncome - 33950) * 0.25;
		case 3: return 11950 * 0.1 + (45500 - 11950) * 0.15 + (taxableIncome - 45500) * 0.25;
	}
}

int main()
{
  cout << left << setw(10) << "Taxable" << setw(10) << "Single" << setw(10) << "Married" << setw(10) << "Married"
       << setw(10) << "Head of" << endl;
  cout << setw(10) << "Income" << setw(10) << "Single" << setw(10) << "Joint" << setw(10) << "Separate"
       << setw(10) << "a House" << endl;
  for (int taxableIncome = 50000; taxableIncome <= 60000; taxableIncome += 50)
  {
    cout << left << setw(10) << taxableIncome << setw(10) << ceil(computeTax(0, taxableIncome)) << setw(10)
         << ceil(computeTax(1, taxableIncome)) << setw(10) << ceil(computeTax(2, taxableIncome)) << setw(10)
         << ceil(computeTax(3, taxableIncome)) << endl;
  }

  return 0;
}