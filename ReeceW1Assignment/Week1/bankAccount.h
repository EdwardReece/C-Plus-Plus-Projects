#include <iostream>
#include <string>

using namespace std;

#ifndef bankAccount_H
#define bankAccount_H

class BankAccount {
public:
    BankAccount();
    
    BankAccount(string, string, double, int);
    
    ~BankAccount();
    
    string getAcctName() const; 
    string getAcctType() const;
    double getBalance() const;
    
    
private:
    string newAccountHolderName;
    int newAccountNumber;
    string newAccountType;
    double newBalance;
    double newInterestRate;
    int newAutoAssign;
};

#endif
