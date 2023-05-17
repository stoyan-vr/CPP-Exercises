#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

string getWord()
{
	srand(time(0));
	string words[] = {"program", "computer", "table", "monster", "apple", "country"};
	return words[rand() % 6];
}

string hideLetters(const string& word)
{
	string result;
	for (int i = 0; i < word.length(); i++)
		result += '*';
	return result;
}

void setLetters(char letter, const string& word, string& guess)
{
	for (int i = 0; i < word.length(); i++)
		if (letter == word[i])
			guess[i] = letter;
}

void guessWord()
{
	string word = getWord();
	string guess = hideLetters(word);

	int count = 0;
	while (word.compare(guess) != 0)
	{
		cout << "Enter a letter in word " << guess << " > ";
		char letter;
		cin >> letter;
		int index = word.find(letter);
		if (index != -1 && guess.find(letter) == -1)
			setLetters(letter, word, guess);
		else if (guess.find(letter) != -1)
			cout << letter << " is already in the word" << endl; 
		else
		{
			cout << letter << " is not in the word" << endl;
			count++;
		}
	}
	cout << "The word is " << word << ". You missed " << count <<
	      (count != 1 ? " times" : " time") << endl;
}

int main()
{
	char answer;
	do {
		guessWord();
		cout << "\nDo you want to guess for another word? Enter y or n> ";
		cin >> answer;
	}
	while (answer == 'y' || answer == 'Y');
	
	return 0;
}