#include "bankAccount.h"

BankAccount::BankAccount(){
    newAccountHolderName = "";
    newAccountNumber = 0;
    newAccountType = "";
    newBalance = 0.0;
    newInterestRate = 0.0;
}

BankAccount::BankAccount(string accountholdername, string accounttype, double balance, int accountNumber){
    
    newAccountHolderName = accountholdername;
    newAccountType = accounttype;
    newBalance = balance;
    newAutoAssign = accountNumber;
}

BankAccount::~BankAccount() {
    
}

string BankAccount::getAcctName() const {
    return newAccountHolderName;
}

string BankAccount::getAcctType() const {
    return newAccountType;
}

double BankAccount::getBalance() const {
    return newBalance;
}




