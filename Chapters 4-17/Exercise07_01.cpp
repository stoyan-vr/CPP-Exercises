#include <iostream>
using namespace std;

char getGrade(int score, int best)
{
	if (score >= best - 10)
    return 'A';
	else if (score >= best - 20)
		return 'B';
	else if (score >= best - 30)
		return 'C';
	else if (score >= best - 40)
		return 'D';
	else 
		return 'F';
}

int main()
{
	cout << "Enter the number of students: ";
	int n;
	cin >> n;
	
	int scores[n];
	
	cout << "Enter " << n << " scorses: ";
	for (int i = 0; i < n; i++)
		cin >> scores[i];
	
	int best = scores[0];
	
	for (int i = 0; i < n; i++)
		if (scores[i] > best)
			best = scores[i];
		
	for (int i = 0; i < n; i++)
		cout << "Student " << i << " score is " << scores[i] 
	       << " and the grade is " << getGrade(scores[i], best) << endl;
	
	return 0;
}