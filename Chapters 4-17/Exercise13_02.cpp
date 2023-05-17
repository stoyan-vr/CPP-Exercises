#include <iostream>
#include <fstream>
using namespace std;

bool isVowel(char ch)
{
	return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main()
{
	ifstream input;
	input.open("Exercise13_1.txt");
	if (input.fail())
	{
		cout << "The file does not exist";
		return 0;
	}
	
	int count = 0;
	char ch = input.get();
	string s;
	while (!input.eof())
	{
		if (isVowel(ch))
		{
			s.append(1, ch);
		  count++;
		}
		ch = input.get();
	}
	
	input.close();
	
	cout << "The number of vowels is " << count << endl;
	cout << s << " " << s.length() << endl;
	
	return 0;
}