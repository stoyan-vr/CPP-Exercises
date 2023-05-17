#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int array[6];
	for (int i = 0; i < 6; i++)
		array[i] = 0;
	srand(time(0));
	
	for (int i = 0; i < 10000; i++)
	  array[rand() % 6]++;
	
	for (int i = 0; i < 6; i++)
		cout << (i + 1) << ": " << array[i] << " times" << endl;;
	
	return 0;
}