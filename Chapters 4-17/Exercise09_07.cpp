#include <iostream>
#include <ctime>
#include "SelectionSort.h"
#include <cstdlib>
using namespace std;

class StopWatch
{
private:
	int startTime;
	int endTime;

public:	
	StopWatch()
	{
		startTime = time(0);
	}
	
	int getStartTime()
	{
		return startTime;
	}
	
	int getEndTime()
	{
		return endTime;
	}
	
	void start()
	{
		startTime = time(0);
	}
	
	void stop()
	{
		endTime = time(0);
	}
	
	int getElapsedTime()
	{
		return (endTime - startTime) * 1000;
	}
};

int main()
{
	srand(time(0));
	int list[100000];
	for (int i = 0; i < 100000; i++)
		list[i] = rand();
	
	StopWatch stopWatch;
	
	stopWatch.start();
	selectionSort(list, 100000);
	stopWatch.stop();
	
	cout << "Execution time is " << stopWatch.getElapsedTime() << endl;
	
	return 0;
}