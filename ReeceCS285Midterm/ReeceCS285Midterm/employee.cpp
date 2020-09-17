//
//  employee.cpp
//  ReeceCS285Midterm
//
//  Created by Edward Reece on 4/2/20.
//  Copyright © 2020 Edward Reece. All rights reserved.
//
#include "employee.hpp"

//constructor
Employee::Employee(string name, string department, string title, double tax, double payRate){
    
    setName(name);
    setDepartment(department);
    setTitle(title);
    setTax(tax);
    setPay(payRate);
}

//getters
string Employee::getName(){
    return empName;
}
string Employee::getDepartment(){
    return empDepartment;
}
string Employee::getTitle(){
    return empTitle;
}
double Employee::getTax(){
    return empTax;
}
double Employee::getPay(){
    return empPay;
}

//setters
void Employee::setName(string name){
    empName = name;
}
void Employee::setDepartment(string department){
    empDepartment = department;
}
void Employee::setTitle(string title){
    empTitle = title;
}
void Employee::setTax(double tax){
    empTax = tax;
}
void Employee::setPay(double payRate){
    empPay = payRate;
}
//Virtual methods
//Print employee details
void Employee::print(){
}
double Employee::grossPay(){
    return empPay;
}
double Employee::netPay(){
    return empPay - (empPay * empTax);
}
double Employee::taxPaid(){
    return empTax * grossPay();
}


