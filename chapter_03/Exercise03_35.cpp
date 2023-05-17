#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the first 9 digits of an ISBN as an integer: ";
	int isbn;
	cin >> isbn;
	
	int n = isbn;
	
	int d9 = n % 10;
	n /= 10;
	int d8 = n % 10;
	n /= 10;
	int d7 = n % 10;
	n /= 10;
	int d6 = n % 10;
	n /= 10;
	int d5 = n % 10;
	n /= 10;
	int d4 = n % 10;
	n /= 10;
	int d3 = n % 10;
	n /= 10;
	int d2 = n % 10;
	n /= 10;
	int d1 = n;
	
	int checksum = (d1 + d2 * 2 + d3 * 3 + d4 * 4 + d5 * 5 + d6 * 6 + d7 * 7 + d8 * 8 + d9 * 9) % 11;
	cout << d1 << d2 << d3 << d4 << d5 << d6 << d7 << d8 << d9 << endl;
	
	if (checksum == 10)
		cout << "X" << endl;
	else
		cout << checksum << "" << endl;
	
	cout << (checksum == 10 ? "X" : checksum + "") << endl;
	
	return 0;
}