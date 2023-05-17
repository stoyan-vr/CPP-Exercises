#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	cout << "Enter data: ";
	string s;
	getline(cin, s);
	
	fstream binaryio("Exercise13_13.dat", ios::out | ios::binary);
	binaryio.write(s.c_str(), s.size());
	
	binaryio.close();
	
	binaryio.open("Exercise13_13.dat", ios::in | ios::binary);
	
	char chars[100];
	binaryio.read(chars, 100);
	chars[binaryio.gcount()] = '\0';
	
	cout << chars << endl;
	
	binaryio.close();
	
	return 0;
}