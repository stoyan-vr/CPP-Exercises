#include <iostream>
#include <cstring>
using namespace std;

string longest(const char s1[], const char s2[], char longestString[])
{
  if (strlen(s1) > strlen(s2))
		strcpy(longestString, s1);
	else
		strcpy(longestString, s2);
	
	return longestString;
}

int main()
{
	cout << "Enter the first string: ";
	char s1[80];
	cin.getline(s1, 80);
	
	cout << "Enter the second string: ";
	char s2[80];
	cin.getline(s2, 80);
	
	char longestString[80];
	
	cout << "The longest string is " << longest(s1, s2, longestString);
	
	return 0;
}