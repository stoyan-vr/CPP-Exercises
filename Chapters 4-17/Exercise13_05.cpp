#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
using namespace std;

int main()
{
	cout << "Enter the year: ";
	string year;
	cin >> year;
	cout << "Enter the gender: ";
	char ch;
	cin >> ch;
	cout << "Enter the name: ";
	string name;
	cin >> name;
	
	string filename = "babynamesranking" + year + ".txt";
	
	ifstream input(filename.c_str());
	
	if (input.fail())
  {
		cout << "Error" << endl;
		return 0;
	}
	ofstream output("temp.txt");
	string s;
	int rank = 0;
	while (!input.eof())
	{
		getline(input, s, '\n');
		stringstream ss(s);
		string tokens[5];
		int i = 0;
		while (!ss.eof())
		{
			ss >> tokens[i++];
		}
		if (name == tokens[1] || name == tokens[3])
		{
			rank = atoi(tokens[0].c_str());
			break;
		}
	}
	
	input.close();
	
	if (rank == 0)
		cout << name << " is not ranked in year " << year << endl;
	else
		cout << name << " is ranked #" << rank << " in year " << year << endl;
	
	return 0;
}