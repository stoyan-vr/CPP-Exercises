#include <iostream>
#include <vector>

using namespace std;

// Function prototypes
bool isConsecutiveFour(const vector<vector<int> >&);

int main()
{
	cout << "Enter the number of rows and columns: ";
	int r, c;
	cin >> r >> c;
	
	vector<vector<int> > matrix(r);
	
	for (int i = 0; i < r; i++)
	{ 
    matrix[i] = vector<int>(c);
		for (int j = 0; j < c; j++)
			cin >> matrix[i][j];
	}
	
	cout << "Is Consecutive four? " << (isConsecutiveFour(matrix) ? "Yes" : "No") << endl;
	
	return 0;
}

bool isConsecutiveFour(const vector<vector<int> >& values)
{
	// Check rows
	for (int i = 0; i < values.size(); i++)
	{
		int count = 0;
		for (int j = 0; j < values[i].size() - 1; j++)
	  {
	    if (values[i][j] == values[i][j + 1])
				count++;
			else 
				count = 0;
			
			if (count >= 3)
				return true;
		}
	}
	
		// Check columns
	for (int i = 0; i < values[0].size(); i++)
	{
		int count = 0;
		for (int j = 0; j < values.size() - 1; j++)
	  {
	    if (values[j][i] == values[j + 1][i])
				count++;
			else 
				count = 0;
			
			if (count >= 3)
				return true;
		}
	}
	
	// Check diagonals
	for (int i = 0; i < values.size() - 3; i++)
	{
		for (int j = 0; j < values[i].size() - 3; j++)
		{
		  bool isEqual = true;
			for (int k = 1; k < 4; k++)
				if (values[i][j] != values[i + k][j + k])
				{
					isEqual = false;
					break;
				}
			if (isEqual)
				return true;
		}
	}
			
	for (int i = 0; i < values.size() - 3; i++)
	{
		for (int j = values[i].size(); j >= 3; j--)
		{
		  bool isEqual = true;
			for (int k = 1; k < 4; k++)
				if (values[i][j] != values[i + k][j - k])
				{
					isEqual = false;
					break;
				}
			if (isEqual)
				return true;
		}
	}
			
  return false;
}