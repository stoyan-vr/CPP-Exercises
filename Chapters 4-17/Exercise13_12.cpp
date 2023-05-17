#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

string intToString(int value)
{
	if (value == 10)
		return "10";
	string s("0");
	return s.append(1, static_cast<char>('0' + value));
}

void printNames(const string& filename, int pos)
{
	ifstream input(filename.c_str());
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
		{
			string token;
			input >> token;
			if (j == pos)
				cout << left << setw(12) << token;
		}
}

int main()
{
	cout << "Year ";
	for (int i = 0; i < 10; i++)
		cout << "Rank " << (i % 5 + 1) << "      ";
	cout << endl;
	for (int i = 10; i > 0; i--)
	{
		cout << (2000 + i) << " ";
		string filename = "babynamesranking20" + intToString(i) + ".txt";
		printNames(filename, 3);
		printNames(filename, 1);
		cout << endl;
	}
	
	return 0;
}