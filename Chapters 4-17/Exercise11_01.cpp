#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the size of the array: ";
	int size;
	cin >> size;
	
	int* list = new int[size];
	
	cout << "Enter " << size << " numbers ";
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		cin >> *(list + i);
		if (*(list + i) % 2 == 0)
	    count++;
	}
	
	cout << "Even number " << count << " Odd numbers " 
	  << (size - count) << endl;
	
	return 0;
}