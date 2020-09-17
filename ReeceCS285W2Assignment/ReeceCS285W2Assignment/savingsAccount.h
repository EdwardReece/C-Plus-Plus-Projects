#ifndef savingsAccount_h
#define savingsAccount_h
#include "bankAccount.h"

class savingsAccount :public bankAccount {
public:
    //Constructor Parameters
    savingsAccount(string ,int, double, double);
    
    //add interest to balance
    void postInterest();
    //Withdraw, applying service charge if needed
    void withdraw(double);
    //Display Account Info
    void print();
    
    //Setter
    void setInterestRate(double);
    
    //Getter
    double getInterestRate();

private:
    //Variables
    double interestRate;
};

#endif /* savingsAccount_h */
