#include <iostream>
using namespace std;

int main()
{
	for (int i = 'A'; i <= 'Z'; i++)
		cout << static_cast<char>(i) << ((i - 'A' + 1) % 5 == 0 ? "\n" : " ");
	
	return 0;
}