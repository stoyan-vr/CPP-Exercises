#include <iostream>
#include <fstream>
using namespace std;

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
	input.get();
	while (!input.eof())
	{
		count++;
		input.get();
	}
	
	input.close();
	
	cout << "The number of chars read: " << count << endl;
	
	return 0;
}