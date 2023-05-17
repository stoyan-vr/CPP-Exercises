#include <iostream>
using namespace std;

void locateLargest(const double a[][4], int location[])
{
	double max = a[0][0];
	for (int i = 0; i < 3; i++)
		for (int j = 1; j < 4; j++)
			if (a[i][j] > max)
			{
				max = a[i][j];
				location[0] = i;
				location[1] = j;
			}
}

int main()
{
	double a[3][4];
	cout << "Enter the array:\n";
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			cin >> a[i][j];
	
	int location[2];
	
	locateLargest(a, location);
	
	cout << "The location of the largest element is (" << location[0] 
	     << ", " << location[1] << ")" << endl;
			 
	return 0;
}