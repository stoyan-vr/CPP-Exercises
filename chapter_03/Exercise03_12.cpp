#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
  // Obtain the random number 0 or 1
  srand(time(0));
  int number = rand() % 2;

  // Prompt the user to enter a guess
  cout << "Enter your guess 0 or 1: ";
  int guess;
  cin >> guess;

  // Check the guess
  if (guess == number)
    cout << "Correct guess" << endl;
  else if (number == 0)
    cout << "Sorry, the number is 0" << endl;
  else
    cout << "Sorry, the number is 1" << endl;

  return 0;
}
