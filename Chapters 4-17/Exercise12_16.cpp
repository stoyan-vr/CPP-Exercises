#include <iostream>
#include <sstream>
#include <cstdlib>
#include "ImprovedStack.h"
using namespace std;

int evaluateExpression(const string&);
void processAnOperator(Stack<int>&, char);

int main()
{
	cout << "Enter a postfix expression: ";
	string expression;
	getline(cin, expression);
	
	cout << expression << " = " << 
	  evaluateExpression(expression);
		
	return 0;
}

int evaluateExpression(const string& s)
{
	Stack<int> stack;
	stringstream ss(s);
	string token;
	while (!ss.eof())
	{
		ss >> token;
		if (!isdigit(token[0]) && stack.getSize() >= 2)
			processAnOperator(stack, token[0]);
		else if (isdigit(token[0]))
			stack.push(atoi(token.c_str()));
		else
		{
			cout << s << " is an incorrect postfix expression" << endl;
			exit(1);
		}
		Stack<int> temp;
		while (!stack.empty())
			temp.push(stack.pop());
		while (!temp.empty())
		{
			int n = temp.pop();
			cout << n << " ";
			stack.push(n);
		}
		cout << endl;
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
		case '/': stack.push(op1 / op2); break;
	}
}