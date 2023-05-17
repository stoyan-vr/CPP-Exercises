#include <iostream>
#include "Date.h"
#include "Account.h"
#include "Transaction.h"
#include <vector>

using namespace std;


Transaction::Transaction(char type, double amount, double balance, const string& description)
{
	this->type = type;
  this->amount = amount;
  this->balance = balance;
  this->description = description;
}	

Date Transaction::getDate() const
{
	return date;
}

char Transaction::getType() const
{
	return type;
}

double Transaction::getAmount() const
{
	return amount;
}

double Transaction::getBalance() const
{
	return balance;
}

string Transaction::getDescription() const
{
	return description;
}

void Transaction::setDate(const Date& date)
{
	this->date = date;
}

void Transaction::setType(char type)
{
	this->type = type;
}

void Transaction::setAmount(double amount)
{
	this->amount = amount;
}

void Transaction::setBalance(double balance)
{
	this->balance = balance;
}

void Transaction::setDescription(const string& description)
{
	this->description = description;
}

int main()
{
	Account account(1122, "George", 1000);
	account.deposit(30);
	account.deposit(40);
	account.deposit(50);
	account.withdraw(5);
	account.withdraw(4);
	account.withdraw(2);
	
	cout << "Account holder name " << account.getName() << endl;
	cout << "Balance " << account.getBalance() << endl;
	cout << "Interest rate " << account.getAnnualInterestRate() << endl;
	vector<Transaction> v = account.getTransactoins();
	cout << "Transactions: " << endl;
	for (int i = 0; i < v.size(); i++)
	{
		Date date = v[i].getDate();
		cout << date.getDay() << "/" << date.getMonth() << "/" << date.getYear() <<
		    " " << v[i].getType() << " " << v[i].getAmount() << " " << v[i].getDescription() << endl;
	}
	return 0;
}