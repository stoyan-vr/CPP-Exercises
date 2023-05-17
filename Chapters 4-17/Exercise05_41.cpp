#include <iostream>
using namespace std;

int main()
{
	cout << "Enter numbers: ";
	int number;
	cin >> number;
	int max = number;
	int count = 1;
	while (number != 0) {
		cout << "Enter numbers: ";
		cin >> number;
		if (number > max) 
		{
			max = number;
			count = 1;
		}
		else if (number == max) 
			count++;
	}
	
	cout << "The largest number is " << max << endl;
	cout << "The occurrence count of the largest number is " << count << endl;
	
	return 0;
}