#include <iostream>
using namespace std;

int main()
{
	cout << "Enter an integer, the input ends if it is 0: ";
	int value;
	cin >> value;
	
	int countOfPositive = 0;
	int countOfNegative = 0;
	while (value != 0) {
		if (value % 2 == 0)
			countOfPositive++;
		else
			countOfNegative++;
		cin >> value;
	}
	
	cout << "The number of positives is " << countOfPositive << endl;
	cout << "The number of negatives is " << countOfNegative << endl;
	
	return 0;
}