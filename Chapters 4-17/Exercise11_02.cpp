#include <iostream>
using namespace std;

bool isConsonant(char ch)
{
	return isalpha(ch) && ch != 'a' && ch != 'e' && 
	    ch != 'i' && ch != 'o' && ch != 'u';
}

int main()
{
	cout << "Enter the size of the array: ";
	int size;
	cin >> size;
	char* list = new char[size];
	
	cout << "Enter " << size << " characters: ";
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		char ch;
		cin >> ch;
		if (isConsonant(ch))
			*(list + count++) = ch;
	}
	
	cout << "The " << count << " consonants are ";
	for (int i = 0; i < count; i++)
		cout << *(list + i) << " ";
	
	return 0;
}