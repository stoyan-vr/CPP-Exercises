#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream input;
	input.open("Exercise13_3.txt");
	
	if (input.fail())
	{
		cout << "The file does not exist" << endl;
		return 0;
	}
	
	int number;
	int product = 1;
	int sum = 0;
	int count = 0;
	
	while (!input.eof())
	{
		input >> number;
		if (input.eof())
			break;
		cout << number << " ";
		sum += number;
		product *= number;
		count++;
	}
	
	cout << "\nsum = " << sum << ", product = " << product 
	   << ", average = " << (sum / count) << endl;
		 
  return 0;
}