#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include "ImprovedStack.h"
using namespace std;

// Split an expression into numbers, operators, and parenthese
vector<string> split(const string& expression);

// Evaluate an expression and return the result
int evaluateInfixExpression(const string& expression);

// Perform an operation
void processAnOperator(
  Stack<int>& operandStack, Stack<char>& operatorStack);
bool noSolution(const string&);	
string getExpression(int []);
string intToString(int);
char getRandomOperator();
int evaluateExpression(const string&);
void processAnOperator(Stack<int>&, char);
string postfixToInfix(const string&);
bool isOperand(char ch);

int main()
{
  const int NUMBER_OF_CARDS = 52;
  int deck[NUMBER_OF_CARDS];
	string suits[] = {"Spades", "Hearts", "Diamonds", "Clubs"};
  string ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9",
    "10", "Jack", "Queen", "King"};

  // Initialize cards
  for (int i = 0; i < NUMBER_OF_CARDS; i++)
    deck[i] = i;

  // Shuffle the cards
  srand(time(0));
  for (int i = 0; i < NUMBER_OF_CARDS; i++)
  {
    // Generate an index randomly
    int index = rand() % NUMBER_OF_CARDS;
    int temp = deck[i];
    deck[i] = deck[index];
    deck[index] = temp;
  }

  // Display the first four cards
	int numbers[4];
  for (int i = 0; i < 4; i++)
  {
		int n = deck[i] % 13 + 1;
		numbers[i] = n;
		string suit = suits[deck[i] / 13];
    string rank = ranks[deck[i] % 13];
    cout << rank;
		if (n > 10 || n == 1)
			cout << "(" << n << ")";
		cout << " of " << suit << endl;
  }
	
	string s;
	cout << "Enter an expression: ";
	getline(cin, s);
	
	if (s.length() == 1 && s[0] == '0')
		if (noSolution(s))
			cout << "Yes. No 24 points" << endl;
		else
			cout << "Sorry one correct expression would be " << getExpression(numbers) << endl;
	else
		cout << "Congratulations! You got it!" << endl;

  return 0;
}

bool noSolution(const string& s)
{
	return evaluateExpression(s);
}


vector<string> split(const string& expression)
{
  vector<string> v; // A vector to store split items as strings
  string numberString; // A numeric string

  for (unsigned int i = 0; i < expression.length(); i++)
  {
    if (isdigit(expression[i]))
      numberString.append(1, expression[i]); // Append a digit
    else
    {
      if (numberString.size() > 0)
      {
        v.push_back(numberString); // Store the numeric string
        numberString.erase(); // Empty the numeric string
      }

      if (!isspace(expression[i]))
      {
        string s;
        s.append(1, expression[i]);
        v.push_back(s); // Store an operator and parenthesis
      }
    }
  }

  // Store the last numeric string
  if (numberString.size() > 0) 
    v.push_back(numberString);
  
  return v;
}

// Evaluate an expression 
int evaluateInfixExpression(const string& expression)
{
  // Create operandStack to store operands
  Stack<int> operandStack;

  // Create operatorStack to store operators
  Stack<char> operatorStack;

  // Extract operands and operators
  vector<string> tokens = split(expression);

  // Phase 1: Scan tokens
  for (unsigned int i = 0; i < tokens.size(); i++)
  {
    if (tokens[i][0] == '+' || tokens[i][0] == '-')
    {
      // Process all +, -, *, / in the top of the operator stack
      while (!operatorStack.empty() && (operatorStack.peek() == '+'
       || operatorStack.peek() == '-' || operatorStack.peek() == '*'
       || operatorStack.peek() == '/'))
      {
        processAnOperator(operandStack, operatorStack);
      }

      // Push the + or - operator into the operator stack
      operatorStack.push(tokens[i][0]);
    }
    else if (tokens[i][0] == '*' || tokens[i][0] == '/')
    {
      // Process all *, / in the top of the operator stack
      while (!operatorStack.empty() && (operatorStack.peek() == '*'
        || operatorStack.peek() == '/'))
      {
        processAnOperator(operandStack, operatorStack);
      }

      // Push the * or / operator into the operator stack
      operatorStack.push(tokens[i][0]);
    }
    else if (tokens[i][0] == '(')
    {
      operatorStack.push('('); // Push '(' to stack
    }
    else if (tokens[i][0] == ')')
    {
      // Process all the operators in the stack until seeing '('
      while (operatorStack.peek() != '(')
      {
        processAnOperator(operandStack, operatorStack);
      }

      operatorStack.pop(); // Pop the '(' symbol from the stack
    }
    else
    { // An operand scanned. Push an operand to the stack as integer
      operandStack.push(atoi(tokens[i].c_str()));
    }
  }

  // Phase 2: process all the remaining operators in the stack
  while (!operatorStack.empty())
  {
    processAnOperator(operandStack, operatorStack);
  }

  // Return the result
  return operandStack.pop();
}

// Process one opeator: Take an operator from operatorStack and 
// apply it on the operands in the operandStack 
void processAnOperator(
    Stack<int>& operandStack, Stack<char>& operatorStack)
{
  char op = operatorStack.pop();
  int op1 = operandStack.pop();
  int op2 = operandStack.pop();
  if (op == '+')
    operandStack.push(op2 + op1);
  else if (op == '-')
    operandStack.push(op2 - op1);
  else if (op == '*')
    operandStack.push(op2 * op1);
  else if (op == '/')
    operandStack.push(op2 / op1);
}

string getExpression(int requiredNumbers[]) {
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

  if (answer == 24)
    return "The solution is " + postfixToInfix(expression);
  else
    return "There is no solution";
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

string postfixToInfix(const string& s)
{
	cout << s << endl;
	vector<string> tokens = split(s);
	Stack<char> operands;
	for (int i = 0; i < tokens.size(); i++)
		if (isOperand(tokens[i][0]))
			operands.push(tokens[i][0]);
	Stack<string> stack;
	for (unsigned i = 0; i < tokens.size(); i++)
	{
		if (isdigit(tokens[i][0]))
			stack.push(tokens[i]);
		else
    {
			if (stack.getSize() < 2)
			{
				cout << "Error";
				exit(1);
			}
			else 
			{
				string op1 = stack.pop();
				string op2 = stack.pop();
				stack.push("(" + op2 + tokens[i] + op1 + ")");
			}
		}
  }
  if (stack.getSize() == 1)
	{
		string result = stack.pop();
		return result;
	}
  else 
    return "error";		
}	

bool isOperand(char ch)
{
	return ch == '+' || ch == '-' || ch == '*' || ch == '/';
}