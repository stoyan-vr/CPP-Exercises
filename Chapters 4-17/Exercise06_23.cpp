#include <iostream>
#include <iomanip>
using namespace std;

// Check whether number is prime
bool isPrime(int number) 
{
	for (int divisor = 2; divisor <= number / 2; divisor++)
	{
		if (number % divisor == 0)
		{
			// If true, number is not prime
			return false; // number is not a prime
		}
	}
	
	return true; // number is prime
}

// Return nuber reversed
int reversal(int n) 
{
	int result = 0;
	while (n != 0) {
		int reminder = n % 10;
		result = result * 10 + reminder;
		n /= 10;
	}
	
	return result;
}

// Return true if number is the same as its reversal
bool isPalindrome(int n) 
{
	return n == reversal(n);
}

void printPrimeNumbers(int numberOfPrimes)
{
	const int NUMBER_OF_EMIRMPS_PER_LINE = 10; // Display 10 per line
	int count = 0; // Count the number of prime numbers
	int number = 2; // A number to be tested for primeness
	
	// Repeatedly find prime numbers
	while (count < numberOfPrimes)
	{
		// Print the prime number and increase the count
		if (isPrime(number) && !isPalindrome(number) && isPrime(reversal(number)))
		{
			count++; // Increase the count
			
			if (count % NUMBER_OF_PRIMES_PER_LINE == 0)
			{
				// Print the number and advance to the new line
				cout << setw(5) << number << endl;
			}
			else
				cout << setw(5) << number;
		}
		
		// Check if the next number is prime
		number++;
	}
}

int main()
{
	cout << "The first 50 prime numbers are \n";
	printPrimeNumbers(50);
	
	return 0;
}