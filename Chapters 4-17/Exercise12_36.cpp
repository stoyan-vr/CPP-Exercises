#include <iostream>
#include <vector>

using namespace std;

void displayBoard(vector<vector<char> >&);

int main()
{
	vector<vector<char> > board(6);
	for (int i = 0; i < 6; i++)
		board[i] = vector<char>(3);
	do
	{
		displayBoard(board);
	}
	
	return 0;
}

void displayBoard(vector<vector<char> >& board)
{
	for (int i = 0; i < board.size(); i++)
	{
		for (int j = 0; j < board[i].size(); j++)
			cout << "|" << board[i][j];
		cout << "|" << endl;
	}
}