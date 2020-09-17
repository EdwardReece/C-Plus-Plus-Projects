# C-Plus-Plus-Projects
C++

ReeceCS285W1Assignment Disription:

Define the class bankAccount to implement the basic properties of a bank account.   The class should store and implement the following data / methods:

bankAccount

Data

Account holders name (string)
Account number (int)
Account type (string, checking or savings)
Balance (double)
Interest rate (double, to be stored as a decimal value)
Static member (int named anything) used to automatically assign account numbers during account creation.
Methods

·         deposit (add money to account)

·         withdraw (take money out of account)

·         getInterest (balance times interest rate)

·         updateBalance (adds interest amount to balance)

·         print  (displays all account information)

·         getAccountNumber

·         getAccountHolderName

·         getAccountType

·         getBalance

·         getInterestRate

Constructor:
sets account holders name
sets account type
sets balance
sets interest rate
(account number is auto generated in constructor)
Create a main program to test the class as follows:

Declare an array of 10 components of type bankAccount.
Prompt the user or hard code information for up to 10 customers.    For each customer, assign name, account type, balance, and interest rate.
After all information is entered, print all account information for each customer.
Implementation Requirements
You will create three files for this assignment:

bankAccount.h     (Class definition)
bankAccount.cpp (Class implementation)
bankAccountTest.cpp    (test file for your bankAccount class)
<---------------------------------------------------------------------------------------------------------------------------------------------->


ReeceCS285W2Assignment Disription

Create from scratch or modify week 1 bankAccount class. The class should define and implement the following data and methods:

bankAccount

Data

accountNumber

balance 

Methods

setAccountNumber

getAccountNumber

getBalance

withdraw

deposit

print 

Constructor:

        

·         sets account number

·         sets account balance

Derive class checkingAccount from base class bankAccount.   The checkingAccount class should define and implement the following data and methods:

 

checkingAccount

Data

interestRate

minimumBalance

serviceCharge

Methods

getMinimumBalance

setMinimumBalance

getInterestRate

setInterestRate

getServiceCharge

setServiceCharge

postInterest

writeCheck

withdraw

print

Constructor:

        

·         sets account number

·         sets account balance

·         sets minimum balance

·         set interest rate

·         sets service charge amount

NOTES:

postInterest takes the interest amount based off of the total balance and adds it to the balance (balance + balance * interestRate)

writeCheck calls withdraw

withdraw checks to make sure there is enough money in the account first and reports a warning if not.     If there is enough money to make the withdraw, it then checks to see if the balance will go below the minimum amount after the withdraw.   If so, it checks to see if the balance will go below zero after the withdraw and the service charge is applied.  Should this occur an error is reported.  If not, the balance is adjusted to reflect the withdraw and the service charge applied.

Derive class savingsAccount from base class bankAccount.   The savingsAccount class should define and implement the following data and methods:

savingsAccount

Data

interestRate

Methods

getInterestRate

setInterestRate

withdraw

postInterest

print

Constructor:

        

·         sets account number

·         sets account balance

·         set interest rate

NOTES:

Withdraw checks to make sure there is enough money before altering the balance.    If not, a warning message is printed and the balance remains unchanged.

<---------------------------------------------------------------------------------------------------------------------------------------------->


ReeceCS285W3Assignment Disription

bankAccount polymorphism

Create from scratch or modify week 2 program as follows.    

bankAccount - The bankAccount class will be abstract in this assignment and will use virtual and pure virtual functions.

Data

accountNumber

name

balance 

Methods

getAccountNumber

getBalance

getName

setName

deposit

withdraw (virtual)

print (virtual)

createMonthlyStatement (pure virtual)

Constructor:

        

·         sets account number

·         set account holder name

·         sets account balance

Note:

Print() – displays the account number and balance

Derive class checkingAccount from base class bankAccount.   The checkingAccount class should define and implement the following data and methods:

 

checkingAccount

Data

interestRate

minimumBalance

serviceCharge

fee

Methods

getMinimumBalance

setMinimumBalance

getInterestRate

setInterestRate

getServiceCharge

setServiceCharge

postInterest

writeCheck

withdraw

print

createMonthlyStatement

Constructor:

        

·         sets account holder name

·         sets account number

·         sets account balance

·         sets minimum balance

·         set interest rate

·         sets service charge amount

·         sets amount of monthly fee

NOTES:

postInterest takes the interest amount based off of the total balance and adds it to the balance (balance + balance * interestRate)

writeCheck calls withdraw

withdraw checks to make sure there is enough money in the account first and reports a warning if not.     If there is enough money to make the withdraw, it then checks to see if the balance will go below the minimum amount after the withdraw.   If so, it checks to see if the balance will go below zero after the withdraw and the service charge is applied.  Should this occur an error is reported.  If not, the balance is adjust to reflect the withdraw and the service charge applied.

