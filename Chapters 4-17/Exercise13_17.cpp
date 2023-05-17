#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

string intToStr(int n)
{
	stringstream ss;
	ss << n;
	
	return ss.str();
}

int main()
{
	cout << "Enter a source file name: ";
	string inputFileName;
	cin >> inputFileName;
	cout << "Enter the number of bytes in each smaller file: ";
	int n;
	cin >> n;
	
	ifstream input(inputFileName.c_str(), ios::binary);
	if (input.fail())
	{
		cout << inputFileName << " does not exist" << endl;
		return 0;
	}
	int count = 0;
	char chars[1024];
	int bytes = 0;
	ofstream output;
	while (!input.eof())
	{
		if (bytes >= n || bytes == 0)
		{
			bytes = 0;
			output.close();
		  string outputFileName(inputFileName);
		  outputFileName.append(1, '.');
		  outputFileName.append(intToStr(count));
		  output.open(outputFileName.c_str(), ios::binary);
			cout << "File D:\\C++\\" << outputFileName << " produced" << endl;
		  count++;
		}
	  input.read(chars, n - bytes > 1024 ? 1024 : n - bytes);
		output.write(chars, input.gcount());
		bytes += input.gcount();
	}
	
	input.close();
	
	cout << "Done" << endl;
	
	return 0;
}