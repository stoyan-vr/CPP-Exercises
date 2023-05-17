#include <iostream>
#include <cmath>
#include "SelectionSort.h"
using namespace std;

bool isEqual(const int list1[], const int list2[], int size)
{
	int temp1[size];
	int temp2[size];
	for (int i = 0; i < size; i++)
	{
		temp1[i] = list1[i];
		temp2[i] = list2[i];
	}
	
	selectionSort(temp1, size);
	selectionSort(temp2, size);
	
	for (int i = 0; i < size; i++)
		if (temp1[i] != temp2[i])
			return false;
	
	return true;
}

int main()
{
	const int MAX_SIZE = 20;
	int list1[MAX_SIZE];
	int list2[MAX_SIZE];
	
	cout << "Enter list1: ";
	int size1;
	cin >> size1;
	for (int i = 0; i < size1; i++)
		cin >> list1[i];
	
	cout << "Enter list2: ";
	int size2;
	cin >> size2;
	for (int i = 0; i < size2; i++)
		cin >> list2[i];
	
	cout << "The two lists are ";
	if (isEqual(list1, list2, min(size1, size2)))
		cout << "identical" << endl;
	else
		cout << "not identical" << endl;
	
	return 0;
}