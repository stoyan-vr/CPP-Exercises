#include <iostream>
#include <vector>
#include "ImprovedStack.h"
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <sstream>

using namespace std;

int sort(int);
bool isSolvable(int []);
char getRandomOperator();
int evaluateExpression(const string&);
string intToString(int n);
void processAnOperator(Stack<int>& stack, char op);

int main()
{
	int total = 0;
	int count = 0;
	vector<int> v;
	for (int i = 1; i <= 13; i++)
    for (int j = i; j <= 13; j++) 
			for (int k = j; k <= 13; k++)
	      for (int l = k; l <= 13; l++)
				{
					int list[4] = {i, j, k, l};
					if (isSolvable(list))
						count++;
					total++;
				}
	cout << "Number of no solutions " << (total - count) << endl;
  cout << "Number of solutions " << count << endl;
  cout << "Number of combinations " << total << endl;	
	
	return 0;
}

bool isSolvable(int requiredNumbers[])
{
  int answer = 24;
  int operatorLimit = 3;
  int length = 4 + operatorLimit; // required length
  string expression;
  int attempts = 0;
	
  do {
            // reset required fields
    expression.erase();
    Stack<int> shuffledNumbers;
		random_shuffle(requiredNumbers, requiredNumbers + 4);
    for (int i = 0; i < 4; i++)
			shuffledNumbers.push(requiredNumbers[i]);

    int tracker = 0;
    int operatorCount = 0;
    int count = 0;

    while (count < length) 
	  {
      if (shuffledNumbers.empty()) 
			{ // check if operator is required
        expression.append(1, getRandomOperator());
				expression.append(" ");
        tracker -= 2;
      } else if (operatorCount == operatorLimit || tracker - 2 < 0) { // check if an operand is required
          expression.append(intToString(shuffledNumbers.pop())); 
				  expression.append(" ");
          tracker++;
      } 
			else if (rand() % 2 == 1)
			{ // add operand
        expression.append(intToString(shuffledNumbers.pop()));
				expression.append(" ");
        tracker++;
      } 
			else 
			{
        expression.append(1, getRandomOperator()); // add operator
				expression.append(" ");
        tracker -= 1;
      }
      count++;
    }
		expression = expression.substr(0, expression.length() - 1);
		answer = evaluateExpression(expression);

    attempts++;
  } 
	while (answer != 24 && attempts < 10000);
	
  return answer == 24;
}

char getRandomOperator() 
{
  char operators[] =  {'+', '-', '*', '/'};
  return operators[rand() % 4];
}

int evaluateExpression(const string& s)
{
	Stack<int> stack;
	stringstream ss(s);
	string token;
	while (!ss.eof())
	{
		ss >> token;
		if (!isdigit(token[0]))
			processAnOperator(stack, token[0]);
		else
			stack.push(atoi(token.c_str()));
	}
	return stack.pop();
}

void processAnOperator(Stack<int>& stack, char op)
{
  int op2 = stack.pop();
	int op1 = stack.pop();
	
  switch (op)
	{
		case '+': stack.push(op1 + op2); break;
		case '-': stack.push(op1 - op2); break;
		case '*': stack.push(op1 * op2); break;
		case '/': stack.push(op2 != 0 ? op1 / op2 : 10000); break;
	}
}

string intToString(int n)
{
	string s;
	while (n != 0)
	{
		s.insert(0, 1, static_cast<char>(n % 10 + '0'));
		n /= 10;
	}
	
	return s;
}