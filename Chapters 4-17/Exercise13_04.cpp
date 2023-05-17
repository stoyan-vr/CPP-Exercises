#include <iostream>
#include <fstream>
#include <algorithm>
#include <ctime>
using namespace std;

int main()
{
  ifstream input;

  // Open a file
  input.open("Exercise13_4.txt");
	
	int numbers[20];
  int i = 0;
  while (input >> numbers[i])
		cout << numbers[i++] << " ";
  
  input.close();

  sort(numbers, numbers + 20);
  
	ofstream output;
  output.open("Exercise13_4.txt");
  for (int i = 0; i < 20; i++)
    output << numbers[i] << " ";

  output.close();
  cout << "Done" << endl; 

  return 0;
}
