#include <iostream>
#include "savingsAccount.h"
#include "bankAccount.h"
using namespace std;

//Constructor
savingsAccount::savingsAccount(string acctName ,int acctNumber, double balAmount, double iRate) :bankAccount(acctName ,acctNumber, balAmount) {
    interestRate = iRate;
}

//Add interest
void savingsAccount::postInterest() {
    setBalance(getBalance() + getBalance() * (interestRate / 100));
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
    cout << "Account name: " << getAccountName() << endl;
    cout << "Account number: " << getAccountNumber() << endl;
    cout << "Balance: " << getBalance() << endl;
    cout << "InterestRate: " << interestRate << "\n" << endl;
}

//Setter
void savingsAccount::setInterestRate(double iRate) {
    interestRate = iRate;
}

//Getter
double savingsAccount::getInterestRate() {
    return interestRate;
}

