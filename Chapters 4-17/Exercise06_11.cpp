#include <iostream>
#include <iomanip>
using namespace std;

void printASCII(char ch1, char ch2, int numberPerLine)
{
	for (int i = ch1; i <= ch2; i++) 
		cout << static_cast<char>(i) << ((i - ch1 + 1) % numberPerLine == 0 ? "\n" : " ");
}

int main() 
{
	printASCII('a', 'm', 6);
	
	return 0;
}