createMonthlyStatement – this posts the interest (calls postInterest()) and deducts the monthly fee from the balance.

Print uses the base class print() and then also prints the interest rate.

Derive class savingsAccount from base class bankAccount.   The savingsAccount class should define and implement the following data and methods:

savingsAccount

Data

interestRate

Methods

getInterestRate

setInterestRate

withdraw

postInterest

print

createMonthlyStatement

Constructor:

        

·         sets account holder name

·         sets account number

·         sets account balance

·         set interest rate

NOTES:

Withdraw checks to make sure there is enough money before altering the balance.    If not, a warning message is printed and the balance remains unchanged.

Create monthly statement – this posts the interest to the account

Print uses the base class print() and then also prints the interest rarte.

Create a main program to test the class as follows. Use hard coded data (do not prompt the user for data, just make up values).   Perform these steps in order:

1.      define an array to hold 6 bankAccount classes.

2.      store 3 new checking accounts and 3 new savings accounts in the array

3.      Print a “January Header”

4.      for all 6 accounts, create the monthly statement then print the account info

5.      print a February header

6.      for all 6 accounts, create the monthly statement then print the account info

7.      withdraw 500 for each account

8.      print a match header

9.      for all 6 accounts, create the monthly statement then print the account info

<---------------------------------------------------------------------------------------------------------------------------------------------->


ReeceCS285Midterm Disription

Midterm Project
Create a simple Employee class with name, department, and title.

Create an hourlyEmployee class (which inherits from the Employee class) for a basic payroll program to compute the net pay salary of hourly based employees. Your program should also find the average net pay for a small company. To define the class, include the appropriate data members, member functions, constructors, and access modifiers. For simplicity, use a constant tax rate of 30% to compute the tax amount. Employees that work over 40 hours will receive overtime pay of one and a half of their hourly rate for overtime hours worked. The output should display the name of each employee, hours worked, hourly rate, overtime pay, regular (gross) pay, tax amount, and net pay.

Create a salariedEmployee class (which inherits from the Employee class) which hold the annual salary of the employee. To define the class, include the appropriate data members, member functions, constructors, and access modifiers. Figure weekly pay by dividing the annual salary by 52. The output for the salaried employee should display the name, gross pay, tax amount (compute at 30%), and net pay.

Write a test program with an array of 6 payroll objects: 3 hourlyEmployee objects and 3 salariedEmployee objects. The data for the 6 objects should be “hard coded” into the program.


<---------------------------------------------------------------------------------------------------------------------------------------------->


ReeceCS285W4Assignment Disription

Rational Fractions

Chapter 13 Programming Exercise #10 Page 983

Additional Requirements

Use a template so the class works with any kind of number (i.e. int, float, double)

fractionType<int> num1(5, 6);

fractionType<float> num1(5.1, 6.2);

Tip:   get your class working with integer values first for numerator and denominator and convert to a template after it is working with ints.   When converting to a template you may need to move all of your implementation into the .h header file. 
 
 <---------------------------------------------------------------------------------------------------------------------------------------------->


ReeceCS285W5Assignment Disription

Safe Rational Fractions

In week 4 we completed Chapter 13 Programming Exercise #10 Page 974.   Make sure you have a working fractionType class before starting this assignment.     The template requirement from week 4 is not required for this assignment.    

Your assignment this week is to make your fractionType class safe by using exception handling.

Use exceptions so that your program handles the exceptions division by zero and invalid input.

·         An example of invalid input would be entering a fraction such as 7 / 0 or 6 / a

·         An example of division by zero would be:  1 / 2  /  0 / 3

        

Use a custom Exception class called fractionException.     The class must inherit from exception (see example in lecture and note the entire class can be implemented in the .h file as in the lecture).

Test your safe fractionType class with a main method that forces an invalid fraction and a divide by zero.     The catch block in the main method must report which kind of error was encountered – i.e. invalid fraction or divide by zero.

The following can be used to test an exception:

try {

       

        fractionType<int> num1(1,0);

        fractionType<int> num2(0,3);

        fractionType<int> num3;

        cout << fixed;

        cout << showpoint;

        cout << setprecision(2);

   

        num3 = num1 / num2;

        

        cout << num1 << " / " << num2 << " = " << num3 << endl;

    }

     catch (fractionException e) {

        cout << "Exception caight in main: " << e.what() << endl;

    }
<---------------------------------------------------------------------------------------------------------------------------------------------->


ReeceCS285W6Assignment Disription

