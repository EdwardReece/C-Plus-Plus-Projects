#include <iostream>
#include "bankAccount.h"
#include "savingsAccount.h"
#include "checkingAccount.h"
using namespace std;

int main() {
    //Variabes
    string accountName = "";
    int accountNumber = 1000;
    double checkingInterestRate = .03;
    double savingsInterestRate = .0625;
    double minBalance = 10;
    double serCharge = 35;
    //Create 2 savings and checking accounts
    checkingAccount Member1("Deacon", accountNumber++, 1000, checkingInterestRate, minBalance, serCharge);
    checkingAccount Member2("Maggie", accountNumber++, 450, checkingInterestRate, minBalance, serCharge);
    savingsAccount Member3("Samantha", accountNumber++, 9300, savingsInterestRate);
    savingsAccount Member4("Cody", accountNumber++, 32, savingsInterestRate);
    //Deposit values
    Member1.deposit(1000);
    Member2.deposit(2300);
    Member3.deposit(800);
    Member4.deposit(500);
    //Interset added
    Member1.postInterest();
    Member2.postInterest();
    Member3.postInterest();
    Member4.postInterest();
    //Display details
    cout << "-----------------\n" << endl;
    Member1.print();
    Member2.print();
    Member3.print();
    Member4.print();
    // write check and with draw
    cout << "-----------------\n" << endl;
    Member1.writeCheck(250);
    Member2.writeCheck(350);
    Member3.withdraw(120);
    Member4.withdraw(290);
    //Display details
    cout << "-----------------\n" << endl;
    Member1.print();
    Member2.print();
    Member3.print();
    Member4.print();
    cout << "-----------------\n" << endl;
    return 0;
}
