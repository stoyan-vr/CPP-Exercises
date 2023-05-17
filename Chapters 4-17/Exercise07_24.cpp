#include <iostream>
using namespace std;

bool isConsecutiveFour(const int values[], int size)
{
	for (int i = 0; i < size - 3; i++)
	{
		bool found = true;
		for (int j = i + 1; j < i + 4; j++)
			if (values[i] != values[j])
			{
				found = false;
				break;
			}
		if (found)
			return true;
	}
	
	return false;
}

int main()
{
	const int MAX_SIZE = 80;
	int list[MAX_SIZE];
	
	cout << "Enter the number of values: ";
	int n;
	cin >> n;
	cout << "Enter the values: ";
	for (int i = 0; i < n; i++)
	  cin >> list[i];
	
	if (isConsecutiveFour(list, n))
		cout << "The list has consecutive fours" << endl;
	else
		cout << "The list has no consecutive fours" << endl;
	
	return 0;
}