Create your own vector class which will test algorithms from Chapter 16 and those from the STL (Appendix H).

Derive class myVector from vector.  myVector must implement the following methods:

        int seqSearch(T searchItem);

    int binarySearch(T searchItem);

    void bubbleSort();

    void insertionSort();

Create a test program to create some vectors and test your methods above.   Recall from your reading that binary search only works on a sorted list. Add a static member to the class to “remember” if the list is sorted ( i.e. binarySearch() should first sort the vector if it’s not sorted already).

Use the template below as a starter for your assignment.   All comments in green represent code which you need to implement.

#include <iostream>

#include <string>

#include <vector>

using namespace std;

template <class T>

class myVector: public vector<T> {

   

public:

    int seqSearch(T searchItem);

    int binarySearch(T searchItem);

    void bubbleSort();

    void insertionSort();

};

template <class T>

int myVector<T>::seqSearch(T searchItem)

{

   //implement sequential search

}

template <class T>

void myVector<T>::bubbleSort()

{

  //implement bubble sort

}

template <class T>

void myVector<T>::insertionSort()

{

    //implement insertion sort

}

template <class T>

int myVector<T>::binarySearch(T searchItem)

{

    //implement binary search

}

int main()

{

   

    //define test vector(s)

    myVector<string> nameList;

   

    //add values to the vector(s)

   

    //test sort methods

   

    //test search methods

   

    //print sorted vector using range based for loop

        //define new test vector(s)

        

        //define an iterator to each of the above vector containers

        //add values to the vector(s)

        //test the STL sort method

         //test the STL binary_search algorithm

        //print the resulting vector(s) using an iterator

   

    return 0;

}

Useful notes:

this->size();     //length of vector from within myVector class

this->at(index);  //value at specified index of vector from within myVector class

The STL concepts are taken from Appendix H

Submission requirements:

Submit all files required to make this program run as required.    Your solution can be a single file.

Submit source code, a screenshot with a time stamp of code execution, and a text file of the code. All code should include comments.
    
 <---------------------------------------------------------------------------------------------------------------------------------------------->


ReeceCS285W7Assignment Disription

Linked List Operations
LinkedListType, unorderedLinkedList, and orderedLinkedList are given to you in Chapter 17.  linkedListIterator is given to you as well.   The files are supplied here.

Overload the insertFirst and insertLast pure virtual functions such that they accept a vector of possible values as parameters.   All values in the vector are to be inserted.

Overload the deleteNode pure virtual function such that it accepts a vector of possible values.  All values in the vector should be deleted.

Modify deleteNode such that an exception is thrown when called on an empty list and when the item to delete is not in the list.

Finally create a 2 lists using the STL list container.   Add some values to them and sort them.   Merge the two lists together into one list.  Print the list using the screen iterator example from Appendix H.

Useful notes:

Leverage the functions which are already given to you.


 <---------------------------------------------------------------------------------------------------------------------------------------------->


ReeceCS285W8Assignment Disription

Week 8 Assignment

 

Use the stackADT class and stackType classes given to you in Ch. 18 and code supplied here to complete this assignment.

 

#include <iostream>

#include "myStack.h"

 

using namespace std;

  

int main()

{ 

stackType<int> stack1(50);

stackType<int> stack2(50);

 

stack1.initializeStack();

stack1.push(23);

stack1.push(45);

stack1.push(38);

 

stack2 = stack1; 

 

if (stack1 == stack2)

cout << "stack1 and stack2 are identical" << endl;

else

cout << "stack1 and stack2 are not identical" << endl;

 

stack2.pop();

stack2.push(32);

 

cout << "**** After pop and push operations on stack2 ****" << endl;

if (stack1 == stack2)

cout << "stack1 and stack2 are identical" << endl;

else

cout << "stack1 and stack2 are not identical" << endl;

 

stack2.push(11);

 

cout << "**** After another push operation on stack2 ****" << endl;

if (stack1 == stack2)

cout << "stack1 and stack2 are identical" << endl;

else

cout << "stack1 and stack2 are not identical" << endl;

return 0;

}

 

 

Modify the stack implementation such that it uses a vectors as the container instead of an array.

 

Overload the pure virtual function push such that it takes a vector as an argument which pushes multiple values onto the stack.  

 

Throw exceptions when:

 

·         An attempt is made to pop from an empty stack (display message)

·         An attempt is made to push onto a full stack (display message)

·         top() is called on an empty stack (display message).

·         A negative or zero value for stack size is passed to the constructor (In this case, when handling the error, automatically recall the constructor with a value of 100).

 

Using the STL queue container, add multiple stackType classes to a queue.   Demonstrate an ability to use STL queue methods such as front() and pop().
 
