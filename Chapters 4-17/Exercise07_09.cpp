#include <iostream>
using namespace std;

double min(double [], int);

int main()
{
	cout << "Enter ten numbers: ";
	const int SIZE = 10;
	double numbers[SIZE];
	for (int i = 0; i < SIZE; i++)
		cin >> numbers[i];
	
	cout << "The minimum number is " << min(numbers, SIZE) << endl;
	
	return 0;
}

double min(double array[], int size)
{
	double min = array[0];
	for (int i = 1; i < size; i++)
		if (array[i] < min)
			min = array[i];
		
	return min;
}