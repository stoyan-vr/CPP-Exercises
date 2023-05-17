#include <iostream>
#include <cstring>
using namespace std;

void count(const char s[], int counts[])
{
	for (int i = 0; i < 26; i++)
	  counts[i] = 0;
	for (int i = 0; i < strlen(s); i++)
		if (isalpha(s[i]))
		  counts[tolower(s[i]) - 'a']++;
}

int main()
{
	char s[40];
	cout << "Enter a string: ";
	cin.getline(s, 40);
	
	int counts[26];
	
	count(s, counts);
	
	for (int i = 0; i < 26; i++)
		if (counts[i] > 0)
		  cout << static_cast<char>('a' + i) << ": " << counts[i] << " times" << endl;
	
	return 0;
}