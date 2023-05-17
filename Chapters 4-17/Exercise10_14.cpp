#include <iostream>
#include "StackOfIntegers.h"
using namespace std;

bool isPrime(int number)
{
  // Assume the number is prime
  bool isPrime = true;

  // Test if number is prime
  for (int divisor = 2; divisor <= number / 2; divisor++)
  {
    //If true, the number is not prime
    if (number % divisor == 0)
    {
      // Set isPrime to false, if the number is not prime
      isPrime = false;
      break; // Exit the for loop
    }
  }

  return isPrime;
}

int main()
{
  const int LIMIT = 100;
  int count = 0;
  StackOfIntegers stack;

  // Repeatedly find prime numbers
  for (int number = 2; number < LIMIT; number++)
    if (!isPrime(number))
    {
      stack.push(number);
    }

  // Print the first 30 prime numbers in decreasing order
  cout << "The non-prime numbers less than 100 are \n" << endl;
  const int NUMBER_PER_LINE = 10;

  while (!stack.isEmpty())
  {
		count++;
    cout << stack.pop() << " ";

    if (count % NUMBER_PER_LINE == 0)
      cout << endl; // advance to the new line
  }

  return 0;
}
