#include <iostream>
using namespace std;

int main()
{
	double rent = 1000;
	for (int i = 0; i < 5; i++) 
	{
		rent *= 1.03;
		cout << rent << "\n";
	}
	
	cout << "The rent in five years is " << rent << endl;
	
	return 0;
}