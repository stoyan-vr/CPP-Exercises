/* Find multiple solutions for the eight queens problem */
#include <iostream>
#include <fstream>
using namespace std;

int findPosition(int k, int queens[]);
bool isValid(int k, int j, int queens[]);
void printResult(int queens[]);
ofstream output;

int main()
{
	int count = 0; // How many solutions are found?

  // Queen positions
  int queens[8]; // queens are placed at (i, queens[i])

  for (int i = 0; i < 8; i++)
    queens[i] = -1; // -1 indicates that no queen is currently placed in the
                      // ith row
  queens[0] = 0; // Initially, place a queen at (0, 0) in the 0th row

  // k - 1 indicates the number of queens placed so far
  // We are looking for a position in the kth row to place a queen
  int k = 1;
  while (k >= 0) 
	{
	
    // Find a position to place a queen in the kth row
    int j = findPosition(k, queens);
    if (j < 0) 
		{
      queens[k] = -1;
      k--; // back track to the previous row
    } 
		else 
		{
      queens[k] = j;

      if (k == 7) 
			{
        count++; // One more solution found
        cout << "Solution " << count << endl;
        printResult(queens);
      }
			else 
			{
        k++;
      }
    }
  }
	
	cout << "How many solutions found? " << count << endl;

  return 0;
}

int findPosition(int k, int queens[])
{
  int start = queens[k] == -1 ? 0 : queens[k] + 1;

  for (int j = start; j < 8; j++)
  {
    if (isValid(k, j, queens))
      return j; // (k, j) is the place to put the queen now
  }

  return -1;
}

bool isValid(int k, int j, int queens[])
{
  // See if (k, j) is a possible position
  // Check jth column
  for (int i = 0; i < k; i++)
    if (queens[i] == j) return false;

  // Check major diagnol
  for (int row = k - 1, column = j - 1; row >= 0 && column >= 0; row--, column--)
    if (queens[row] == column) return false;

  // Check minor diagnol
  for (int row = k - 1, column = j + 1; row >= 0 && column <= 7; row--, column++)
    if (queens[row] == column) return false;

  return true; // valid
}

/** Print a two-dimensional board to display the queens */
void printResult(int queens[])
{
	output.open("Values_Iterations.txt", ios::app);
  for (int i = 0; i < 8; i++)
  {
		output << queens[i];
    for (int j = 0; j < queens[i]; j++)
      cout << "| ";
    cout << "|Q|";
    for (int j = queens[i] + 1; j < 8; j++)
      cout << " |";
    cout << endl;
	}
	output << endl;
	output.close();
}
