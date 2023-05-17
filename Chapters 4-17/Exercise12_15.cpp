#include <iostream>
#include <string>
#include <vector>
#include "ImprovedStack.h"

using namespace std;

bool isCorrect(const string&);
char matching(char);

int main()
{
	int count = 0;
	string value;
	while (true)
	{
		string s;
		getline(cin, s);
		if (s.length() < 1)
			count++;
		else 
		{
			value.append(s);
			count = 0;
	  }
		if (count >= 3)
			break;
	}
	if (isCorrect(value))
		cout << "Correct pairs";
	else
		cout << "Incorrect";
	
	return 0;
}

bool isCorrect(const string& s)
{
	string s1;
	Stack<char> stack;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '{' || s[i] == '(' || s[i] == '['){
			cout << s[i];
			stack.push(s[i]);
		}
		else if (s[i] == '}' || s[i] == ')' || s[i] == ']'){
			cout << s[i];
			if (stack.empty() || s[i] != matching(stack.peek()))
				return false;
			else
				stack.pop();
		}
	}
	cout << s1 << endl;
	
	return stack.empty();
}

char matching(char ch)
{
	switch (ch)
	{
		case '{': return '}';
		case '(': return ')'; 
		case '[': return ']'; 
	}
}