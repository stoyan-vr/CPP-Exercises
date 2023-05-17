#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	// Open a file
	ifstream input("numbers.txt");
	
	double sum = 0;
	double product = 1;
	int count = 0;
	double number;
	
	while (!input.eof()) 
	{
		input >> number;
		sum += number;
		product *= number;
		count++;
	}
	
	input.close();
	
	cout << "The sum of the numbers is " << sum << endl;
	cout << "The product is " << product << endl;
	cout << "The average is " << sum / count << endl;
	
	return 0;
}