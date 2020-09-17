#ifndef bankAccount_h
#define bankAccount_h

#include <iostream>
using namespace std;

class bankAccount {
public:
    //Costructor Parameters
    bankAccount(string, int, double);
    
    //Deposit
    void deposit(double);
    
    //Getters
    string getAccountName();
    int getAccountNumber();
    double getBalance();
    
    //Setters
    void setAccountName(string);
    void setAccountNumber(int);
    void setBalance(double);
    
private:
    //Variables
    string accountName;
    int accountNumber;
    double balance;
};
#endif /* bankAccount_h */
