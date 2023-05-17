#include <iostream>
using namespace std;

const int SIZE = 4;
double sumColumn(const double m[][SIZE], int rowSize, int columnIndex)
{
	double sum = 0;
	for (int i = 0; i < rowSize; i++)
		sum += m[i][columnIndex];
	
	return sum;
}

int main()
{
	double m[3][SIZE];
	cout << "Enter a 3-by-4 matrix row by row:\n";
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < SIZE; j++)
			cin >> m[i][j];
		
  for (int i = 0; i < SIZE; i++)
		cout << "Sum of the elements at colum " << i << 
	  " is " << sumColumn(m, 3, i) << endl;
		
	return 0;
}