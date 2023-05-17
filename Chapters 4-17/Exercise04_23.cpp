#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Enter a SSN: ";
	string ssn;
	cin >> ssn;
	
	if (isdigit(ssn[0]) && isdigit(ssn[1]) && isdigit(ssn[2]) &&
	  ssn[3] == '-' && isdigit(ssn[4]) && isdigit(ssn[5]) &&
		ssn[6] == '-' && isdigit(ssn[7]) && isdigit(ssn[8]) && 
		isdigit(ssn[9]) && isdigit(ssn[10]))
	  cout << ssn << " is a valid social security number" << endl;
	else
		cout << ssn << " is an invalid social seurity number" << endl;
	
	return 0;
}