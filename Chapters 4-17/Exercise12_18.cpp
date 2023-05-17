#include <iostream>
#include <cstdlib>
#include <vector>
#include "ImprovedStack.h"
using namespace std;

string infixToPostfix(const string&);
vector<string> split(const string&);

int main()
{
	cout << "Enter an expression: ";
	string expression;
	getline(cin, expression);
	
	cout << expression << " postfix is " << 
	  infixToPostfix(expression);
		
	return 0;
}

string infixToPostfix(const string& expression)
{
	vector<string> tokens = split(expression);
	
	Stack<char> operatorStack;
	
	string s;
	
	for (int i = 0; i < tokens.size(); i++)
	{
		if (tokens[i][0] == '+' || tokens[i][0] == '-')
		{
			while (!operatorStack.empty() && (operatorStack.peek() == '+'
			  || operatorStack.peek() == '-' || operatorStack.peek() == '*'
				|| operatorStack.peek() == '/'))
			{
				s.append(1, operatorStack.pop());
				s.append(" ");
			}
			operatorStack.push(tokens[i][0]);
		}
		else if (tokens[i][0] == '*' || tokens[i][0] == '/')
		{
			while (!operatorStack.empty() && (operatorStack.peek() == '*' 
			       || operatorStack.peek() == '/'))
			{
				s.append(1, operatorStack.pop());
				s.append(" ");
			}
			operatorStack.push(tokens[i][0]);
		}
		else if (tokens[i][0] == '(')
		{
			operatorStack.push('(');
		}
		else if (tokens[i][0] == ')')
		{
			while (operatorStack.peek() != '(')
			{
				s.append(1, operatorStack.pop());
				s.append(" ");
			}
			operatorStack.pop();
		}
		else
		{
			s.append(tokens[i]);
			s.append(" ");
		}
	}
	while (!operatorStack.empty())
	{
		s.append(1, operatorStack.pop());
		s.append(" ");
	}
		  
	return s;
}

vector<string> split(const string& s)
{
	vector<string> v;
	string n;
	for (int i = 0; i < s.length(); i++)
	{
		if (isdigit(s[i]))
			n.append(1, s[i]);
		else 
		{
			if (n.length() > 0)
			{
				v.push_back(n);
			  n.erase();
			}
			if (!isspace(s[i]))
			{
				string ch;
				ch.append(1, s[i]);
				v.push_back(ch);
			}
		}
	}
	
	if (n.length() > 0)
		v.push_back(n);
	
	return v;
}