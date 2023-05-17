#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int getEndPos(const string& s, int index)
{
	return min(s.find("TAG", index), min(s.find("TAA", index), s.find("TGA", index)));
}

bool isValid(const string& s)
{
	return s.length() != 0 && s.length() % 3 == 0 && s.find("TAG") == string::npos &&
	   s.find("TAA") == string::npos && s.find("TGA") == string::npos;
}

int main()
{
	string s;
	cout << "Enter a genome string: ";
	cin >> s;
	
	int count = 0;
	int start = 0;
	while (true)
	{
		int pos1 = s.find("ATG", start);
		if (pos1 != string::npos)
			pos1 = pos1 + 3;
		else
			break;
		int pos2 = getEndPos(s, start);
		if (pos2 != string::npos)
			start = pos2 + 3;
		else 
			break;
		string gene = s.substr(pos1, pos2 - pos1);
		if (isValid(gene))
		{
			cout << gene << endl;
			count++;
		}
	}
	if (count == 0)
		cout << "no gene is found" << endl;
	
	return 0;
}