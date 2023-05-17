#include <iostream>
using namespace std;

int indexOfLargestElement(double array[], int size)
{
	int index = 0;
	double max = array[0];
	for (int i = 1; i < size; i++)
		if (array[i] >= max)
		{
			max = array[i];
			index = i;
		}
		
	return index;
}

int main()
{
	const int SIZE = 15;
	double list[SIZE];
	
	cout << "Enter " << SIZE << " numbers: ";
	for (int i = 0; i < SIZE; i++)
		cin >> list[i];
	
	cout << "The index of the largest element is " 
	   << indexOfLargestElement(list, SIZE) << endl;
		 
	return 0;
}