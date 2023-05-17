#include <iostream>
#include <string>
using namespace std;

bool isAnagrams(const string& s1, const string& s2)
{
	if (s1.length() != s2.length())
    return false;
  
  string temp = s2;
  for (int i = 0; i < s1.length(); i++)
	{
		int index = temp.find(s1[i]);
    if (index != string::npos)	
      temp.erase(index, 1);
    else
      return false;
  }
  
  return true;	
}

int main()
{
	string s1;
	cout << "Enter a string s1: ";
	getline(cin, s1);
	
	string s2;
	cout << "Enter a string s2: ";
	getline(cin, s2);
	
	//cout << s1 << " and " << s2 << " are ";
	if (isAnagrams(s1, s2))
		cout << "anagrams" << endl;
	else
		cout << "not anagrams" << endl;
	
	return 0;
}