//
//  employee.hpp
//  ReeceCS285Midterm
//
//  Created by Edward Reece on 4/2/20.
//  Copyright © 2020 Edward Reece. All rights reserved.
//

#ifndef employee_hpp
#define employee_hpp

#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class Employee {
public:
    //contructor
    Employee(string, string, string, double, double);
    
    //virtual
    virtual void print()=0;
    virtual double grossPay()=0;
    virtual double netPay()=0;
    virtual double taxPaid();
    
    //getters
    string getName();
    string getDepartment();
    string getTitle();
    double getTax();
    double getPay();
    
    //setters
    void setName(string);
    void setDepartment(string);
    void setTitle(string);
    void setTax(double);
    void setPay(double);
    
private:
    //varibles for base class
    string empName;
    string empDepartment;
    string empTitle;
    double empTax;
    double empPay;
};
#endif /* employee_hpp */
