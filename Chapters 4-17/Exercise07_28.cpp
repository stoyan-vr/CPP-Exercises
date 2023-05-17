#include <iostream>
using namespace std;

int partition(int list[], int size)
{
	return 0;
}
int main()
{
	const int MAX_SIZE = 80;
	int list[MAX_SIZE];
	cout << "Enter a list: ";
	int size;
	cin >> size;
	for (int i = 0; i < size; i++)
		cin >> list[i];
	
	partition(list, size);
	
	cout << "After the partition, the list is: ";
	for (int i = 0; i < size; i++)
		cout << i << " ";
	
	return 0;
}