#ifndef checkingAccount_h
#define checkingAccount_h

#include <iostream>
#include "bankAccount.h"
using namespace std;

class checkingAccount :public bankAccount {
public:
    //Constructor Parameters
    checkingAccount(string , int, double, double, double, double);
    
    //add interest to balance
    void postInterest();
    //withdraw, also looking for service charge
    void writeCheck(double);
    //Withdraw, applying service charge if needed
    void withdraw(double);
    //Display Account Info
    void print();
    
    //Setters
    void setMinimumBalance(double);
    void setServiceCharge(double);
    //Getters
    double getMinimumBalance();
    double getServiceCharge();
    
private:
    //Variables
    double interestRate;
    double minimumBalance;
    double serviceCharge;
};

#endif /* checkingAccount_h */
