#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void dropBall(int, int, int [], string []);
void printResult(int, int, int [], string []);

int main()
{
	cout << "Enter the number of balls to drop: ";
	int numOfBalls;
	cin >> numOfBalls;
	
	cout << "Enter the number of slots in the bean machine: ";
	int numOfSlots;
	cin >> numOfSlots;
	
	string path[numOfBalls];
	int slots[numOfSlots];
	for (int i = 0; i < numOfSlots; i++)
		slots[i] = 0;
	
	srand(time(0));
	for (int i = 0; i < numOfBalls; i++)
		dropBall(i, numOfSlots, slots, path);
	
	printResult(numOfBalls, numOfSlots, slots, path);
  
  return 0;
}

void dropBall(int ball, int n, int slots[], string path[])
{
	int index = 0;
	for (int i = 0; i < n - 1; i++)
  {
		int hit = rand() % 2;
		path[ball] += (hit == 1 ? 'R' : 'L');
		index += hit;
	}
	
	slots[index]++;
}

void printResult(int balls, int n, int slots[], string path[])
{
	for (int i = balls - 1; i >= 0; i--)
		cout << path[i] << endl;
	
	string result[balls];
	for (int i = 0; i < balls; i++)
	{
		for (int j = 0; j < n; j++)
			if (slots[j] > 0)
			{
				result[i] += "0";
				slots[j]--;
			}
			else
				result[i] += " ";
	}
	
	for (int i = balls - 1; i >= 0; i--)
		cout << result[i] << endl;
}