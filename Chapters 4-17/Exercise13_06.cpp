#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

void printResult(const vector<string>&, const vector<string>&);

int main()
{
	cout << "Enter a file name for baby name ranking: ";	
	string filename;
	cin >> filename;
	
	ifstream input(filename.c_str());
	
	if (input.fail())
  {
		cout << "Error" << endl;
		return 0;
	}
	
	string s;
	vector<string> mNames;
	vector<string> fNames;
	while (!input.eof())
	{
		getline(input, s, '\n');
		stringstream ss(s);
		string token;
		int i = 0;
		while (!ss.eof())
		{
			ss >> token;
			if (i == 1)
				mNames.push_back(token);
			else if (i == 3)
				fNames.push_back(token);
			i++;
		}
	}
	
	input.close();
	
	printResult(mNames, fNames);
	
	return 0;
}
	
void printResult(const vector<string>& mNames, const vector<string>& fNames)
{
  int count = 0;
	vector<string> commonNames;
	for (int i = 0; i < mNames.size(); i++)
		for (int j = 0; j < fNames.size(); j++)
			if (mNames[i] == fNames[j])
			{
				commonNames.push_back(mNames[i]);
				count++;
				break;
			}
	if (count > 0)
	{
		cout << count << " names used for both genders" << endl;
	  cout << "They are ";
		for (int i = 0; i < commonNames.size(); i++)
			cout << commonNames[i] << ((i + 1) % 6 == 0 ? ",\n" : ", ");
	}
	else
		cout << "No common names found" << endl;
}