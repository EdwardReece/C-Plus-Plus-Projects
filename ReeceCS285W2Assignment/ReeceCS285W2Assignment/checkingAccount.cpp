#include <iostream>
#include "bankAccount.h"
#include "checkingAccount.h"

using namespace std;

//Constructor
checkingAccount::checkingAccount(string acctName,int acctNumber , double balAmount,double iRate, double minBalance, double serCharge):bankAccount(acctName ,acctNumber, balAmount) {
    interestRate = iRate;
    setMinimumBalance(minBalance);
    setServiceCharge(serCharge);
}

//add interest
void checkingAccount::postInterest() {setBalance(getBalance() + getBalance() * (interestRate / 100));}

//withdraw, also looking for service charge
void checkingAccount::writeCheck(double amount) {withdraw(amount);}

//Withdraw, applying service charge if needed
void checkingAccount::withdraw(double amount) {
    if (getBalance() < amount) {
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
    cout << "Account name: " << getAccountName() << endl;
    cout << "Account number: " << getAccountNumber() << endl;
    cout << "Balance: " << getBalance() << endl;
    cout << "Minimum Balance: " << minimumBalance << endl;
    cout << "InterestRate: " << interestRate << endl;
    cout << "ServiceCharge: " << serviceCharge << "\n" << endl;
}

//Setters
void checkingAccount::setServiceCharge(double amount) {serviceCharge = amount;}
void checkingAccount::setMinimumBalance(double amount) {minimumBalance = amount;}
//Getters
double checkingAccount::getMinimumBalance() {return minimumBalance;}
double checkingAccount::getServiceCharge() {return serviceCharge;}


