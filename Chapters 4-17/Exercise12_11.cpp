#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
  const int NUMBER_OF_CARDS = 52;
  string suits[] = {"Clubs", "Diamonds", "Hearts", "Spades"};
  string ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9",
    "10", "Jack", "Queen", "King"};
  // found indicates whether a suit has been picked
  bool found[4];

  // Count the number of picks
  int numberOfPicks = 0;
	
	srand(time(0));
    
  // Count occurrence in each suit
  int count = 0;
  while (count < 4) 
	{
    numberOfPicks++;
    int index = rand() % NUMBER_OF_CARDS;
    if (!found[index / 13]) {
      found[index / 13] = true;
      count++;
        
      string suit = suits[index / 13];
      string rank = ranks[index % 13];
      cout << rank << " of " << suit << endl;
    }
  }
    
  cout << "Number of picks: "  << numberOfPicks << endl;
		
	return 0;
}