#include <iostream>
#include <string>

#include "bankAccount.h"

using namespace std;

int main() {
    
    BankAccount accounts[10];
    string accountholdername;
    string accounttype;
    double balance;
    double interestrate = 0.0;
    static int autoassign = 11110;
    
    for(int i = 0; i < 10; i++) {
        cout << "Enter your name: " << endl;
        cin >> accountholdername;
        cout << "Enter the type of account you would like. Saving or Checking: " << endl;
        cin >> accounttype;
        cout << "To start a new account please make a deposit. " << endl;
        cout << "The amount you deposit will determined you interest rate. " << endl;
        cout << "How much will you be depositing? " << endl;
        cin >> balance;
        
        if (balance > 1000){
            interestrate = 0.5;
        }
        else if (balance > 800){
            interestrate = 1.5;
        }
        else if(balance > 600){
            interestrate = 2.5;
        }
        else if (balance > 400){
            interestrate = 3.5;
        }
        else if (balance > 200){
            interestrate = 4.5;
        }
        else if (balance > 100){
            interestrate = 5.5;
        }
        else{
            interestrate = 6.5;
        }
        
        BankAccount Member(accountholdername, accounttype, balance, autoassign++);
        
        accounts[i] = Member;
    }
    
    for(int i = 0; i < 10; i++) {
        BankAccount accountToDisplay = accounts[i];
        cout << accountToDisplay.getAcctName() << endl;
        cout << accountToDisplay.getAcctType() << endl;
        cout << accountToDisplay.getBalance() << endl;
        cout << interestrate << endl;
        }

    return 0;
    
}
