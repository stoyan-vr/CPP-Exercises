#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <cmath>
using namespace std;

vector<string> boyNames;
vector<string> girlNames;
vector<int> boyNamesTotal;
vector<int> girlNamesTotal;

int parseInt(string s)
{
	int index = s.find(',');
	if (index != -1)
		s = s.substr(0, index) + s.substr(index + 1);
	
	return atoi(s.c_str());
}

void updateValues(const string& name, string value, 
              vector<string>& names, vector<int>& values)
{
	bool found = false;
	for (int i = 0; i < names.size(); i++)
		if (names[i] == name)
	  {
			values[i] += parseInt(value);
			found = true;
			break;
		}
	if (!found)
	{
		names.push_back(name);
		values.push_back(parseInt(value));
	}		
}

void readNames() 
{
  for (int i = 1; i <= 10; i++) 
  {
		string filename("babynamesranking200");
	  if (i == 10)
			filename = filename.substr(0, filename.size() - 1) + "10";
		else
			filename.append(1, static_cast<char>('0' + i));
		filename.append(".txt");
		ifstream input(filename.c_str());
		
		if (input.fail())
		{
			cout << "Error" << endl;
			exit(1);
		}
 
    while (!input.eof()) 
    {
			int dummy;
      input >> dummy;
			string name;
			input >> name;
			string count;
			input >> count;
			updateValues(name, count, boyNames, boyNamesTotal);
			input >> name;
			input >> count;
			updateValues(name, count, girlNames, girlNamesTotal);
    }

    input.close();
  }
}

void sort(vector<string>& names, vector<int>& values)
{
	for (int i = 0; i < values.size() - 1; i++)
	{
		int currentMax = values[i];
		int currentMaxIndex = i;
		
		for (int j = i + 1; j < values.size(); j++)
		  if (values[j] > currentMax)
			{
				currentMax = values[j];
				currentMaxIndex = j;
			}
		if (currentMaxIndex != i)
		{
		  values[currentMaxIndex] = values[i];
			values[i] = currentMax;
			string temp = names[i];
			names[i] = names[currentMaxIndex];
			names[currentMaxIndex] = temp;
		}		
	}
}

void printNames()
{
	int i = 0;
	int minSize = min(boyNames.size(), girlNames.size());
	while (i < minSize)
	{
		cout << (i + 1) << " " << boyNames[i] << " " << boyNamesTotal[i] << " "
		                << " " << girlNames[i] << " " << girlNamesTotal[i] << endl;
		i++;
	}
	
	while (i < boyNames.size())
	{
		cout << (i + 1) << boyNames[i] << " " << boyNamesTotal[i] << endl;
		i++;
	}
	
	while (i < girlNames.size())
	{
		cout << (i + 1) << "                         " << 
		girlNames[i] << " " << girlNamesTotal[i] << endl;
		i++;
	}
}

int main()
{
  readNames();
	sort(boyNames, boyNamesTotal);
	sort(girlNames, girlNamesTotal);
	printNames();
  return 0;
}
