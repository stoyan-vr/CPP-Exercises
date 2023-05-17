#include <iostream>
using namespace std;

int main()
{
	int numbers[10];
	
	cout << "Enter ten numbers: ";
	int count = 0;
	for (int i = 0; i < 10; i++) {
		int n;
		cin >> n;
		bool inTheList = false;
		for (int j = 0; j < i; j++) 
	    if (numbers[j] == n) {
				inTheList = true;
	      break;
			}
		if (!inTheList) {
			numbers[count] = n;
			count++;
		}
	}
	
	cout << "The distinct numbers are:";
	for (int i = 0; i < count; i++)
		cout << " " << numbers[i];
	
	return 0;
}