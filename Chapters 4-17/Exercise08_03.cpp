#include <iostream>
using namespace std;

void sortScores(int [][2], int);

int main()
{
  const int NUMBER_OF_STUDENTS = 8;
  const int NUMBER_OF_QUESTIONS = 10;

  // Students' answers to the questions
  char answers[NUMBER_OF_STUDENTS][NUMBER_OF_QUESTIONS] = 
  {
    {'A', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
    {'D', 'B', 'A', 'B', 'C', 'A', 'E', 'E', 'A', 'D'},
    {'E', 'D', 'D', 'A', 'C', 'B', 'E', 'E', 'A', 'D'},
    {'C', 'B', 'A', 'E', 'D', 'C', 'E', 'E', 'A', 'D'},
    {'A', 'B', 'D', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
    {'B', 'B', 'E', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
    {'B', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
    {'E', 'B', 'E', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}
  };

  // Key to the questions
  char keys[] = {'D', 'B', 'D', 'C', 'C', 'D', 'A', 'E', 'A', 'D'};
  int scores[NUMBER_OF_STUDENTS][2];
	for (int i = 0; i < NUMBER_OF_STUDENTS; i++)
	{
		scores[i][0] = i;
		scores[i][1] = 0;
	}
  // Grade all answers
  for (int i = 0; i < NUMBER_OF_STUDENTS; i++)
  {
    // Grade one student
    int correctCount = 0;
    for (int j = 0; j < NUMBER_OF_QUESTIONS; j++)
    {
      if (answers[i][j] == keys[j])
        scores[i][1]++;
    }
  }
	sortScores(scores, NUMBER_OF_STUDENTS);
	
	for (int i = 0; i < NUMBER_OF_STUDENTS; i++)
		if (scores[i][1] > 6)
			cout << "Student " << scores[i][0] << 
		  "'s correct count is " << scores[i][1] << endl;

  return 0;
}

void sortScores(int scores[][2], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int max = scores[i][1];
		int maxIndex = i;
		for (int j = i + 1; j < n; j++)
			if (scores[j][1] > max)
			{
				max = scores[j][1];
			  maxIndex = j;
			}
		if (maxIndex != i)
		{
			scores[maxIndex][1] = scores[i][1];
			scores[maxIndex][0] = i;
			scores[i][1] = max;
			scores[i][0] = maxIndex;
		}
	}
}