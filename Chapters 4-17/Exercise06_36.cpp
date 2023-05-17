#include <iostream>
#include <string>
using namespace std;

string format(int number, int width)
{
	string result;
	while (number != 0)
	{
		result = static_cast<char>(number % 10 + '0') + result;
		number /= 10;
	}
	
	while (width > result.size())
		result = "0" + result;
	
  return result;
}

int main()
{
	cout << "Enter a number and width: ";
	int number, width;
	cin >> number >> width;
	
	cout << format(number, width) << endl;
	
	return 0;
}