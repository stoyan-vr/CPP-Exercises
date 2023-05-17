#include <iostream>
#include <string>
using namespace std;

int countVowels(const string& s)
{
  int count = 0;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i'
		   || s[i] == 'o' || s[i] == 'u')
		  count++;
  }

  return count;
}

int main()
{
  cout << "Enter a string: ";
  string s;
  getline(cin, s);

  cout << "The number of vowels in " << s << " is " << countVowels(s) << endl;

  return 0;
}