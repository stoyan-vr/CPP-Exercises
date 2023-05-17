#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

vector<string> names;

bool isDuplicate(string name)
{
	for (int i = 0; i < names.size(); i++)
		if (names[i] == name)
			return true;
		
	return false;
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
			string dummy;
			input >> dummy;
      string name;
			input >> name;
			if (!isDuplicate(name))
				names.push_back(name);
			input >> dummy;
			input >> name;
			if (!isDuplicate(name))
				names.push_back(name);
			input >> dummy;
    }

    input.close();
  }
}

template<typename T>
void sort(vector<T>& list)
{
  for (int i = 0; i < list.size(); i++) 
  {
    // Find the minimum in the list[i..listSize-1]
    T currentMin = list[i];
    int currentMinIndex = i;

    for (int j = i + 1; j < list.size(); j++) 
    {
      if (currentMin > list[j]) 
      {
        currentMin = list[j];
        currentMinIndex = j;
      }
    }

    // Swap list[i] with list[currentMinIndex] if necessary;
    if (currentMinIndex != i) 
    {
      list[currentMinIndex] = list[i];
      list[i] = currentMin;
    }
  }
}

void writeNames() 
{
  string filename = "BabynamesSortedWithoutDuplicates.txt";
  ofstream output(filename.c_str());

  for (int i = 1; i <= names.size(); i++) 
  {
    if (i % 10 == 0)
      output << names[i - 1] << endl; 
    else
      output << names[i - 1] << " "; 
  }
}

int main()
{
  readNames();
  sort(names); // This may take a long time to sort
  writeNames();

  return 0;
}
