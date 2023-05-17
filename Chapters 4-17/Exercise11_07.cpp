#include <iostream>
#include "Account.h"
using namespace std;

void displayMenu(int id)
{
	Account accounts[10];
	for (int i = 0; i < 10; i++)
		accounts[i].setBalance(100);
	
	int choice;
	do 
	{
		cout << "\nMain menu" << endl;
	  cout << "1: check balance: " << endl;
	  cout << "2: withdraw: " << endl;
	  cout << "3: deposit: " << endl;
	  cout << "4: exit: " << endl;
	  cout << "Enter a choice: ";
		cin >> choice;
		if (choice == 1)
			cout << "The balance is " << accounts[id].getBalance() << endl;
		else if (choice == 2)
		{
			cout << "Enter an amount to withdraw: ";
			double amount;
			cin >> amount;
			accounts[id].withdraw(amount);
		}
		else if (choice == 3)
		{
			cout << "Enter an amount to deposit: ";
			double amount;
			cin >> amount;
			accounts[id].deposit(amount);
		}
		else
			continue;
	}
	while (choice != 4);
}

int main()
{
	while (true)
	{
		cout << "Enter an id: ";
		int id;
		cin >> id;
	  if (id >= 0 && id < 10)
			displayMenu(id);
		else
			continue;
	}
	
	return 0;
}