#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	const int NUMBER_OF_CARDS = 52;
    
  // Pick a card
	srand(time(0));
  int number = rand() % NUMBER_OF_CARDS;

  cout << "The card you picked is ";
  if (number % 13 == 0)
    cout << "Ace of ";
  else if (number % 13 == 10)
    cout <<"Jack of ";
  else if (number % 13 == 11)
    cout << "Queen of ";
  else if (number % 13 == 12)
    cout <<"King of ";
  else
    cout << (number % 13) << " of ";

  if (number / 13 == 0)
    cout << "Clubs" << endl;
  else if (number / 13 == 1)
    cout << "Diamonds" << endl;
  else if (number / 13 == 2)
    cout << "Hearts" << endl;
  else if (number / 13 == 3)
   cout << "Spades" << endl;
 
  return 0;
}