#include <iostream>
#include <cstring>
using namespace std;

void swapCase(const char s1[], char s2[])
{
	size_t i = 0;
	for ( ; i < strlen(s1); i++)
		s2[i] = isupper(s1[i]) ? tolower(s1[i]) : toupper(s1[i]); 
	s2[i] = '\0';
}

int main()
{
	cout << "Enter a string: ";
	char s1[80];
	char s2[80];
	cin.getline(s1, 80);
	
	swapCase(s1, s2);
	
	cout << "The new string is " << s2 << endl;
	
	return 0;
}