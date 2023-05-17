#include <iostream>
#include <cmath>
using namespace std;

// Compute the mean of an array of double values
double mean(const double x[], int size)
{
	double sum = 0; 
	for (int i = 0; i < size; i++)
		sum += x[i];
	
	return sum / 10;
}

// Compute the deviation of double values
double deviation(const double x[], int size)
{
	double sum = 0;
	for (int i = 0; i < size; i++)
		sum += pow(x[i] - mean(x, size), 2);
	
	return sqrt(sum / (size - 1));
}

int main()
{
	const int SIZE = 10;
	double numbers[SIZE];
	cout << "Enter ten number: ";
	for (int i = 0; i < SIZE; i++)
	  cin >> numbers[i];
	
	cout << "The mean is " << mean(numbers, SIZE) << endl;
	cout << "The standard deviation is " << deviation(numbers, SIZE) << endl;
	
	return 0;
}