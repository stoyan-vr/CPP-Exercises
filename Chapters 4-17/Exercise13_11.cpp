#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream input("SortedStrings.txt");
	
	string s1;
	string s2;
	input >> s2;
	while (!input.fail())
	{
		s1 = s2;
	  input >> s2;
		if (s1 > s2)
		{
			cout << s1 << " and " << s2 << " are out of order" << endl;
			break;
		}
	}
	
	return 0;
}