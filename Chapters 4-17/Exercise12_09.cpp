#include <iostream>
#include <vector>
using namespace std;

#ifndef STACK_H
#define STACK_H

template<typename T>
class Stack
{
public:
  Stack();
  bool empty() const;
  T peek() const;
  void push(T value);
  T pop();
  int getSize() const;

private:
  vector<T> elements;
  int size;
};

template<typename T>
Stack<T>::Stack()
{
  size = 0;
}

template<typename T>
bool Stack<T>::empty() const
{
  return (size == 0);
}

template<typename T>
T Stack<T>::peek() const
{
  return elements[size - 1];
}

template<typename T>
void Stack<T>::push(T value)
{
  elements.push_back(value);
	size++;
}

template<typename T>
T Stack<T>::pop()
{
	T value = elements[--size];
	elements.pop_back();
  return value;
}

template<typename T>
int Stack<T>::getSize() const
{
  return size;
}

#endif

int main()
{
  // Create a stack of int values
  Stack<int> intStack;
  for (int i = 0; i < 10; i++)
    intStack.push(i);

  while (!intStack.empty())
    cout << intStack.pop() << " ";
  cout << endl;

  // Create a stack of strings
  Stack<string> stringStack;
  stringStack.push("Chicago");
  stringStack.push("Denver");
  stringStack.push("London");

  while (!stringStack.empty())
    cout << stringStack.pop() << " ";
  cout << endl;

  return 0;
}