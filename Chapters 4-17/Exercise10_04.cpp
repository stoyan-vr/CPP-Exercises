#include <iostream>
#include <string>
using namespace std;

string sort(string& s)
{
	for (int i = 0; i < s.length() - 1; i++)
	{
		int currentMin = s[i];
		int currentMinIndex = i;
		for (int j = i + 1; j < s.length(); j++)
		{
			if (currentMin > s[j])
			{
				currentMin = s[j];
				currentMinIndex = j;
			}
		}
		if (currentMinIndex != i)
		{
			s[currentMinIndex] = s[i];
			s[i] = currentMin;
		}
	}
	
	return s;
}

int main()
{
	cout << "Enter a string s: ";
	string s;
	getline(cin, s);
	
	cout << "The sorted string is " << sort(s) << endl;
	
	return 0;
}