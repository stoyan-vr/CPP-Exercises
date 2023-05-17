#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void exploreMatrix(const int m[][4], int size)
{
	int count = 0;
	bool same = true;
	for (int i = 0; i < size; i++)
	{
		same = true;
		for (int j = 1; j < size; j++)
			if (m[i][j - 1] != m[i][j])
			{
				same = false;
				break;
			}
		if (same)
		{
			cout << "All " << m[i][0] << "'s on row " << i << endl;
			count++;
		}
	}
	if (count == 0)
		cout << "No same numbers on a row" << endl;
	
	count = 0;
	for (int i = 1; i < size; i++)
	{
		same = true;
		for (int j = 0; j < size; j++)
			if (m[j - 1][i] != m[j][i])
			{
				same = false;
				break;
			}
		if (same)
		{
			cout << "All " << m[0][i] << "'s on column " << i << endl;
			count++;
		}
	}
	if (count == 0)
		cout << "No same numbers on a column" << endl;	
  
	same = true;
  for (int i = 1; i < size; i++)
  {
    if (m[i - 1][i - 1] != m[i][i])
	  {
      same = false;
      break;
    }
  }
  if (same)
    cout << "All " << m[0][0] << "'s on the major diagonal" << endl;
  else
    cout << "No same numbers on the major diagonal" << endl;	
	
	same = true;
	for (int i = 1, j = size - 2; i < size; i++, j--)
	{
		if (m[i - 1][j + 1] != m[i][j])
		{
			same = false;
			break;
		}
	}	
	if (same)
		cout << "All " << m[0][3] << "'s on the sub-diagonal" << endl;
	else
		cout << "No same numbers on the sub-diagonal" << endl;
}

int main()
{
	const int SIZE = 4;
	int m[SIZE][SIZE];
	
	srand(time(0));
	
	for (int i = 0; i < SIZE * SIZE; i++)
		cout << (m[i / 4][i % 4] = rand() % 2) << 
	    ((i + 1) % 4 == 0 ? "\n" : "");
			
	exploreMatrix(m, SIZE);
	
	return 0;
}