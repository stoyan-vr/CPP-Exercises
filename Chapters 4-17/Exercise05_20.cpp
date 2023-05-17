#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Pattern A\tPatttern B\t\tPattern C\tPattern D" << endl;
	for (int i = 1, k = -2; i <= 6; i++, k++) {
		for (int j = 1; j <= 6; j++) 
	    if (i == 1 || i == 6)
				cout << j;
			else if (j != 1 && j != 6)
				cout << " ";
			else 
				cout << j;
		cout << "\t\t";
		for (int j = 5; j > i && i < 6; j--)
			cout << "  ";
		for (int j = 1; j <= i * 2 - 1 && i < 6; j++)
			cout << j << " ";
		for (int j = 5; j > i && i < 6; j--)
			cout << "  ";
		cout << "\t";
	  for (int j = abs(k); j > 0; j--)
			cout << "  ";
		for (int j = 3 - abs(k); j > 0; j--)
			cout << " 3";
		cout << "\t\t";
		for (int j = 6; j > i; j--)
			cout << "  ";
		if (i == 6)
			for (int i = 0; i < 8; i++)
				cout << "  ";
		for (int j = 1; j <= i; j++)
			cout << " " << j;
		cout << endl;
	}
		
	return 0;
}