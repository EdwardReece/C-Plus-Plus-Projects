#include <iostream>
#include "bankAccount.h"
#include "savingsAccount.h"

using namespace std;

//Constructor
savingsAccount::savingsAccount(string acctName ,int acctNumber, double balAmount, double iRate) :bankAccount(acctName ,acctNumber, balAmount) {
    interestRate = iRate;
}

//Add interest
void savingsAccount::postInterest() {
    setBalance(getBalance() + (getBalance() * interestRate));
    }

//Withdraw amount
void savingsAccount::withdraw(double amount) {
    if (amount > getBalance()) {
        cout << "Balance less than amount!!!\n";
    }
    else {
        setBalance(getBalance() - amount);
    }
}

//Display Account Info
void savingsAccount::print() {
    cout << "Savings ACCT: " << getAccountName() <<
    "  ACCT #: " << getAccountNumber() <<
    "  ACCT Balance: $" << getBalance() << endl;
    cout << endl;
    
}

//CreateMonthlyStatement for Savings
void savingsAccount::createMonthlyStatement() {
        postInterest();
}

//Setter
void savingsAccount::setInterestRate(double iRate) {interestRate = iRate;}

//Getter
double savingsAccount::getInterestRate() {return interestRate;}

