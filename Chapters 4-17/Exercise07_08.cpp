#include <iostream>
using namespace std;

int product(const int array[], int size)
{
	int result = 1;
	for (int i = 0; i < size; i++)
		result *= array[i];
	
	return result;
}

double product(const double array[], int size)
{
	double result = 1;
	for (int i = 0; i < size; i++)
		result *= array[i];
	
	return result;
}

int main()
{
	cout << "Enter three numbers: ";
	double numbers[3];
	for (int i = 0; i < 3; i++)
		cin >> numbers[i];
	
	cout << "The product of the numbers is " << product(numbers, 3);
	
	return 0;
}