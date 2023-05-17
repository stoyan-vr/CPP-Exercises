#include <iostream>
using namespace std;

void bubbleSort(double list[], int size)
{
	bool changed = true;
	do 
	{
		changed = false;
		for (int i = 0; i < size - 1; i++)
			if (list[i] > list[i + 1])
			{
				double temp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = temp;
				changed = true;
			}
	}
	while (changed);
}

int main()
{
	const int SIZE = 10;
	double list[SIZE];
	
	cout << "Enter ten number: ";
	for (int i = 0; i < SIZE; i++)
		cin >> list[i];
	
	bubbleSort(list, SIZE);
	
	cout << "The numbers sortd: ";
	for (int i = 0; i < SIZE; i++)
		cout << list[i] << " ";
	
	return 0;
}