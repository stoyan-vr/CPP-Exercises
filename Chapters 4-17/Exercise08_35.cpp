#include <iostream>
using namespace std;

int main()
{
	int m[6][6];
	cout << "Enter a 6-by-6 matrix row by row\n";
	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 6; j++)
			cin >> m[i][j];
	bool rFound = false;
  bool cFound = false;
  int rowIndex = -1;
  int colIndex = -1;	
	for (int i = 0; i < 6; i++)
	{
		int sumRow = 0;
		int sumCol = 0;
		for (int j = 0; j < 6; j++)
		{
			sumRow += m[i][j];
			sumCol += m[j][i];
		}
		if (sumRow % 2 != 0 && !rFound)
		{
			rowIndex = i;
			rFound = true;
		}
		if (sumCol % 2 != 0 && !cFound)
		{
			colIndex = i;
		  cFound = true;
		}
	}
	
	cout << "The first row and column where the parity is violated is at (" 
	  << rowIndex << ", " << colIndex << ")" << endl;
	
	return 0;
}