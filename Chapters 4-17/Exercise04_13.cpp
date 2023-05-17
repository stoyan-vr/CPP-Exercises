#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a hex digit: ";
	char hex;
	cin >> hex;
	
	if (!isdigit(hex) && toupper(hex) < 'A' || toupper(hex) > 'F') {
		cout << hex << " is an invalid input" << endl;
		exit(1);
	}
	cout << "The binary value is ";
	switch (toupper(hex)) {
		case '0': cout << "0" << endl; break;
		case '1': cout << "1" << endl; break;
		case '2': cout << "10" << endl; break;
		case '3': cout << "11" << endl; break;
		case '4': cout << "100" << endl; break;
		case '5': cout << "101" << endl; break;
		case '6': cout << "110" << endl; break;
		case '7': cout << "111" << endl; break;
		case '8': cout << "1000" << endl; break;
		case '9': cout << "1001" << endl; break;
		case 'A': cout << "1010" << endl; break;
		case 'B': cout << "1011" << endl; break;
		case 'C': cout << "1100" << endl; break;
		case 'D': cout << "1101" << endl; break;
		case 'E': cout << "1110" << endl; break;
		case 'F': cout << "1111" << endl; break;
	}
	
	return 0;
}