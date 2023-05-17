#include <iostream>
#include <string> 
#include <ctime> // for time function
#include <cstdlib> // for rand and srand functions
using namespace std;

int main()
{
  srand(time(0));
  char ch1 = 'a' + rand() % ('Z' - 'A' + 1);
  char ch2 = 'a' + rand() % ('Z' - 'A' + 1);
  char ch3 = 'a' + rand() % ('Z' - 'A' + 1);
  char ch4 = 'a' + rand() % ('Z' - 'A' + 1);
  char ch5 = 'a' + rand() % ('Z' - 'A' + 1);
  char ch6 = 'a' + rand() % ('Z' - 'A' + 1);

  string s;
  s = s + ch1 + ch2 + ch3 + ch4 + ch5 + ch6;

  cout << s << endl;

  return 0;
}