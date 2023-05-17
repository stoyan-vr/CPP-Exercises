#include <iostream>
#include <fstream>
#include "Loan.h"
using namespace std;

int main()
{
	fstream binaryInput("Exercise13_14.dat", ios::in | ios::binary);
	
	if (binaryInput.fail())
	{
		cout << "The file does not exist" << endl;
		return 0;
	}
	
	double total = 0;
	Loan loan;
	while (binaryInput.read(reinterpret_cast<char*>(&loan), sizeof(Loan)))
	{
		cout << loan.getLoanAmount() << endl;
		total += loan.getLoanAmount();
	}
	
	cout << "The total amount is " << total << endl;
	
	return 0;
}