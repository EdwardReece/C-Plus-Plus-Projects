#include "bankAccount.h"
#include "checkingAccount.h"

#include <iostream>
#include <iomanip>

using namespace std;

//Constructor
checkingAccount::checkingAccount(string acctName,int acctNumber , double balAmount, double minBalance, double iRate, double serCharge, double monthFee):bankAccount(acctName ,acctNumber, balAmount) {
    interestRate = iRate;
    setMinimumBalance(minBalance);
    setServiceCharge(serCharge);
    setMonthlyFee(monthFee);
}
//add interest
void checkingAccount::postInterest() {setBalance(getBalance() + getBalance() * (interestRate));}

//withdraw, also looking for service charge
void checkingAccount::writeCheck(double amount) {withdraw(amount);}

//Withdraw, applying service charge if needed
void checkingAccount::withdraw(double amount) {
    if (bankAccount::balance < amount) {
        cout << "insufficient Funds!!" << endl;
    }
    else if (getBalance() - amount < minimumBalance) {
        if ((getBalance() - amount) - serviceCharge < 0) {
            cout << "insufficient Funds!!" << endl;
        }
        else {
            setBalance(getBalance() - amount - serviceCharge);
        }
    }
    else {
        setBalance(getBalance() - amount);
    }
}

//Display Account Info
void checkingAccount::print() {
    cout << " Interest Checking ACCT Holder: " << getAccountName() <<
    " ACCT #: " << getAccountNumber() <<
    " ACCT Balance: $" << getBalance() <<
    " ACCT InterestRate: " << interestRate * 100 << "%" << endl;
    cout << endl;
}
//CreateMonthlyStatement
void checkingAccount::createMonthlyStatement() {
    
    if (monthlyFee < getBalance()){
        postInterest();
        setBalance(getBalance() - monthlyFee);
    }
}


//Setters
void checkingAccount::setMinimumBalance(double amount) {minimumBalance = amount;}
void checkingAccount::setInterestRate(double iRate) {interestRate = iRate;}
void checkingAccount::setServiceCharge(double amount) {serviceCharge = amount;}
void checkingAccount::setMonthlyFee(double monthFee) {monthlyFee = monthFee;}

//Getters
double checkingAccount::getMinimumBalance() {return minimumBalance;}
double checkingAccount::getInterestRate() {return interestRate;}
double checkingAccount::getServiceCharge() {return serviceCharge;}
double checkingAccount::getMonthlyFee() {return monthlyFee;}


