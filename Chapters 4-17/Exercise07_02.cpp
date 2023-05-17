#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 6;
	int list[SIZE];
	
	cout << "Enter " << SIZE << " integers: ";
	for (int i = 0; i < SIZE; i++)
		cin >> list[i];
	
	int min = list[0], max = list[0];
	
	for (int i = 0; i < SIZE; i++) {
    if (list[i] > max)
      max = list[i];			
		if (list[i] < min)
			min = list[i];
	}
	
	cout << "The largest is " << max << " and the smallest is " << min << endl;
	
	return 0;
}