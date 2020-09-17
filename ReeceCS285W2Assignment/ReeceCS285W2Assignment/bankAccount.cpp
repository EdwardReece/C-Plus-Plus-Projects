#include "bankAccount.h"
#include <iostream>

using namespace std;

//Constructor
bankAccount::bankAccount(string acctName ,int acctNumber, double balAmount){
    setAccountName(acctName);
    setAccountNumber(acctNumber);
    setBalance(balAmount);
}
void bankAccount::deposit(double amount) {
    if (amount >= 0) {
        balance += amount;
    }
}
//Getters
string bankAccount::getAccountName() {return accountName;}
int bankAccount::getAccountNumber() {return accountNumber;}
double bankAccount::getBalance() {return balance;}

//Setters
void bankAccount::setAccountName(string acctName) {
        accountName = acctName;
}
void bankAccount::setAccountNumber(int acctNumber) {
    if (acctNumber > 0) {
        accountNumber = acctNumber;
    }
}
void bankAccount::setBalance(double balAmount) {
    if (balAmount > 0) {
        balance = balAmount;
    }
    else
    {
        balance = 0;
    }


}
    


