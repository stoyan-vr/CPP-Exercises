#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < i; j++)
			cout << "  ";
		for (int j = 0; j < 8 - i; j++)
			cout << static_cast<char>(j + 'a') << " ";
		for (int j = 8 - i; j > 0; j--)
			cout << static_cast<char>(j + 'a' - 1) << " ";
		cout << endl;
		
		return 0;
	}
}