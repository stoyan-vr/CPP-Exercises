#include <iostream>
using namespace std;

void bubbleSort(int*, int);
void printArray(const int*, int);

int main()
{
	cout << "Enter the array size: ";
	int size;
	cin >> size;
	
	int* list = new int[size];
	
	cout << "Enter " << size << " integers: ";
	for (int i = 0; i < size; i++)
		cin >> *(list + i);
	
	bubbleSort(list, size);
	
	printArray(list, size);
	
	return 0;
}

void bubbleSort(int* list, int size)
{
	
	bool changed = true;
	
	do
	{
		changed = false;
		for (int i = 0; i < size - 1; i++)
			if (*(list + i) > *(list + i + 1))
			{
				int temp = *(list + i);
				*(list + i) = *(list + i + 1);
				*(list + i + 1) = temp;
				changed = true;
			}
	}
	while (changed);
}

void printArray(const int* list, int size)
{
  for (int i = 0; i < size; i++)
		cout << *(list + i) << " ";
}