//
//  salaryEmployee.cpp
//  ReeceCS285Midterm
//
//  Created by Edward Reece on 4/2/20.
//  Copyright © 2020 Edward Reece. All rights reserved.
//
#include "employee.hpp"
#include "salaryEmployee.hpp"

using namespace std;

//constructor
salaryEmployee::salaryEmployee(string name, string department, string title, double tax, double payRate) : Employee(name, department, title, tax, payRate){
     
}

//Print employee details
void salaryEmployee::print(){
    cout << fixed << setprecision(2) << "Empolyee Type: Salary |" << " Annual Amount: $"<< getPay() << " \nName: " << getName() << " | Department: " << getDepartment() << " | Title: " << getTitle() << "\nGross Pay: $" << grossPay() << " | Net Pay: $" << netPay()  << " | Tax: $" << taxPaid() << "\n\n" << endl;
}
//Get gross amount for salary
double salaryEmployee::grossPay(){
    return getPay() / 52;
}
//Applystxes to gross
double salaryEmployee::netPay(){
     return grossPay() - ((getPay() / 52) * getTax());
    }


