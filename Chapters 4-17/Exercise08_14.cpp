#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int m[6][6];
	srand(time(0));
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
			cout << (m[i][j] = rand() % 2) << " ";
		cout << endl;
	}
	
	int minRowIndex = 0;
	int minColIndex = 0;
	int minSumRow = 6;
	int minSumCol = 6;
	for (int i = 0; i < 6; i++)
  {
		int sumRow = 0;
		int sumCol = 0;
	  for (int j = 0; j < 6; j++)
	  {
			sumRow += m[i][j];
			sumCol += m[j][i];
		}
		if (sumRow < minSumRow)
		{
			minSumRow = sumRow;
			minRowIndex = i;
		}
		if (sumCol < minSumCol)
		{
			minSumCol = sumCol;
			minColIndex = i;
		}
	}
	
	cout << "The smallest row's index: " << minRowIndex << endl;
	cout << "The smallest column's index: " << minColIndex << endl;
	
	return 0;
}