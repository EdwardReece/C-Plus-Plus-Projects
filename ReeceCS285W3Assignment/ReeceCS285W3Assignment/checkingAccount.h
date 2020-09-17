#ifndef checkingAccount_h
#define checkingAccount_h

#include <iostream>
#include "bankAccount.h"
using namespace std;

class checkingAccount : public bankAccount {
public:
    //Constructor Parameters
    checkingAccount(string , int, double, double, double, double, double);
    //add interest to balance
    void postInterest();
    //withdraw, also looking for service charge
    void writeCheck(double);
    //Withdraw, applying service charge if needed
    void withdraw(double);
    //Display Account Info
    void print();
    //CreateMonthlyStatement for Checking
    void createMonthlyStatement();
    //Setters
    void setMinimumBalance(double);
    void setServiceCharge(double);
    void setInterestRate(double);
    void setMonthlyFee(double);
    //Getters
    double getMinimumBalance();
    double getServiceCharge();
    double getInterestRate();
    double getMonthlyFee();
private:
    //Variables
    double interestRate;
    double minimumBalance;
    double serviceCharge;
    double monthlyFee;
};

#endif /* checkingAccount_h */
